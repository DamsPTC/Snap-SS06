/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104cb8270; end: 104cb837f; -[SCLensCarouselStoreProductPrefetcher start] */

void FUN_104cb8270(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e0ea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104cb8380; end: 104cb83c7;  */

void FUN_104cb8380(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be776e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cb83c8; end: 104cb8573; -[SCLensCarouselStoreProductPrefetcher _prefetchStoreProductsForLenses:] */

void FUN_104cb83c8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x18));
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar9 = *(long *)(lVar10 * 8);
      lVar3 = lVar9;
      func_0x00010c281520();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf054e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c06aee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar3);
      func_0x00010c07f200();
      if (((int)lVar9 != 0) && (lVar3 = lVar5, func_0x00010c08fa60(), lVar3 != 0)) {
        uVar6 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c107f20();
        _objc_release(uVar6);
        func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
      }
      _objc_release(lVar5);
      lVar10 = lVar10 + 1;
    } while (lVar2 != lVar10);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  uVar6 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010bf00560(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2ea60(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_3 + 0x20),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 104cb8574; end: 104cb85df; -[SCLensCarouselStoreProductPrefetcher stop] */

void FUN_104cb8574(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf00560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2ea60(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 104cb85e0; end: 104cb8633; -[SCLensCarouselStoreProductPrefetcher .cxx_destruct] */

void FUN_104cb85e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104cb8634; end: 104cb87ff; -[SCLensCarouselStoreProductPrefetchingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cb8634(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126e3aa8;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_begin_1125a3840);
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_11271049c;
    _objc_loadWeakRetained(lVar6);
  }
  lVar7 = lVar6;
  func_0x00010c090c20(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010c090c40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  puVar3 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126aef60;
  _objc_alloc();
  lVar6 = lVar2;
  func_0x00010c095ac0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_112710498;
    _objc_loadWeakRetained(lVar7);
  }
  lVar1 = lVar7;
  func_0x00010c108380(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffcd00();
  lVar8 = (long)_DAT_11271048c;
  uVar5 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar4;
  _objc_release(uVar5);
  _objc_release(lVar1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  func_0x00010c24d960(*(undefined8 *)(param_1 + lVar8));
  _objc_release(puVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 104cb8800; end: 104cb8857; -[SCLensCarouselStoreProductPrefetchingEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cb8800(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c255780(*(undefined8 *)(param_1 + _DAT_11271048c));
  puStack_28 = PTR_PTR_1126e3aa8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cb8858; end: 104cb88b7; -[SCLensCarouselStoreProductPrefetchingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cb8858(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271049c);
  _objc_destroyWeak(param_1 + _DAT_112710498);
  _objc_destroyWeak(param_1 + _DAT_112710494);
  _objc_destroyWeak(param_1 + _DAT_112710490);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271048c,0);
  return;
}



/* Entry: 104cb88b8; end: 104cb895f;  */

void FUN_104cb88b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSDateComponents_1126aef68;
  _objc_alloc_init(PTR__OBJC_CLASS___NSDateComponents_1126aef68);
  func_0x00010c2278a0();
  puVar2 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf5e300(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf64e20(puVar2,param_2,puVar1,puVar3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104cb8960; end: 104cb8a2b; -[SCRegistrationAgeVerificationInfoProviderImpl initWithCircumstanceEngine:cooldownStorage:timeProvider:] */

undefined1 *
FUN_104cb8960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e3ab0;
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



/* Entry: 104cb8a2c; end: 104cb8b03; -[SCRegistrationAgeVerificationInfoProviderImpl dateToBeginWith] */

void FUN_104cb8a2c(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 8);
  FUN_104cb8b04(lVar2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1a800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010bf46120();
  iVar1 = (int)lVar2;
  lVar2 = lVar3;
  if (iVar1 == 1) {
    func_0x00010bf69240(lVar3);
    _objc_retainAutoreleasedReturnValue();
LAB_104cb8ab8:
    lVar4 = lVar2;
    func_0x00010c10a8e0();
    _objc_release(lVar2);
  }
  else {
    if (iVar1 == 3) {
      lVar4 = 0;
      goto LAB_104cb8ae8;
    }
    if (iVar1 == 2) {
      func_0x00010bf63600(lVar3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104cb8ab8;
    }
    lVar4 = 0x12;
  }
  lVar4 = -lVar4;
  FUN_104cb88b8(lVar4);
  _objc_retainAutoreleasedReturnValue();
LAB_104cb8ae8:
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 104cb8b04; end: 104cb8bc3;  */

void FUN_104cb8b04(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104cb8f30;
  puStack_30 = &UNK_110842e18;
  _objc_retain(param_1);
  uStack_28 = param_1;
  if (lRam00000001136b89b0 != -1) {
    func_0x00010002a2fc(0x1136b89b0,&puStack_48);
  }
  if (param_2 != 0) {
    func_0x00010bf9d480(uRam00000001136b89b8);
  }
  uVar1 = uRam00000001136b89c0;
  _objc_retain(uRam00000001136b89c0);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104cb8bc4; end: 104cb8c33; -[SCRegistrationAgeVerificationInfoProviderImpl datePickerStyle] */

undefined8 FUN_104cb8bc4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_104cb8b04(uVar1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1a800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = uVar2;
  func_0x00010bf46120();
  uVar1 = 2;
  if ((int)uVar3 != 3) {
    uVar1 = 0;
  }
  if ((int)uVar3 == 2) {
    uVar1 = 1;
  }
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 104cb8c34; end: 104cb8cb7; -[SCRegistrationAgeVerificationInfoProviderImpl isUnderage:] */

bool FUN_104cb8c34(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  if (param_3 == 0) {
    bVar1 = true;
  }
  else {
    _objc_retain(param_3);
    func_0x00010c0ce300(param_1);
    param_1 = -param_1;
    FUN_104cb88b8(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf433a0(param_3,param_2,param_1);
    _objc_release(param_3);
    bVar1 = lVar2 != -1;
    _objc_release(param_1);
  }
  return bVar1;
}



/* Entry: 104cb8cb8; end: 104cb8d2b; -[SCRegistrationAgeVerificationInfoProviderImpl isValidAge:] */

bool FUN_104cb8cb8(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = false;
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010c08b300(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf433a0(param_3,param_2,param_1);
    _objc_release(param_3);
    bVar1 = lVar2 != 1;
    _objc_release(param_1);
  }
  return bVar1;
}



/* Entry: 104cb8d2c; end: 104cb8d6f; -[SCRegistrationAgeVerificationInfoProviderImpl latestValidBirthdayDate] */

void FUN_104cb8d2c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  FUN_104cb8b04(uVar5,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ce620();
  _objc_release(uVar5);
  puVar1 = PTR__OBJC_CLASS___NSDateComponents_1126aef68;
  _objc_alloc_init(PTR__OBJC_CLASS___NSDateComponents_1126aef68);
  func_0x00010c2278a0();
  puVar2 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf5e300(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf64e20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104cb8d70; end: 104cb8e2b; -[SCRegistrationAgeVerificationInfoProviderImpl isRegistrationCoolingDown] */

bool FUN_104cb8d70(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf51ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010becd8e0(param_1);
    lVar2 = lVar3;
    func_0x00010bf64e40(lVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf5e5e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bf433a0(lVar2,param_2,uVar4);
    bVar1 = lVar5 == 1;
    _objc_release(uVar4);
    _objc_release(lVar2);
  }
  _objc_release(lVar3);
  return bVar1;
}



/* Entry: 104cb8e2c; end: 104cb8e83; -[SCRegistrationAgeVerificationInfoProviderImpl startRegistrationCoolingDown] */

void FUN_104cb8e2c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf5e5e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c184000();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cb8e84; end: 104cb8ec7; -[SCRegistrationAgeVerificationInfoProviderImpl _totalCoolDownSeconds] */

double FUN_104cb8e84(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_104cb8b04(lVar1,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf51c60();
  _objc_release(lVar1);
  return (double)lVar2;
}



/* Entry: 104cb8ec8; end: 104cb8ef3; -[SCRegistrationAgeVerificationInfoProviderImpl minimumAge] */

long FUN_104cb8ec8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110dae3d8,0xd,0);
  return (long)(int)uVar1;
}



/* Entry: 104cb8ef4; end: 104cb8f2f; -[SCRegistrationAgeVerificationInfoProviderImpl .cxx_destruct] */

void FUN_104cb8ef4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104cb8f30; end: 104cb9037;  */

void FUN_104cb8f30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b84a0(uVar3,param_2,&PTR____CFConstantStringClassReference_110dae3b8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uRam00000001136b89b8;
  uRam00000001136b89b8 = uVar3;
  _objc_release(uVar4);
  uVar4 = uRam00000001136b89b8;
  func_0x00010c296d80(uRam00000001136b89b8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf04a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126aef70;
  uVar4 = uVar3;
  func_0x00010c296d80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lStack_38 = 0;
  func_0x00010c0f40e0(puVar5,param_2,uVar4,&lStack_38);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lStack_38;
  _objc_retain(lStack_38);
  _objc_release(uVar4);
  if (lVar2 == 0) {
    _objc_retain(puVar5);
    puVar1 = puRam00000001136b89c0;
    puRam00000001136b89c0 = puVar5;
    _objc_release(puVar1);
  }
  _objc_release(puVar5);
  _objc_release(lVar2);
  _objc_release(uVar3);
  return;
}



/* Entry: 104cb9038; end: 104cb911b; -[SCRegistrationAgeVerificationServiceProvider provide] */

void FUN_104cb9038(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126aef78;
  _objc_alloc(PTR_PTR_1126aef78);
  func_0x00010bff2820();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104cb911c; end: 104cb915b;  */

void FUN_104cb911c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdea900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104cb915c; end: 104cb9227; -[SCRegistrationAgeVerificationServiceProvider _createAgeVerificationInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cb915c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110847a88);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aef88;
  _objc_alloc(PTR_PTR_1126aef88);
  param_1 = param_1 + _DAT_1127104ac;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  func_0x00010bffe540(puVar2,param_2,lVar3,puVar1,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104cb9228; end: 104cb9243;  */

void FUN_104cb9228(void)

{
  _objc_opt_new(PTR_PTR_1126aef80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cb9244; end: 104cb9253; -[SCRegistrationAgeVerificationServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cb9244(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127104ac);
  return;
}



/* Entry: 104cb9254; end: 104cb92cb; -[SCRegistrationCooldownStorageKeychainImpl coolDownStartDate] */

void FUN_104cb9254(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aef90;
  func_0x00010bf63b00(PTR_PTR_1126aef90,param_2,&PTR____CFConstantStringClassReference_110dae3f8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c27f240(puVar3,param_2,puVar2,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104cb92cc; end: 104cb9327; -[SCRegistrationCooldownStorageKeychainImpl setCoolDownStartDate:] */

void FUN_104cb92cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,param_3,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1894c0(PTR_PTR_1126aef90,param_2,puVar1,
                        &PTR____CFConstantStringClassReference_110dae3f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 104cb9328; end: 104cb938f; +[SCActivationPbRegistrationAgeGating descriptor] */

void FUN_104cb9328(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b89c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f3570,
                        &PTR____CFConstantStringClassReference_110dae418,
                        &PTR_s_snapchat_activation_cof_1130ac610,
                        &PTR_s_birthdayPickerUiConfig_1130ac668,3,0x20,0x1c);
    puRam00000001136b89c8 = puVar1;
  }
  return;
}



/* Entry: 104cb9390; end: 104cb941b; +[SCActivationPbBirthdayPickerUiConfig descriptor] */

undefined * FUN_104cb9390(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b89d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f35c0,
                        &PTR____CFConstantStringClassReference_110dae438,
                        &PTR_s_snapchat_activation_cof_1130ac610,&PTR_s_defaultDatePicker_1130ac6c8,
                        3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136b89d0 = puVar1;
  }
  return puRam00000001136b89d0;
}



/* Entry: 104cb941c; end: 104cb9483; +[SCActivationPbDefaultDatePicker descriptor] */

void FUN_104cb941c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b89d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f3610,
                        &PTR____CFConstantStringClassReference_110dae458,
                        &PTR_s_snapchat_activation_cof_1130ac610,&PTR_s_preselectedAge_1130ac628,1,
                        0x10,0x1c);
    puRam00000001136b89d8 = puVar1;
  }
  return;
}



/* Entry: 104cb9484; end: 104cb94eb; +[SCActivationPbDashedDatePicker descriptor] */

void FUN_104cb9484(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b89e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f3660,
                        &PTR____CFConstantStringClassReference_110dae478,
                        &PTR_s_snapchat_activation_cof_1130ac610,&PTR_s_preselectedAge_1130ac648,1,
                        0x10,0x1c);
    puRam00000001136b89e0 = puVar1;
  }
  return;
}



/* Entry: 104cb94ec; end: 104cb9553; +[SCActivationPbNumpadDatePicker descriptor] */

void FUN_104cb94ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b89e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f36b0,
                        &PTR____CFConstantStringClassReference_110dae498,
                        &PTR_s_snapchat_activation_cof_1130ac610,0,0,4,0x1c);
    puRam00000001136b89e8 = puVar1;
  }
  return;
}



/* Entry: 104cb9554; end: 104cb95c7; -[SCGrapheneConnectedAccountsMetric2 init] */

undefined1 * FUN_104cb9554(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3ab8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104cb95c8; end: 104cb963f;  */

void FUN_104cb95c8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110847aa8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104cb9640; end: 104cb96b7;  */

void FUN_104cb9640(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110847af8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104cb96b8; end: 104cb982b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_104cb96b8(double param_1,long param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char **ppcVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  char *unaff_x23;
  undefined8 *unaff_x24;
  double dVar17;
  double dVar18;
  char *pcStack_5e0;
  undefined *puStack_5d8;
  undefined8 *puStack_5d0;
  char *pcStack_5c8;
  char *pcStack_5c0;
  char *pcStack_5b8;
  undefined8 ***pppuStack_5b0;
  code *pcStack_5a8;
  char acStack_598 [24];
  char *pcStack_580;
  undefined8 auStack_578 [2];
  char cStack_561;
  undefined8 auStack_560 [2];
  char cStack_549;
  long lStack_548;
  undefined8 ***pppuStack_500;
  code *pcStack_4f8;
  char acStack_4e8 [24];
  char *pcStack_4d0;
  undefined8 auStack_4c8 [2];
  char cStack_4b1;
  undefined8 auStack_4b0 [2];
  char cStack_499;
  long lStack_498;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  char acStack_440 [24];
  undefined1 *puStack_428;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  char acStack_3b8 [24];
  char *pcStack_3a0;
  undefined8 auStack_398 [2];
  char cStack_381;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  char *pcStack_358;
  undefined8 *puStack_350;
  long *plStack_348;
  char *pcStack_340;
  char *pcStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  char acStack_320 [24];
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  char *pcStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  char acStack_2a0 [24];
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  char *pcStack_258;
  undefined8 *puStack_250;
  char *pcStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  char acStack_218 [24];
  char *pcStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar3 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar14 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x23 = (char *)auStack_60;
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847b48,acStack_80,param_4);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar3 = pcVar2;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar3 = pcVar2;
      param_5 = param_4;
    }
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcVar10 = acStack_100;
  pcStack_88 = FUN_104cb982c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar5 = pcVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar14 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x23 = (char *)auStack_e0;
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_100[0] = '\0';
    acStack_100[1] = '\0';
    acStack_100[2] = '\0';
    acStack_100[3] = '\0';
    acStack_100[4] = '\0';
    acStack_100[5] = '\0';
    acStack_100[6] = '\0';
    acStack_100[7] = '\0';
    acStack_100[8] = '\0';
    acStack_100[9] = '\0';
    acStack_100[10] = '\0';
    acStack_100[0xb] = '\0';
    acStack_100[0xc] = '\0';
    acStack_100[0xd] = '\0';
    acStack_100[0xe] = '\0';
    acStack_100[0xf] = '\0';
    acStack_100[0x10] = '\0';
    acStack_100[0x11] = '\0';
    acStack_100[0x12] = '\0';
    acStack_100[0x13] = '\0';
    acStack_100[0x14] = '\0';
    acStack_100[0x15] = '\0';
    acStack_100[0x16] = '\0';
    acStack_100[0x17] = '\0';
    func_0x00010007e1e8(acStack_100,auStack_e0,&lStack_c8,1);
    pcVar6 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847b98,acStack_100,pcVar3);
    puStack_e8 = acStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pcVar5 = pcVar10;
    param_5 = pcVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pcVar5 = pcVar10;
      param_5 = pcVar3;
    }
  }
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar10 = acStack_180;
  pcStack_108 = FUN_104cb99a0;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar6;
  pcVar2 = pcVar5;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar6);
  if (pcVar3 != (char *)0x0) {
    plVar14 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    unaff_x23 = (char *)auStack_160;
    func_0x00010002b838(auStack_160,pcVar1);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,auStack_160,&lStack_148,1);
    pcVar1 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847be8,acStack_180,pcVar5);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    pcVar2 = pcVar10;
    param_5 = pcVar5;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      pcVar2 = pcVar10;
      param_5 = pcVar5;
    }
  }
  pcVar3 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  _objc_release(pcVar6);
  __Unwind_Resume();
  pcStack_188 = FUN_104cb9b14;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar5 = pcVar2;
  pcVar13 = param_5;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(pcVar1);
  _objc_retain(pcVar2);
  pcVar10 = (char *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar14 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = auStack_1f8;
    func_0x00010002b838(auStack_1f8,pcVar3);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar3 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_1e0,pcVar3);
    acStack_218[0] = '\0';
    acStack_218[1] = '\0';
    acStack_218[2] = '\0';
    acStack_218[3] = '\0';
    acStack_218[4] = '\0';
    acStack_218[5] = '\0';
    acStack_218[6] = '\0';
    acStack_218[7] = '\0';
    acStack_218[8] = '\0';
    acStack_218[9] = '\0';
    acStack_218[10] = '\0';
    acStack_218[0xb] = '\0';
    acStack_218[0xc] = '\0';
    acStack_218[0xd] = '\0';
    acStack_218[0xe] = '\0';
    acStack_218[0xf] = '\0';
    acStack_218[0x10] = '\0';
    acStack_218[0x11] = '\0';
    acStack_218[0x12] = '\0';
    acStack_218[0x13] = '\0';
    acStack_218[0x14] = '\0';
    acStack_218[0x15] = '\0';
    acStack_218[0x16] = '\0';
    acStack_218[0x17] = '\0';
    func_0x00010007e1e8(acStack_218,auStack_1f8,&lStack_1c8,2);
    pcVar6 = "";
    unaff_x23 = acStack_218;
    pcVar5 = acStack_218;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847c38,pcVar5,param_5);
    pcStack_200 = unaff_x23;
    func_0x00010007e5dc(&pcStack_200);
    lVar15 = 0;
    pcVar10 = (char *)auStack_1f8;
    pcVar13 = param_5;
    do {
      if ((&cStack_1c9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar2);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  _objc_release(pcVar2);
  _objc_release(pcVar1);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcVar12 = acStack_2a0;
  pcStack_228 = FUN_104cb9d44;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar6;
  pcVar11 = pcVar5;
  puStack_260 = unaff_x24;
  pcStack_258 = unaff_x23;
  puStack_250 = (undefined8 *)pcVar10;
  pcStack_248 = pcVar3;
  pcStack_240 = pcVar2;
  pcStack_238 = pcVar1;
  pppuStack_230 = &pppuStack_190;
  _objc_retain(pcVar6);
  plVar14 = (long *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar14 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    unaff_x23 = (char *)auStack_280;
    func_0x00010002b838(auStack_280,pcVar1);
    acStack_2a0[0] = '\0';
    acStack_2a0[1] = '\0';
    acStack_2a0[2] = '\0';
    acStack_2a0[3] = '\0';
    acStack_2a0[4] = '\0';
    acStack_2a0[5] = '\0';
    acStack_2a0[6] = '\0';
    acStack_2a0[7] = '\0';
    acStack_2a0[8] = '\0';
    acStack_2a0[9] = '\0';
    acStack_2a0[10] = '\0';
    acStack_2a0[0xb] = '\0';
    acStack_2a0[0xc] = '\0';
    acStack_2a0[0xd] = '\0';
    acStack_2a0[0xe] = '\0';
    acStack_2a0[0xf] = '\0';
    acStack_2a0[0x10] = '\0';
    acStack_2a0[0x11] = '\0';
    acStack_2a0[0x12] = '\0';
    acStack_2a0[0x13] = '\0';
    acStack_2a0[0x14] = '\0';
    acStack_2a0[0x15] = '\0';
    acStack_2a0[0x16] = '\0';
    acStack_2a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_2a0,auStack_280,&lStack_268,1);
    pcVar9 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847c88,acStack_2a0,pcVar5);
    puStack_288 = acStack_2a0;
    func_0x00010007e5dc(&puStack_288);
    pcVar11 = pcVar12;
    pcVar13 = pcVar5;
    pcVar10 = acStack_2a0;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      pcVar11 = pcVar12;
      pcVar13 = pcVar5;
      pcVar10 = acStack_2a0;
    }
  }
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_268) {
    ___stack_chk_fail();
    _objc_release(pcVar6);
    _objc_release(pcVar6);
    pcVar2 = pcVar1;
    __Unwind_Resume();
    pcVar4 = acStack_320;
    pcStack_2a8 = FUN_104cb9eb8;
    lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = pcVar9;
    pcVar5 = pcVar11;
    puStack_2e0 = unaff_x24;
    pcStack_2d8 = unaff_x23;
    puStack_2d0 = (undefined8 *)pcVar10;
    plStack_2c8 = plVar14;
    pcStack_2c0 = pcVar1;
    pcStack_2b8 = pcVar6;
    pppuStack_2b0 = &pppuStack_230;
    _objc_retain(pcVar9);
    plVar14 = (long *)0x0;
    if (pcVar2 != (char *)0x0) {
      plVar14 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar9;
        _objc_retainAutorelease(pcVar9);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar9);
      unaff_x23 = (char *)auStack_300;
      func_0x00010002b838(auStack_300,pcVar1);
      acStack_320[0] = '\0';
      acStack_320[1] = '\0';
      acStack_320[2] = '\0';
      acStack_320[3] = '\0';
      acStack_320[4] = '\0';
      acStack_320[5] = '\0';
      acStack_320[6] = '\0';
      acStack_320[7] = '\0';
      acStack_320[8] = '\0';
      acStack_320[9] = '\0';
      acStack_320[10] = '\0';
      acStack_320[0xb] = '\0';
      acStack_320[0xc] = '\0';
      acStack_320[0xd] = '\0';
      acStack_320[0xe] = '\0';
      acStack_320[0xf] = '\0';
      acStack_320[0x10] = '\0';
      acStack_320[0x11] = '\0';
      acStack_320[0x12] = '\0';
      acStack_320[0x13] = '\0';
      acStack_320[0x14] = '\0';
      acStack_320[0x15] = '\0';
      acStack_320[0x16] = '\0';
      acStack_320[0x17] = '\0';
      func_0x00010007e1e8(acStack_320,auStack_300,&lStack_2e8,1);
      pcVar3 = "";
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847cd8,acStack_320,pcVar11);
      puStack_308 = acStack_320;
      func_0x00010007e5dc(&puStack_308);
      pcVar5 = pcVar4;
      pcVar13 = pcVar11;
      pcVar10 = acStack_320;
      if (cStack_2e9 < '\0') {
        __ZdlPv(auStack_300[0]);
        pcVar5 = pcVar4;
        pcVar13 = pcVar11;
        pcVar10 = acStack_320;
      }
    }
    pcVar1 = pcVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2e8) {
      ___stack_chk_fail();
      _objc_release(pcVar9);
      _objc_release(pcVar9);
      pcVar4 = pcVar1;
      __Unwind_Resume();
      pcStack_328 = FUN_104cba02c;
      lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar2 = pcVar3;
      pcVar6 = pcVar5;
      puStack_360 = unaff_x24;
      pcStack_358 = unaff_x23;
      puStack_350 = (undefined8 *)pcVar10;
      plStack_348 = plVar14;
      pcStack_340 = pcVar1;
      pcStack_338 = pcVar9;
      pppuStack_330 = &pppuStack_2b0;
      _objc_retain(pcVar3);
      _objc_retain(pcVar5);
      puVar16 = (undefined8 *)0x0;
      if (pcVar4 != (char *)0x0) {
        plVar14 = *(long **)(pcVar4 + 8);
        _objc_retain(pcVar3);
        if (pcVar3 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar3;
          _objc_retainAutorelease(pcVar3);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar3);
        func_0x00010002b838(auStack_398,pcVar1);
        _objc_retain(pcVar5);
        if (pcVar5 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar5);
          pcVar1 = pcVar5;
          func_0x00010bdc3520(pcVar5);
        }
        _objc_release(pcVar5);
        func_0x00010002b838(auStack_380,pcVar1);
        acStack_3b8[0] = '\0';
        acStack_3b8[1] = '\0';
        acStack_3b8[2] = '\0';
        acStack_3b8[3] = '\0';
        acStack_3b8[4] = '\0';
        acStack_3b8[5] = '\0';
        acStack_3b8[6] = '\0';
        acStack_3b8[7] = '\0';
        acStack_3b8[8] = '\0';
        acStack_3b8[9] = '\0';
        acStack_3b8[10] = '\0';
        acStack_3b8[0xb] = '\0';
        acStack_3b8[0xc] = '\0';
        acStack_3b8[0xd] = '\0';
        acStack_3b8[0xe] = '\0';
        acStack_3b8[0xf] = '\0';
        acStack_3b8[0x10] = '\0';
        acStack_3b8[0x11] = '\0';
        acStack_3b8[0x12] = '\0';
        acStack_3b8[0x13] = '\0';
        acStack_3b8[0x14] = '\0';
        acStack_3b8[0x15] = '\0';
        acStack_3b8[0x16] = '\0';
        acStack_3b8[0x17] = '\0';
        func_0x00010007e1e8(acStack_3b8,auStack_398,&lStack_368,2);
        pcVar2 = "";
        pcVar6 = acStack_3b8;
        (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847d28,pcVar6,pcVar13);
        pcStack_3a0 = acStack_3b8;
        func_0x00010007e5dc(&pcStack_3a0);
        lVar15 = 0;
        puVar16 = auStack_398;
        do {
          if ((&cStack_369)[lVar15] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_380 + lVar15));
          }
          lVar15 = lVar15 + -0x18;
        } while (lVar15 != -0x30);
      }
      _objc_release(pcVar5);
      pcVar1 = pcVar3;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_368) {
        ___stack_chk_fail();
        _objc_release(pcVar5);
        if (cStack_381 < '\0') {
          __ZdlPv(auStack_398[0]);
        }
        _objc_release(pcVar5);
        _objc_release(pcVar3);
        __Unwind_Resume();
        pcVar10 = acStack_440;
        pcStack_3c8 = FUN_104cba25c;
        lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar5 = pcVar2;
        pcVar3 = pcVar2;
        dVar17 = param_1;
        pppuStack_3d0 = &pppuStack_330;
        _objc_retain();
        if (pcVar1 != (char *)0x0) {
          _objc_retain(pcVar2);
          plVar14 = *(long **)(pcVar1 + 8);
          _objc_retain(pcVar2);
          if (pcVar2 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            pcVar1 = pcVar2;
            _objc_retainAutorelease(pcVar2);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar2);
          puVar16 = auStack_420;
          func_0x00010002b838(auStack_420,pcVar1);
          acStack_440[0] = '\0';
          acStack_440[1] = '\0';
          acStack_440[2] = '\0';
          acStack_440[3] = '\0';
          acStack_440[4] = '\0';
          acStack_440[5] = '\0';
          acStack_440[6] = '\0';
          acStack_440[7] = '\0';
          acStack_440[8] = '\0';
          acStack_440[9] = '\0';
          acStack_440[10] = '\0';
          acStack_440[0xb] = '\0';
          acStack_440[0xc] = '\0';
          acStack_440[0xd] = '\0';
          acStack_440[0xe] = '\0';
          acStack_440[0xf] = '\0';
          acStack_440[0x10] = '\0';
          acStack_440[0x11] = '\0';
          acStack_440[0x12] = '\0';
          acStack_440[0x13] = '\0';
          acStack_440[0x14] = '\0';
          acStack_440[0x15] = '\0';
          acStack_440[0x16] = '\0';
          acStack_440[0x17] = '\0';
          func_0x00010007e1e8(acStack_440,auStack_420,&lStack_408,1);
          dVar17 = param_1 * 1000.0;
          pcVar3 = "\x01";
          (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847d78,acStack_440,(long)dVar17);
          puStack_428 = acStack_440;
          func_0x00010007e5dc(&puStack_428);
          pcVar6 = pcVar10;
          if (cStack_409 < '\0') {
            __ZdlPv(auStack_420[0]);
            pcVar6 = pcVar10;
          }
          pcVar5 = pcVar2;
          _objc_release();
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_408) {
          ___stack_chk_fail();
          _objc_release(pcVar2);
          _objc_release(pcVar2);
          _objc_release(pcVar2);
          pcVar2 = pcVar3;
          __Unwind_Resume();
          pcStack_448 = FUN_104cba3f0;
          lStack_498 = *(long *)PTR____stack_chk_guard_11034bdc0;
          pcVar1 = pcVar2;
          pcVar3 = pcVar6;
          dVar18 = dVar17;
          pppuStack_450 = &pppuStack_3d0;
          _objc_retain(pcVar2);
          _objc_retain(pcVar6);
          if (pcVar5 != (char *)0x0) {
            _objc_retain(pcVar2);
            _objc_retain(pcVar6);
            plVar14 = *(long **)(pcVar5 + 8);
            _objc_retain(pcVar2);
            if (pcVar2 == (char *)0x0) {
              pcVar1 = "";
            }
            else {
              pcVar1 = pcVar2;
              _objc_retainAutorelease(pcVar2);
              func_0x00010bdc3520();
            }
            _objc_release(pcVar2);
            func_0x00010002b838(auStack_4c8,pcVar1);
            _objc_retain(pcVar6);
            if (pcVar6 == (char *)0x0) {
              pcVar1 = "";
            }
            else {
              _objc_retainAutorelease(pcVar6);
              pcVar1 = pcVar6;
              func_0x00010bdc3520(pcVar6);
            }
            _objc_release(pcVar6);
            func_0x00010002b838(auStack_4b0,pcVar1);
            acStack_4e8[0] = '\0';
            acStack_4e8[1] = '\0';
            acStack_4e8[2] = '\0';
            acStack_4e8[3] = '\0';
            acStack_4e8[4] = '\0';
            acStack_4e8[5] = '\0';
            acStack_4e8[6] = '\0';
            acStack_4e8[7] = '\0';
            acStack_4e8[8] = '\0';
            acStack_4e8[9] = '\0';
            acStack_4e8[10] = '\0';
            acStack_4e8[0xb] = '\0';
            acStack_4e8[0xc] = '\0';
            acStack_4e8[0xd] = '\0';
            acStack_4e8[0xe] = '\0';
            acStack_4e8[0xf] = '\0';
            acStack_4e8[0x10] = '\0';
            acStack_4e8[0x11] = '\0';
            acStack_4e8[0x12] = '\0';
            acStack_4e8[0x13] = '\0';
            acStack_4e8[0x14] = '\0';
            acStack_4e8[0x15] = '\0';
            acStack_4e8[0x16] = '\0';
            acStack_4e8[0x17] = '\0';
            func_0x00010007e1e8(acStack_4e8,auStack_4c8,&lStack_498,2);
            dVar18 = dVar17 * 1000.0;
            pcVar1 = "\x01";
            pcVar3 = acStack_4e8;
            (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847dc8,pcVar3,(long)dVar18);
            pcStack_4d0 = acStack_4e8;
            func_0x00010007e5dc(&pcStack_4d0);
            lVar15 = 0;
            puVar16 = auStack_4c8;
            do {
              if ((&cStack_499)[lVar15] < '\0') {
                __ZdlPv(*(undefined8 *)((long)auStack_4b0 + lVar15));
              }
              lVar15 = lVar15 + -0x18;
            } while (lVar15 != -0x30);
            _objc_release(pcVar6);
            _objc_release(pcVar2);
          }
          pcVar5 = pcVar6;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_498) {
            ___stack_chk_fail();
            _objc_release(pcVar6);
            if (cStack_4b1 < '\0') {
              __ZdlPv(auStack_4c8[0]);
            }
            _objc_release(pcVar6);
            _objc_release(pcVar2);
            _objc_release(pcVar6);
            _objc_release(pcVar2);
            pcVar2 = pcVar1;
            __Unwind_Resume();
            pcStack_4f8 = FUN_104cba660;
            lStack_548 = *(long *)PTR____stack_chk_guard_11034bdc0;
            pcVar1 = pcVar3;
            pppuStack_500 = &pppuStack_450;
            _objc_retain(pcVar2);
            _objc_retain(pcVar3);
            if (pcVar5 != (char *)0x0) {
              _objc_retain(pcVar2);
              _objc_retain(pcVar3);
              plVar14 = *(long **)(pcVar5 + 8);
              _objc_retain(pcVar2);
              if (pcVar2 == (char *)0x0) {
                pcVar1 = "";
              }
              else {
                pcVar1 = pcVar2;
                _objc_retainAutorelease(pcVar2);
                func_0x00010bdc3520();
              }
              _objc_release(pcVar2);
              func_0x00010002b838(auStack_578,pcVar1);
              _objc_retain(pcVar3);
              if (pcVar3 == (char *)0x0) {
                pcVar1 = "";
              }
              else {
                _objc_retainAutorelease(pcVar3);
                pcVar1 = pcVar3;
                func_0x00010bdc3520(pcVar3);
              }
              _objc_release(pcVar3);
              func_0x00010002b838(auStack_560,pcVar1);
              acStack_598[0] = '\0';
              acStack_598[1] = '\0';
              acStack_598[2] = '\0';
              acStack_598[3] = '\0';
              acStack_598[4] = '\0';
              acStack_598[5] = '\0';
              acStack_598[6] = '\0';
              acStack_598[7] = '\0';
              acStack_598[8] = '\0';
              acStack_598[9] = '\0';
              acStack_598[10] = '\0';
              acStack_598[0xb] = '\0';
              acStack_598[0xc] = '\0';
              acStack_598[0xd] = '\0';
              acStack_598[0xe] = '\0';
              acStack_598[0xf] = '\0';
              acStack_598[0x10] = '\0';
              acStack_598[0x11] = '\0';
              acStack_598[0x12] = '\0';
              acStack_598[0x13] = '\0';
              acStack_598[0x14] = '\0';
              acStack_598[0x15] = '\0';
              acStack_598[0x16] = '\0';
              acStack_598[0x17] = '\0';
              func_0x00010007e1e8(acStack_598,auStack_578,&lStack_548,2);
              pcVar1 = acStack_598;
              (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847e18,pcVar1,(long)(dVar18 * 1000.0));
              pcStack_580 = acStack_598;
              func_0x00010007e5dc(&pcStack_580);
              lVar15 = 0;
              puVar16 = auStack_578;
              do {
                if ((&cStack_549)[lVar15] < '\0') {
                  __ZdlPv(*(undefined8 *)((long)auStack_560 + lVar15));
                }
                lVar15 = lVar15 + -0x18;
              } while (lVar15 != -0x30);
              _objc_release(pcVar3);
              _objc_release(pcVar2);
            }
            pcVar6 = pcVar3;
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_548) {
              ___stack_chk_fail();
              _objc_release(pcVar3);
              if (cStack_561 < '\0') {
                __ZdlPv(auStack_578[0]);
              }
              _objc_release(pcVar3);
              _objc_release(pcVar2);
              _objc_release(pcVar3);
              _objc_release(pcVar2);
              pcVar5 = pcVar6;
              __Unwind_Resume();
              ppcVar7 = &pcStack_5e0;
              pcStack_5a8 = FUN_104cba8d0;
              puStack_5d0 = puVar16;
              pcStack_5c8 = pcVar6;
              pcStack_5c0 = pcVar3;
              pcStack_5b8 = pcVar2;
              pppuStack_5b0 = &pppuStack_500;
              _objc_retain(pcVar1);
              puStack_5d8 = PTR_PTR_1126e3ac0;
              pcStack_5e0 = pcVar5;
              _objc_msgSendSuper2(&pcStack_5e0,PTR_s_init_1125d9248);
              if (ppcVar7 != (char **)0x0) {
                lVar15 = (long)_DAT_1127104b4;
                _objc_retain(pcVar1);
                uVar8 = *(undefined8 *)((long)ppcVar7 + lVar15);
                *(char **)((long)ppcVar7 + lVar15) = pcVar1;
                _objc_release(uVar8);
              }
              _objc_release(pcVar1);
              return (char *)ppcVar7;
            }
          }
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(pcVar2);
        return pcVar2;
      }
      return pcVar1;
    }
    return pcVar1;
  }
  return pcVar1;
}



/* Entry: 104cb982c; end: 104cb999f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_104cb982c(double param_1,long param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char **ppcVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  char *unaff_x23;
  undefined8 *unaff_x24;
  double dVar17;
  double dVar18;
  char *pcStack_560;
  undefined *puStack_558;
  undefined8 *puStack_550;
  char *pcStack_548;
  char *pcStack_540;
  char *pcStack_538;
  undefined8 ***pppuStack_530;
  code *pcStack_528;
  char acStack_518 [24];
  char *pcStack_500;
  undefined8 auStack_4f8 [2];
  char cStack_4e1;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  undefined8 ***pppuStack_480;
  code *pcStack_478;
  char acStack_468 [24];
  char *pcStack_450;
  undefined8 auStack_448 [2];
  char cStack_431;
  undefined8 auStack_430 [2];
  char cStack_419;
  long lStack_418;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  char acStack_3c0 [24];
  undefined1 *puStack_3a8;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  char acStack_338 [24];
  char *pcStack_320;
  undefined8 auStack_318 [2];
  char cStack_301;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  char *pcStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  char acStack_2a0 [24];
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  char *pcStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  char acStack_220 [24];
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  char *pcStack_1d8;
  undefined8 *puStack_1d0;
  char *pcStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char acStack_198 [24];
  char *pcStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar3 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar14 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x23 = (char *)auStack_60;
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847b98,acStack_80,param_4);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar3 = pcVar2;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar3 = pcVar2;
      param_5 = param_4;
    }
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcVar10 = acStack_100;
  pcStack_88 = FUN_104cb99a0;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar6 = pcVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar14 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x23 = (char *)auStack_e0;
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_100[0] = '\0';
    acStack_100[1] = '\0';
    acStack_100[2] = '\0';
    acStack_100[3] = '\0';
    acStack_100[4] = '\0';
    acStack_100[5] = '\0';
    acStack_100[6] = '\0';
    acStack_100[7] = '\0';
    acStack_100[8] = '\0';
    acStack_100[9] = '\0';
    acStack_100[10] = '\0';
    acStack_100[0xb] = '\0';
    acStack_100[0xc] = '\0';
    acStack_100[0xd] = '\0';
    acStack_100[0xe] = '\0';
    acStack_100[0xf] = '\0';
    acStack_100[0x10] = '\0';
    acStack_100[0x11] = '\0';
    acStack_100[0x12] = '\0';
    acStack_100[0x13] = '\0';
    acStack_100[0x14] = '\0';
    acStack_100[0x15] = '\0';
    acStack_100[0x16] = '\0';
    acStack_100[0x17] = '\0';
    func_0x00010007e1e8(acStack_100,auStack_e0,&lStack_c8,1);
    pcVar5 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847be8,acStack_100,pcVar3);
    puStack_e8 = acStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pcVar6 = pcVar10;
    param_5 = pcVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pcVar6 = pcVar10;
      param_5 = pcVar3;
    }
  }
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_104cb9b14;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar5;
  pcVar2 = pcVar6;
  pcVar13 = param_5;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar5);
  _objc_retain(pcVar6);
  pcVar10 = (char *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar14 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    unaff_x24 = auStack_178;
    func_0x00010002b838(auStack_178,pcVar1);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar1 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_160,pcVar1);
    acStack_198[0] = '\0';
    acStack_198[1] = '\0';
    acStack_198[2] = '\0';
    acStack_198[3] = '\0';
    acStack_198[4] = '\0';
    acStack_198[5] = '\0';
    acStack_198[6] = '\0';
    acStack_198[7] = '\0';
    acStack_198[8] = '\0';
    acStack_198[9] = '\0';
    acStack_198[10] = '\0';
    acStack_198[0xb] = '\0';
    acStack_198[0xc] = '\0';
    acStack_198[0xd] = '\0';
    acStack_198[0xe] = '\0';
    acStack_198[0xf] = '\0';
    acStack_198[0x10] = '\0';
    acStack_198[0x11] = '\0';
    acStack_198[0x12] = '\0';
    acStack_198[0x13] = '\0';
    acStack_198[0x14] = '\0';
    acStack_198[0x15] = '\0';
    acStack_198[0x16] = '\0';
    acStack_198[0x17] = '\0';
    func_0x00010007e1e8(acStack_198,auStack_178,&lStack_148,2);
    pcVar1 = "";
    unaff_x23 = acStack_198;
    pcVar2 = acStack_198;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847c38,pcVar2,param_5);
    pcStack_180 = unaff_x23;
    func_0x00010007e5dc(&pcStack_180);
    lVar15 = 0;
    pcVar10 = (char *)auStack_178;
    pcVar13 = param_5;
    do {
      if ((&cStack_149)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar3 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar5);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcVar12 = acStack_220;
  pcStack_1a8 = FUN_104cb9d44;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar1;
  pcVar11 = pcVar2;
  puStack_1e0 = unaff_x24;
  pcStack_1d8 = unaff_x23;
  puStack_1d0 = (undefined8 *)pcVar10;
  pcStack_1c8 = pcVar3;
  pcStack_1c0 = pcVar6;
  pcStack_1b8 = pcVar5;
  pppuStack_1b0 = &ppuStack_110;
  _objc_retain(pcVar1);
  plVar14 = (long *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar14 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x23 = (char *)auStack_200;
    func_0x00010002b838(auStack_200,pcVar3);
    acStack_220[0] = '\0';
    acStack_220[1] = '\0';
    acStack_220[2] = '\0';
    acStack_220[3] = '\0';
    acStack_220[4] = '\0';
    acStack_220[5] = '\0';
    acStack_220[6] = '\0';
    acStack_220[7] = '\0';
    acStack_220[8] = '\0';
    acStack_220[9] = '\0';
    acStack_220[10] = '\0';
    acStack_220[0xb] = '\0';
    acStack_220[0xc] = '\0';
    acStack_220[0xd] = '\0';
    acStack_220[0xe] = '\0';
    acStack_220[0xf] = '\0';
    acStack_220[0x10] = '\0';
    acStack_220[0x11] = '\0';
    acStack_220[0x12] = '\0';
    acStack_220[0x13] = '\0';
    acStack_220[0x14] = '\0';
    acStack_220[0x15] = '\0';
    acStack_220[0x16] = '\0';
    acStack_220[0x17] = '\0';
    func_0x00010007e1e8(acStack_220,auStack_200,&lStack_1e8,1);
    pcVar9 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847c88,acStack_220,pcVar2);
    puStack_208 = acStack_220;
    func_0x00010007e5dc(&puStack_208);
    pcVar11 = pcVar12;
    pcVar13 = pcVar2;
    pcVar10 = acStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      pcVar11 = pcVar12;
      pcVar13 = pcVar2;
      pcVar10 = acStack_220;
    }
  }
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1e8) {
    ___stack_chk_fail();
    _objc_release(pcVar1);
    _objc_release(pcVar1);
    pcVar5 = pcVar3;
    __Unwind_Resume();
    pcVar4 = acStack_2a0;
    pcStack_228 = FUN_104cb9eb8;
    lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = pcVar9;
    pcVar6 = pcVar11;
    puStack_260 = unaff_x24;
    pcStack_258 = unaff_x23;
    puStack_250 = (undefined8 *)pcVar10;
    plStack_248 = plVar14;
    pcStack_240 = pcVar3;
    pcStack_238 = pcVar1;
    pppuStack_230 = &pppuStack_1b0;
    _objc_retain(pcVar9);
    plVar14 = (long *)0x0;
    if (pcVar5 != (char *)0x0) {
      plVar14 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar9;
        _objc_retainAutorelease(pcVar9);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar9);
      unaff_x23 = (char *)auStack_280;
      func_0x00010002b838(auStack_280,pcVar1);
      acStack_2a0[0] = '\0';
      acStack_2a0[1] = '\0';
      acStack_2a0[2] = '\0';
      acStack_2a0[3] = '\0';
      acStack_2a0[4] = '\0';
      acStack_2a0[5] = '\0';
      acStack_2a0[6] = '\0';
      acStack_2a0[7] = '\0';
      acStack_2a0[8] = '\0';
      acStack_2a0[9] = '\0';
      acStack_2a0[10] = '\0';
      acStack_2a0[0xb] = '\0';
      acStack_2a0[0xc] = '\0';
      acStack_2a0[0xd] = '\0';
      acStack_2a0[0xe] = '\0';
      acStack_2a0[0xf] = '\0';
      acStack_2a0[0x10] = '\0';
      acStack_2a0[0x11] = '\0';
      acStack_2a0[0x12] = '\0';
      acStack_2a0[0x13] = '\0';
      acStack_2a0[0x14] = '\0';
      acStack_2a0[0x15] = '\0';
      acStack_2a0[0x16] = '\0';
      acStack_2a0[0x17] = '\0';
      func_0x00010007e1e8(acStack_2a0,auStack_280,&lStack_268,1);
      pcVar2 = "";
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847cd8,acStack_2a0,pcVar11);
      puStack_288 = acStack_2a0;
      func_0x00010007e5dc(&puStack_288);
      pcVar6 = pcVar4;
      pcVar13 = pcVar11;
      pcVar10 = acStack_2a0;
      if (cStack_269 < '\0') {
        __ZdlPv(auStack_280[0]);
        pcVar6 = pcVar4;
        pcVar13 = pcVar11;
        pcVar10 = acStack_2a0;
      }
    }
    pcVar1 = pcVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
      return pcVar1;
    }
    ___stack_chk_fail();
    _objc_release(pcVar9);
    _objc_release(pcVar9);
    pcVar4 = pcVar1;
    __Unwind_Resume();
    pcStack_2a8 = FUN_104cba02c;
    lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = pcVar2;
    pcVar5 = pcVar6;
    puStack_2e0 = unaff_x24;
    pcStack_2d8 = unaff_x23;
    puStack_2d0 = (undefined8 *)pcVar10;
    plStack_2c8 = plVar14;
    pcStack_2c0 = pcVar1;
    pcStack_2b8 = pcVar9;
    pppuStack_2b0 = &pppuStack_230;
    _objc_retain(pcVar2);
    _objc_retain(pcVar6);
    puVar16 = (undefined8 *)0x0;
    if (pcVar4 != (char *)0x0) {
      plVar14 = *(long **)(pcVar4 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      func_0x00010002b838(auStack_318,pcVar1);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar1 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_300,pcVar1);
      acStack_338[0] = '\0';
      acStack_338[1] = '\0';
      acStack_338[2] = '\0';
      acStack_338[3] = '\0';
      acStack_338[4] = '\0';
      acStack_338[5] = '\0';
      acStack_338[6] = '\0';
      acStack_338[7] = '\0';
      acStack_338[8] = '\0';
      acStack_338[9] = '\0';
      acStack_338[10] = '\0';
      acStack_338[0xb] = '\0';
      acStack_338[0xc] = '\0';
      acStack_338[0xd] = '\0';
      acStack_338[0xe] = '\0';
      acStack_338[0xf] = '\0';
      acStack_338[0x10] = '\0';
      acStack_338[0x11] = '\0';
      acStack_338[0x12] = '\0';
      acStack_338[0x13] = '\0';
      acStack_338[0x14] = '\0';
      acStack_338[0x15] = '\0';
      acStack_338[0x16] = '\0';
      acStack_338[0x17] = '\0';
      func_0x00010007e1e8(acStack_338,auStack_318,&lStack_2e8,2);
      pcVar3 = "";
      pcVar5 = acStack_338;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847d28,pcVar5,pcVar13);
      pcStack_320 = acStack_338;
      func_0x00010007e5dc(&pcStack_320);
      lVar15 = 0;
      puVar16 = auStack_318;
      do {
        if ((&cStack_2e9)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_300 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
    }
    _objc_release(pcVar6);
    pcVar1 = pcVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
      return pcVar1;
    }
    ___stack_chk_fail();
    _objc_release(pcVar6);
    if (cStack_301 < '\0') {
      __ZdlPv(auStack_318[0]);
    }
    _objc_release(pcVar6);
    _objc_release(pcVar2);
    __Unwind_Resume();
    pcVar10 = acStack_3c0;
    pcStack_348 = FUN_104cba25c;
    lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar6 = pcVar3;
    pcVar2 = pcVar3;
    dVar17 = param_1;
    pppuStack_350 = &pppuStack_2b0;
    _objc_retain();
    if (pcVar1 != (char *)0x0) {
      _objc_retain(pcVar3);
      plVar14 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar3;
        _objc_retainAutorelease(pcVar3);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar3);
      puVar16 = auStack_3a0;
      func_0x00010002b838(auStack_3a0,pcVar1);
      acStack_3c0[0] = '\0';
      acStack_3c0[1] = '\0';
      acStack_3c0[2] = '\0';
      acStack_3c0[3] = '\0';
      acStack_3c0[4] = '\0';
      acStack_3c0[5] = '\0';
      acStack_3c0[6] = '\0';
      acStack_3c0[7] = '\0';
      acStack_3c0[8] = '\0';
      acStack_3c0[9] = '\0';
      acStack_3c0[10] = '\0';
      acStack_3c0[0xb] = '\0';
      acStack_3c0[0xc] = '\0';
      acStack_3c0[0xd] = '\0';
      acStack_3c0[0xe] = '\0';
      acStack_3c0[0xf] = '\0';
      acStack_3c0[0x10] = '\0';
      acStack_3c0[0x11] = '\0';
      acStack_3c0[0x12] = '\0';
      acStack_3c0[0x13] = '\0';
      acStack_3c0[0x14] = '\0';
      acStack_3c0[0x15] = '\0';
      acStack_3c0[0x16] = '\0';
      acStack_3c0[0x17] = '\0';
      func_0x00010007e1e8(acStack_3c0,auStack_3a0,&lStack_388,1);
      dVar17 = param_1 * 1000.0;
      pcVar2 = "\x01";
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847d78,acStack_3c0,(long)dVar17);
      puStack_3a8 = acStack_3c0;
      func_0x00010007e5dc(&puStack_3a8);
      pcVar5 = pcVar10;
      if (cStack_389 < '\0') {
        __ZdlPv(auStack_3a0[0]);
        pcVar5 = pcVar10;
      }
      pcVar6 = pcVar3;
      _objc_release();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_388) {
      ___stack_chk_fail();
      _objc_release(pcVar3);
      _objc_release(pcVar3);
      _objc_release(pcVar3);
      pcVar3 = pcVar2;
      __Unwind_Resume();
      pcStack_3c8 = FUN_104cba3f0;
      lStack_418 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar1 = pcVar3;
      pcVar2 = pcVar5;
      dVar18 = dVar17;
      pppuStack_3d0 = &pppuStack_350;
      _objc_retain(pcVar3);
      _objc_retain(pcVar5);
      if (pcVar6 != (char *)0x0) {
        _objc_retain(pcVar3);
        _objc_retain(pcVar5);
        plVar14 = *(long **)(pcVar6 + 8);
        _objc_retain(pcVar3);
        if (pcVar3 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar3;
          _objc_retainAutorelease(pcVar3);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar3);
        func_0x00010002b838(auStack_448,pcVar1);
        _objc_retain(pcVar5);
        if (pcVar5 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar5);
          pcVar1 = pcVar5;
          func_0x00010bdc3520(pcVar5);
        }
        _objc_release(pcVar5);
        func_0x00010002b838(auStack_430,pcVar1);
        acStack_468[0] = '\0';
        acStack_468[1] = '\0';
        acStack_468[2] = '\0';
        acStack_468[3] = '\0';
        acStack_468[4] = '\0';
        acStack_468[5] = '\0';
        acStack_468[6] = '\0';
        acStack_468[7] = '\0';
        acStack_468[8] = '\0';
        acStack_468[9] = '\0';
        acStack_468[10] = '\0';
        acStack_468[0xb] = '\0';
        acStack_468[0xc] = '\0';
        acStack_468[0xd] = '\0';
        acStack_468[0xe] = '\0';
        acStack_468[0xf] = '\0';
        acStack_468[0x10] = '\0';
        acStack_468[0x11] = '\0';
        acStack_468[0x12] = '\0';
        acStack_468[0x13] = '\0';
        acStack_468[0x14] = '\0';
        acStack_468[0x15] = '\0';
        acStack_468[0x16] = '\0';
        acStack_468[0x17] = '\0';
        func_0x00010007e1e8(acStack_468,auStack_448,&lStack_418,2);
        dVar18 = dVar17 * 1000.0;
        pcVar1 = "\x01";
        pcVar2 = acStack_468;
        (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847dc8,pcVar2,(long)dVar18);
        pcStack_450 = acStack_468;
        func_0x00010007e5dc(&pcStack_450);
        lVar15 = 0;
        puVar16 = auStack_448;
        do {
          if ((&cStack_419)[lVar15] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_430 + lVar15));
          }
          lVar15 = lVar15 + -0x18;
        } while (lVar15 != -0x30);
        _objc_release(pcVar5);
        _objc_release(pcVar3);
      }
      pcVar6 = pcVar5;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_418) {
        ___stack_chk_fail();
        _objc_release(pcVar5);
        if (cStack_431 < '\0') {
          __ZdlPv(auStack_448[0]);
        }
        _objc_release(pcVar5);
        _objc_release(pcVar3);
        _objc_release(pcVar5);
        _objc_release(pcVar3);
        pcVar3 = pcVar1;
        __Unwind_Resume();
        pcStack_478 = FUN_104cba660;
        lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar1 = pcVar2;
        pppuStack_480 = &pppuStack_3d0;
        _objc_retain(pcVar3);
        _objc_retain(pcVar2);
        if (pcVar6 != (char *)0x0) {
          _objc_retain(pcVar3);
          _objc_retain(pcVar2);
          plVar14 = *(long **)(pcVar6 + 8);
          _objc_retain(pcVar3);
          if (pcVar3 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            pcVar1 = pcVar3;
            _objc_retainAutorelease(pcVar3);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar3);
          func_0x00010002b838(auStack_4f8,pcVar1);
          _objc_retain(pcVar2);
          if (pcVar2 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            _objc_retainAutorelease(pcVar2);
            pcVar1 = pcVar2;
            func_0x00010bdc3520(pcVar2);
          }
          _objc_release(pcVar2);
          func_0x00010002b838(auStack_4e0,pcVar1);
          acStack_518[0] = '\0';
          acStack_518[1] = '\0';
          acStack_518[2] = '\0';
          acStack_518[3] = '\0';
          acStack_518[4] = '\0';
          acStack_518[5] = '\0';
          acStack_518[6] = '\0';
          acStack_518[7] = '\0';
          acStack_518[8] = '\0';
          acStack_518[9] = '\0';
          acStack_518[10] = '\0';
          acStack_518[0xb] = '\0';
          acStack_518[0xc] = '\0';
          acStack_518[0xd] = '\0';
          acStack_518[0xe] = '\0';
          acStack_518[0xf] = '\0';
          acStack_518[0x10] = '\0';
          acStack_518[0x11] = '\0';
          acStack_518[0x12] = '\0';
          acStack_518[0x13] = '\0';
          acStack_518[0x14] = '\0';
          acStack_518[0x15] = '\0';
          acStack_518[0x16] = '\0';
          acStack_518[0x17] = '\0';
          func_0x00010007e1e8(acStack_518,auStack_4f8,&lStack_4c8,2);
          pcVar1 = acStack_518;
          (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847e18,pcVar1,(long)(dVar18 * 1000.0));
          pcStack_500 = acStack_518;
          func_0x00010007e5dc(&pcStack_500);
          lVar15 = 0;
          puVar16 = auStack_4f8;
          do {
            if ((&cStack_4c9)[lVar15] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_4e0 + lVar15));
            }
            lVar15 = lVar15 + -0x18;
          } while (lVar15 != -0x30);
          _objc_release(pcVar2);
          _objc_release(pcVar3);
        }
        pcVar5 = pcVar2;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4c8) {
          ___stack_chk_fail();
          _objc_release(pcVar2);
          if (cStack_4e1 < '\0') {
            __ZdlPv(auStack_4f8[0]);
          }
          _objc_release(pcVar2);
          _objc_release(pcVar3);
          _objc_release(pcVar2);
          _objc_release(pcVar3);
          pcVar6 = pcVar5;
          __Unwind_Resume();
          ppcVar7 = &pcStack_560;
          pcStack_528 = FUN_104cba8d0;
          puStack_550 = puVar16;
          pcStack_548 = pcVar5;
          pcStack_540 = pcVar2;
          pcStack_538 = pcVar3;
          pppuStack_530 = &pppuStack_480;
          _objc_retain(pcVar1);
          puStack_558 = PTR_PTR_1126e3ac0;
          pcStack_560 = pcVar6;
          _objc_msgSendSuper2(&pcStack_560,PTR_s_init_1125d9248);
          if (ppcVar7 != (char **)0x0) {
            lVar15 = (long)_DAT_1127104b4;
            _objc_retain(pcVar1);
            uVar8 = *(undefined8 *)((long)ppcVar7 + lVar15);
            *(char **)((long)ppcVar7 + lVar15) = pcVar1;
            _objc_release(uVar8);
          }
          _objc_release(pcVar1);
          return (char *)ppcVar7;
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar3);
    return pcVar3;
  }
  return pcVar3;
}



/* Entry: 104cb99a0; end: 104cb9b13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_104cb99a0(double param_1,long param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  char *unaff_x23;
  undefined8 *unaff_x24;
  double dVar17;
  double dVar18;
  char *pcStack_4e0;
  undefined *puStack_4d8;
  undefined8 *puStack_4d0;
  char *pcStack_4c8;
  char *pcStack_4c0;
  char *pcStack_4b8;
  undefined8 ***pppuStack_4b0;
  code *pcStack_4a8;
  char acStack_498 [24];
  char *pcStack_480;
  undefined8 auStack_478 [2];
  char cStack_461;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  undefined8 ***pppuStack_400;
  code *pcStack_3f8;
  char acStack_3e8 [24];
  char *pcStack_3d0;
  undefined8 auStack_3c8 [2];
  char cStack_3b1;
  undefined8 auStack_3b0 [2];
  char cStack_399;
  long lStack_398;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  char acStack_340 [24];
  undefined1 *puStack_328;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  char acStack_2b8 [24];
  char *pcStack_2a0;
  undefined8 auStack_298 [2];
  char cStack_281;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  char *pcStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  char acStack_220 [24];
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  char *pcStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char acStack_1a0 [24];
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  char *pcStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_118 [24];
  char *pcStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar9 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar14 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x23 = (char *)auStack_60;
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847be8,acStack_80,param_4);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar9 = pcVar2;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar9 = pcVar2;
      param_5 = param_4;
    }
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_88 = FUN_104cb9b14;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar4 = pcVar9;
  pcVar13 = param_5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar9);
  pcVar12 = (char *)0x0;
  if (pcVar2 != (char *)0x0) {
    plVar14 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,pcVar2);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar2 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_118[0] = '\0';
    acStack_118[1] = '\0';
    acStack_118[2] = '\0';
    acStack_118[3] = '\0';
    acStack_118[4] = '\0';
    acStack_118[5] = '\0';
    acStack_118[6] = '\0';
    acStack_118[7] = '\0';
    acStack_118[8] = '\0';
    acStack_118[9] = '\0';
    acStack_118[10] = '\0';
    acStack_118[0xb] = '\0';
    acStack_118[0xc] = '\0';
    acStack_118[0xd] = '\0';
    acStack_118[0xe] = '\0';
    acStack_118[0xf] = '\0';
    acStack_118[0x10] = '\0';
    acStack_118[0x11] = '\0';
    acStack_118[0x12] = '\0';
    acStack_118[0x13] = '\0';
    acStack_118[0x14] = '\0';
    acStack_118[0x15] = '\0';
    acStack_118[0x16] = '\0';
    acStack_118[0x17] = '\0';
    func_0x00010007e1e8(acStack_118,auStack_f8,&lStack_c8,2);
    pcVar5 = "";
    unaff_x23 = acStack_118;
    pcVar4 = acStack_118;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847c38,pcVar4,param_5);
    pcStack_100 = unaff_x23;
    func_0x00010007e5dc(&pcStack_100);
    lVar15 = 0;
    pcVar12 = (char *)auStack_f8;
    pcVar13 = param_5;
    do {
      if ((&cStack_c9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcVar11 = acStack_1a0;
  pcStack_128 = FUN_104cb9d44;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar5;
  pcVar10 = pcVar4;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = (undefined8 *)pcVar12;
  pcStack_148 = pcVar2;
  pcStack_140 = pcVar9;
  pcStack_138 = pcVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(pcVar5);
  plVar14 = (long *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar14 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    unaff_x23 = (char *)auStack_180;
    func_0x00010002b838(auStack_180,pcVar1);
    acStack_1a0[0] = '\0';
    acStack_1a0[1] = '\0';
    acStack_1a0[2] = '\0';
    acStack_1a0[3] = '\0';
    acStack_1a0[4] = '\0';
    acStack_1a0[5] = '\0';
    acStack_1a0[6] = '\0';
    acStack_1a0[7] = '\0';
    acStack_1a0[8] = '\0';
    acStack_1a0[9] = '\0';
    acStack_1a0[10] = '\0';
    acStack_1a0[0xb] = '\0';
    acStack_1a0[0xc] = '\0';
    acStack_1a0[0xd] = '\0';
    acStack_1a0[0xe] = '\0';
    acStack_1a0[0xf] = '\0';
    acStack_1a0[0x10] = '\0';
    acStack_1a0[0x11] = '\0';
    acStack_1a0[0x12] = '\0';
    acStack_1a0[0x13] = '\0';
    acStack_1a0[0x14] = '\0';
    acStack_1a0[0x15] = '\0';
    acStack_1a0[0x16] = '\0';
    acStack_1a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_1a0,auStack_180,&lStack_168,1);
    pcVar8 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847c88,acStack_1a0,pcVar4);
    puStack_188 = acStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    pcVar10 = pcVar11;
    pcVar13 = pcVar4;
    pcVar12 = acStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      pcVar10 = pcVar11;
      pcVar13 = pcVar4;
      pcVar12 = acStack_1a0;
    }
  }
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  _objc_release(pcVar5);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  pcVar3 = acStack_220;
  pcStack_1a8 = FUN_104cb9eb8;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar8;
  pcVar4 = pcVar10;
  puStack_1e0 = unaff_x24;
  pcStack_1d8 = unaff_x23;
  puStack_1d0 = (undefined8 *)pcVar12;
  plStack_1c8 = plVar14;
  pcStack_1c0 = pcVar1;
  pcStack_1b8 = pcVar5;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(pcVar8);
  plVar14 = (long *)0x0;
  if (pcVar2 != (char *)0x0) {
    plVar14 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    unaff_x23 = (char *)auStack_200;
    func_0x00010002b838(auStack_200,pcVar1);
    acStack_220[0] = '\0';
    acStack_220[1] = '\0';
    acStack_220[2] = '\0';
    acStack_220[3] = '\0';
    acStack_220[4] = '\0';
    acStack_220[5] = '\0';
    acStack_220[6] = '\0';
    acStack_220[7] = '\0';
    acStack_220[8] = '\0';
    acStack_220[9] = '\0';
    acStack_220[10] = '\0';
    acStack_220[0xb] = '\0';
    acStack_220[0xc] = '\0';
    acStack_220[0xd] = '\0';
    acStack_220[0xe] = '\0';
    acStack_220[0xf] = '\0';
    acStack_220[0x10] = '\0';
    acStack_220[0x11] = '\0';
    acStack_220[0x12] = '\0';
    acStack_220[0x13] = '\0';
    acStack_220[0x14] = '\0';
    acStack_220[0x15] = '\0';
    acStack_220[0x16] = '\0';
    acStack_220[0x17] = '\0';
    func_0x00010007e1e8(acStack_220,auStack_200,&lStack_1e8,1);
    pcVar9 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847cd8,acStack_220,pcVar10);
    puStack_208 = acStack_220;
    func_0x00010007e5dc(&puStack_208);
    pcVar4 = pcVar3;
    pcVar13 = pcVar10;
    pcVar12 = acStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      pcVar4 = pcVar3;
      pcVar13 = pcVar10;
      pcVar12 = acStack_220;
    }
  }
  pcVar1 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  _objc_release(pcVar8);
  pcVar3 = pcVar1;
  __Unwind_Resume();
  pcStack_228 = FUN_104cba02c;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar9;
  pcVar5 = pcVar4;
  puStack_260 = unaff_x24;
  pcStack_258 = unaff_x23;
  puStack_250 = (undefined8 *)pcVar12;
  plStack_248 = plVar14;
  pcStack_240 = pcVar1;
  pcStack_238 = pcVar8;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(pcVar9);
  _objc_retain(pcVar4);
  puVar16 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar14 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar9;
      _objc_retainAutorelease(pcVar9);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_298,pcVar1);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar1 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_280,pcVar1);
    acStack_2b8[0] = '\0';
    acStack_2b8[1] = '\0';
    acStack_2b8[2] = '\0';
    acStack_2b8[3] = '\0';
    acStack_2b8[4] = '\0';
    acStack_2b8[5] = '\0';
    acStack_2b8[6] = '\0';
    acStack_2b8[7] = '\0';
    acStack_2b8[8] = '\0';
    acStack_2b8[9] = '\0';
    acStack_2b8[10] = '\0';
    acStack_2b8[0xb] = '\0';
    acStack_2b8[0xc] = '\0';
    acStack_2b8[0xd] = '\0';
    acStack_2b8[0xe] = '\0';
    acStack_2b8[0xf] = '\0';
    acStack_2b8[0x10] = '\0';
    acStack_2b8[0x11] = '\0';
    acStack_2b8[0x12] = '\0';
    acStack_2b8[0x13] = '\0';
    acStack_2b8[0x14] = '\0';
    acStack_2b8[0x15] = '\0';
    acStack_2b8[0x16] = '\0';
    acStack_2b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_2b8,auStack_298,&lStack_268,2);
    pcVar2 = "";
    pcVar5 = acStack_2b8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847d28,pcVar5,pcVar13);
    pcStack_2a0 = acStack_2b8;
    func_0x00010007e5dc(&pcStack_2a0);
    lVar15 = 0;
    puVar16 = auStack_298;
    do {
      if ((&cStack_269)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar4);
  pcVar1 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_268) {
    ___stack_chk_fail();
    _objc_release(pcVar4);
    if (cStack_281 < '\0') {
      __ZdlPv(auStack_298[0]);
    }
    _objc_release(pcVar4);
    _objc_release(pcVar9);
    __Unwind_Resume();
    pcVar12 = acStack_340;
    pcStack_2c8 = FUN_104cba25c;
    lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar4 = pcVar2;
    pcVar9 = pcVar2;
    dVar17 = param_1;
    pppuStack_2d0 = &pppuStack_230;
    _objc_retain();
    if (pcVar1 != (char *)0x0) {
      _objc_retain(pcVar2);
      plVar14 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      puVar16 = auStack_320;
      func_0x00010002b838(auStack_320,pcVar1);
      acStack_340[0] = '\0';
      acStack_340[1] = '\0';
      acStack_340[2] = '\0';
      acStack_340[3] = '\0';
      acStack_340[4] = '\0';
      acStack_340[5] = '\0';
      acStack_340[6] = '\0';
      acStack_340[7] = '\0';
      acStack_340[8] = '\0';
      acStack_340[9] = '\0';
      acStack_340[10] = '\0';
      acStack_340[0xb] = '\0';
      acStack_340[0xc] = '\0';
      acStack_340[0xd] = '\0';
      acStack_340[0xe] = '\0';
      acStack_340[0xf] = '\0';
      acStack_340[0x10] = '\0';
      acStack_340[0x11] = '\0';
      acStack_340[0x12] = '\0';
      acStack_340[0x13] = '\0';
      acStack_340[0x14] = '\0';
      acStack_340[0x15] = '\0';
      acStack_340[0x16] = '\0';
      acStack_340[0x17] = '\0';
      func_0x00010007e1e8(acStack_340,auStack_320,&lStack_308,1);
      dVar17 = param_1 * 1000.0;
      pcVar9 = "\x01";
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847d78,acStack_340,(long)dVar17);
      puStack_328 = acStack_340;
      func_0x00010007e5dc(&puStack_328);
      pcVar5 = pcVar12;
      if (cStack_309 < '\0') {
        __ZdlPv(auStack_320[0]);
        pcVar5 = pcVar12;
      }
      pcVar4 = pcVar2;
      _objc_release();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_308) {
      ___stack_chk_fail();
      _objc_release(pcVar2);
      _objc_release(pcVar2);
      _objc_release(pcVar2);
      pcVar2 = pcVar9;
      __Unwind_Resume();
      pcStack_348 = FUN_104cba3f0;
      lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar1 = pcVar2;
      pcVar9 = pcVar5;
      dVar18 = dVar17;
      pppuStack_350 = &pppuStack_2d0;
      _objc_retain(pcVar2);
      _objc_retain(pcVar5);
      if (pcVar4 != (char *)0x0) {
        _objc_retain(pcVar2);
        _objc_retain(pcVar5);
        plVar14 = *(long **)(pcVar4 + 8);
        _objc_retain(pcVar2);
        if (pcVar2 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar2;
          _objc_retainAutorelease(pcVar2);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar2);
        func_0x00010002b838(auStack_3c8,pcVar1);
        _objc_retain(pcVar5);
        if (pcVar5 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar5);
          pcVar1 = pcVar5;
          func_0x00010bdc3520(pcVar5);
        }
        _objc_release(pcVar5);
        func_0x00010002b838(auStack_3b0,pcVar1);
        acStack_3e8[0] = '\0';
        acStack_3e8[1] = '\0';
        acStack_3e8[2] = '\0';
        acStack_3e8[3] = '\0';
        acStack_3e8[4] = '\0';
        acStack_3e8[5] = '\0';
        acStack_3e8[6] = '\0';
        acStack_3e8[7] = '\0';
        acStack_3e8[8] = '\0';
        acStack_3e8[9] = '\0';
        acStack_3e8[10] = '\0';
        acStack_3e8[0xb] = '\0';
        acStack_3e8[0xc] = '\0';
        acStack_3e8[0xd] = '\0';
        acStack_3e8[0xe] = '\0';
        acStack_3e8[0xf] = '\0';
        acStack_3e8[0x10] = '\0';
        acStack_3e8[0x11] = '\0';
        acStack_3e8[0x12] = '\0';
        acStack_3e8[0x13] = '\0';
        acStack_3e8[0x14] = '\0';
        acStack_3e8[0x15] = '\0';
        acStack_3e8[0x16] = '\0';
        acStack_3e8[0x17] = '\0';
        func_0x00010007e1e8(acStack_3e8,auStack_3c8,&lStack_398,2);
        dVar18 = dVar17 * 1000.0;
        pcVar1 = "\x01";
        pcVar9 = acStack_3e8;
        (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847dc8,pcVar9,(long)dVar18);
        pcStack_3d0 = acStack_3e8;
        func_0x00010007e5dc(&pcStack_3d0);
        lVar15 = 0;
        puVar16 = auStack_3c8;
        do {
          if ((&cStack_399)[lVar15] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_3b0 + lVar15));
          }
          lVar15 = lVar15 + -0x18;
        } while (lVar15 != -0x30);
        _objc_release(pcVar5);
        _objc_release(pcVar2);
      }
      pcVar4 = pcVar5;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_398) {
        ___stack_chk_fail();
        _objc_release(pcVar5);
        if (cStack_3b1 < '\0') {
          __ZdlPv(auStack_3c8[0]);
        }
        _objc_release(pcVar5);
        _objc_release(pcVar2);
        _objc_release(pcVar5);
        _objc_release(pcVar2);
        pcVar2 = pcVar1;
        __Unwind_Resume();
        pcStack_3f8 = FUN_104cba660;
        lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar1 = pcVar9;
        pppuStack_400 = &pppuStack_350;
        _objc_retain(pcVar2);
        _objc_retain(pcVar9);
        if (pcVar4 != (char *)0x0) {
          _objc_retain(pcVar2);
          _objc_retain(pcVar9);
          plVar14 = *(long **)(pcVar4 + 8);
          _objc_retain(pcVar2);
          if (pcVar2 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            pcVar1 = pcVar2;
            _objc_retainAutorelease(pcVar2);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar2);
          func_0x00010002b838(auStack_478,pcVar1);
          _objc_retain(pcVar9);
          if (pcVar9 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            _objc_retainAutorelease(pcVar9);
            pcVar1 = pcVar9;
            func_0x00010bdc3520(pcVar9);
          }
          _objc_release(pcVar9);
          func_0x00010002b838(auStack_460,pcVar1);
          acStack_498[0] = '\0';
          acStack_498[1] = '\0';
          acStack_498[2] = '\0';
          acStack_498[3] = '\0';
          acStack_498[4] = '\0';
          acStack_498[5] = '\0';
          acStack_498[6] = '\0';
          acStack_498[7] = '\0';
          acStack_498[8] = '\0';
          acStack_498[9] = '\0';
          acStack_498[10] = '\0';
          acStack_498[0xb] = '\0';
          acStack_498[0xc] = '\0';
          acStack_498[0xd] = '\0';
          acStack_498[0xe] = '\0';
          acStack_498[0xf] = '\0';
          acStack_498[0x10] = '\0';
          acStack_498[0x11] = '\0';
          acStack_498[0x12] = '\0';
          acStack_498[0x13] = '\0';
          acStack_498[0x14] = '\0';
          acStack_498[0x15] = '\0';
          acStack_498[0x16] = '\0';
          acStack_498[0x17] = '\0';
          func_0x00010007e1e8(acStack_498,auStack_478,&lStack_448,2);
          pcVar1 = acStack_498;
          (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847e18,pcVar1,(long)(dVar18 * 1000.0));
          pcStack_480 = acStack_498;
          func_0x00010007e5dc(&pcStack_480);
          lVar15 = 0;
          puVar16 = auStack_478;
          do {
            if ((&cStack_449)[lVar15] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_460 + lVar15));
            }
            lVar15 = lVar15 + -0x18;
          } while (lVar15 != -0x30);
          _objc_release(pcVar9);
          _objc_release(pcVar2);
        }
        pcVar5 = pcVar9;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_448) {
          ___stack_chk_fail();
          _objc_release(pcVar9);
          if (cStack_461 < '\0') {
            __ZdlPv(auStack_478[0]);
          }
          _objc_release(pcVar9);
          _objc_release(pcVar2);
          _objc_release(pcVar9);
          _objc_release(pcVar2);
          pcVar4 = pcVar5;
          __Unwind_Resume();
          ppcVar6 = &pcStack_4e0;
          pcStack_4a8 = FUN_104cba8d0;
          puStack_4d0 = puVar16;
          pcStack_4c8 = pcVar5;
          pcStack_4c0 = pcVar9;
          pcStack_4b8 = pcVar2;
          pppuStack_4b0 = &pppuStack_400;
          _objc_retain(pcVar1);
          puStack_4d8 = PTR_PTR_1126e3ac0;
          pcStack_4e0 = pcVar4;
          _objc_msgSendSuper2(&pcStack_4e0,PTR_s_init_1125d9248);
          if (ppcVar6 != (char **)0x0) {
            lVar15 = (long)_DAT_1127104b4;
            _objc_retain(pcVar1);
            uVar7 = *(undefined8 *)((long)ppcVar6 + lVar15);
            *(char **)((long)ppcVar6 + lVar15) = pcVar1;
            _objc_release(uVar7);
          }
          _objc_release(pcVar1);
          return (char *)ppcVar6;
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar2);
    return pcVar2;
  }
  return pcVar1;
}



/* Entry: 104cb9b14; end: 104cb9d43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_104cb9b14(double param_1,long param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char **ppcVar8;
  undefined8 uVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  char *unaff_x23;
  undefined8 *unaff_x24;
  double dVar16;
  double dVar17;
  char *pcStack_460;
  undefined *puStack_458;
  undefined8 *puStack_450;
  char *pcStack_448;
  char *pcStack_440;
  char *pcStack_438;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  char acStack_418 [24];
  char *pcStack_400;
  undefined8 auStack_3f8 [2];
  char cStack_3e1;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 ***pppuStack_380;
  code *pcStack_378;
  char acStack_368 [24];
  char *pcStack_350;
  undefined8 auStack_348 [2];
  char cStack_331;
  undefined8 auStack_330 [2];
  char cStack_319;
  long lStack_318;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  char acStack_2c0 [24];
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  char acStack_238 [24];
  char *pcStack_220;
  undefined8 auStack_218 [2];
  char cStack_201;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  char *pcStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char acStack_1a0 [24];
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_120 [24];
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
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
  pcVar5 = param_4;
  pcVar7 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  pcVar4 = (char *)0x0;
  if (param_2 != 0) {
    plVar14 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
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
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar5 = acStack_98;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847c38,pcVar5,param_5);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar13 = 0;
    pcVar4 = (char *)auStack_78;
    pcVar7 = param_5;
    do {
      if ((&cStack_49)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(param_4);
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcVar11 = acStack_120;
  pcStack_a8 = FUN_104cb9d44;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar10 = pcVar1;
  pcVar6 = pcVar5;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = (undefined8 *)pcVar4;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_4;
  pcStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  plVar14 = (long *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar14 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x23 = (char *)auStack_100;
    func_0x00010002b838(auStack_100,pcVar4);
    acStack_120[0] = '\0';
    acStack_120[1] = '\0';
    acStack_120[2] = '\0';
    acStack_120[3] = '\0';
    acStack_120[4] = '\0';
    acStack_120[5] = '\0';
    acStack_120[6] = '\0';
    acStack_120[7] = '\0';
    acStack_120[8] = '\0';
    acStack_120[9] = '\0';
    acStack_120[10] = '\0';
    acStack_120[0xb] = '\0';
    acStack_120[0xc] = '\0';
    acStack_120[0xd] = '\0';
    acStack_120[0xe] = '\0';
    acStack_120[0xf] = '\0';
    acStack_120[0x10] = '\0';
    acStack_120[0x11] = '\0';
    acStack_120[0x12] = '\0';
    acStack_120[0x13] = '\0';
    acStack_120[0x14] = '\0';
    acStack_120[0x15] = '\0';
    acStack_120[0x16] = '\0';
    acStack_120[0x17] = '\0';
    func_0x00010007e1e8(acStack_120,auStack_100,&lStack_e8,1);
    pcVar10 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847c88,acStack_120,pcVar5);
    puStack_108 = acStack_120;
    func_0x00010007e5dc(&puStack_108);
    pcVar6 = pcVar11;
    pcVar7 = pcVar5;
    pcVar4 = acStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      pcVar6 = pcVar11;
      pcVar7 = pcVar5;
      pcVar4 = acStack_120;
    }
  }
  pcVar5 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar5;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar3 = pcVar5;
  __Unwind_Resume();
  pcVar12 = acStack_1a0;
  pcStack_128 = FUN_104cb9eb8;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar10;
  pcVar11 = pcVar6;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = (undefined8 *)pcVar4;
  plStack_148 = plVar14;
  pcStack_140 = pcVar5;
  pcStack_138 = pcVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(pcVar10);
  plVar14 = (long *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar14 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar10;
      _objc_retainAutorelease(pcVar10);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar10);
    unaff_x23 = (char *)auStack_180;
    func_0x00010002b838(auStack_180,pcVar1);
    acStack_1a0[0] = '\0';
    acStack_1a0[1] = '\0';
    acStack_1a0[2] = '\0';
    acStack_1a0[3] = '\0';
    acStack_1a0[4] = '\0';
    acStack_1a0[5] = '\0';
    acStack_1a0[6] = '\0';
    acStack_1a0[7] = '\0';
    acStack_1a0[8] = '\0';
    acStack_1a0[9] = '\0';
    acStack_1a0[10] = '\0';
    acStack_1a0[0xb] = '\0';
    acStack_1a0[0xc] = '\0';
    acStack_1a0[0xd] = '\0';
    acStack_1a0[0xe] = '\0';
    acStack_1a0[0xf] = '\0';
    acStack_1a0[0x10] = '\0';
    acStack_1a0[0x11] = '\0';
    acStack_1a0[0x12] = '\0';
    acStack_1a0[0x13] = '\0';
    acStack_1a0[0x14] = '\0';
    acStack_1a0[0x15] = '\0';
    acStack_1a0[0x16] = '\0';
    acStack_1a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_1a0,auStack_180,&lStack_168,1);
    pcVar2 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847cd8,acStack_1a0,pcVar6);
    puStack_188 = acStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    pcVar11 = pcVar12;
    pcVar7 = pcVar6;
    pcVar4 = acStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      pcVar11 = pcVar12;
      pcVar7 = pcVar6;
      pcVar4 = acStack_1a0;
    }
  }
  pcVar1 = pcVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_168) {
    ___stack_chk_fail();
    _objc_release(pcVar10);
    _objc_release(pcVar10);
    pcVar6 = pcVar1;
    __Unwind_Resume();
    pcStack_1a8 = FUN_104cba02c;
    lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar5 = pcVar2;
    pcVar3 = pcVar11;
    puStack_1e0 = unaff_x24;
    pcStack_1d8 = unaff_x23;
    puStack_1d0 = (undefined8 *)pcVar4;
    plStack_1c8 = plVar14;
    pcStack_1c0 = pcVar1;
    pcStack_1b8 = pcVar10;
    pppuStack_1b0 = &ppuStack_130;
    _objc_retain(pcVar2);
    _objc_retain(pcVar11);
    puVar15 = (undefined8 *)0x0;
    if (pcVar6 != (char *)0x0) {
      plVar14 = *(long **)(pcVar6 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      func_0x00010002b838(auStack_218,pcVar1);
      _objc_retain(pcVar11);
      if (pcVar11 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar11);
        pcVar1 = pcVar11;
        func_0x00010bdc3520(pcVar11);
      }
      _objc_release(pcVar11);
      func_0x00010002b838(auStack_200,pcVar1);
      acStack_238[0] = '\0';
      acStack_238[1] = '\0';
      acStack_238[2] = '\0';
      acStack_238[3] = '\0';
      acStack_238[4] = '\0';
      acStack_238[5] = '\0';
      acStack_238[6] = '\0';
      acStack_238[7] = '\0';
      acStack_238[8] = '\0';
      acStack_238[9] = '\0';
      acStack_238[10] = '\0';
      acStack_238[0xb] = '\0';
      acStack_238[0xc] = '\0';
      acStack_238[0xd] = '\0';
      acStack_238[0xe] = '\0';
      acStack_238[0xf] = '\0';
      acStack_238[0x10] = '\0';
      acStack_238[0x11] = '\0';
      acStack_238[0x12] = '\0';
      acStack_238[0x13] = '\0';
      acStack_238[0x14] = '\0';
      acStack_238[0x15] = '\0';
      acStack_238[0x16] = '\0';
      acStack_238[0x17] = '\0';
      func_0x00010007e1e8(acStack_238,auStack_218,&lStack_1e8,2);
      pcVar5 = "";
      pcVar3 = acStack_238;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847d28,pcVar3,pcVar7);
      pcStack_220 = acStack_238;
      func_0x00010007e5dc(&pcStack_220);
      lVar13 = 0;
      puVar15 = auStack_218;
      do {
        if ((&cStack_1e9)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
    _objc_release(pcVar11);
    pcVar1 = pcVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1e8) {
      ___stack_chk_fail();
      _objc_release(pcVar11);
      if (cStack_201 < '\0') {
        __ZdlPv(auStack_218[0]);
      }
      _objc_release(pcVar11);
      _objc_release(pcVar2);
      __Unwind_Resume();
      pcVar2 = acStack_2c0;
      pcStack_248 = FUN_104cba25c;
      lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar7 = pcVar5;
      pcVar4 = pcVar5;
      dVar16 = param_1;
      pppuStack_250 = &pppuStack_1b0;
      _objc_retain();
      if (pcVar1 != (char *)0x0) {
        _objc_retain(pcVar5);
        plVar14 = *(long **)(pcVar1 + 8);
        _objc_retain(pcVar5);
        if (pcVar5 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar5;
          _objc_retainAutorelease(pcVar5);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar5);
        puVar15 = auStack_2a0;
        func_0x00010002b838(auStack_2a0,pcVar1);
        acStack_2c0[0] = '\0';
        acStack_2c0[1] = '\0';
        acStack_2c0[2] = '\0';
        acStack_2c0[3] = '\0';
        acStack_2c0[4] = '\0';
        acStack_2c0[5] = '\0';
        acStack_2c0[6] = '\0';
        acStack_2c0[7] = '\0';
        acStack_2c0[8] = '\0';
        acStack_2c0[9] = '\0';
        acStack_2c0[10] = '\0';
        acStack_2c0[0xb] = '\0';
        acStack_2c0[0xc] = '\0';
        acStack_2c0[0xd] = '\0';
        acStack_2c0[0xe] = '\0';
        acStack_2c0[0xf] = '\0';
        acStack_2c0[0x10] = '\0';
        acStack_2c0[0x11] = '\0';
        acStack_2c0[0x12] = '\0';
        acStack_2c0[0x13] = '\0';
        acStack_2c0[0x14] = '\0';
        acStack_2c0[0x15] = '\0';
        acStack_2c0[0x16] = '\0';
        acStack_2c0[0x17] = '\0';
        func_0x00010007e1e8(acStack_2c0,auStack_2a0,&lStack_288,1);
        dVar16 = param_1 * 1000.0;
        pcVar4 = "\x01";
        (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847d78,acStack_2c0,(long)dVar16);
        puStack_2a8 = acStack_2c0;
        func_0x00010007e5dc(&puStack_2a8);
        pcVar3 = pcVar2;
        if (cStack_289 < '\0') {
          __ZdlPv(auStack_2a0[0]);
          pcVar3 = pcVar2;
        }
        pcVar7 = pcVar5;
        _objc_release();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_288) {
        ___stack_chk_fail();
        _objc_release(pcVar5);
        _objc_release(pcVar5);
        _objc_release(pcVar5);
        pcVar5 = pcVar4;
        __Unwind_Resume();
        pcStack_2c8 = FUN_104cba3f0;
        lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar1 = pcVar5;
        pcVar4 = pcVar3;
        dVar17 = dVar16;
        pppuStack_2d0 = &pppuStack_250;
        _objc_retain(pcVar5);
        _objc_retain(pcVar3);
        if (pcVar7 != (char *)0x0) {
          _objc_retain(pcVar5);
          _objc_retain(pcVar3);
          plVar14 = *(long **)(pcVar7 + 8);
          _objc_retain(pcVar5);
          if (pcVar5 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            pcVar1 = pcVar5;
            _objc_retainAutorelease(pcVar5);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar5);
          func_0x00010002b838(auStack_348,pcVar1);
          _objc_retain(pcVar3);
          if (pcVar3 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            _objc_retainAutorelease(pcVar3);
            pcVar1 = pcVar3;
            func_0x00010bdc3520(pcVar3);
          }
          _objc_release(pcVar3);
          func_0x00010002b838(auStack_330,pcVar1);
          acStack_368[0] = '\0';
          acStack_368[1] = '\0';
          acStack_368[2] = '\0';
          acStack_368[3] = '\0';
          acStack_368[4] = '\0';
          acStack_368[5] = '\0';
          acStack_368[6] = '\0';
          acStack_368[7] = '\0';
          acStack_368[8] = '\0';
          acStack_368[9] = '\0';
          acStack_368[10] = '\0';
          acStack_368[0xb] = '\0';
          acStack_368[0xc] = '\0';
          acStack_368[0xd] = '\0';
          acStack_368[0xe] = '\0';
          acStack_368[0xf] = '\0';
          acStack_368[0x10] = '\0';
          acStack_368[0x11] = '\0';
          acStack_368[0x12] = '\0';
          acStack_368[0x13] = '\0';
          acStack_368[0x14] = '\0';
          acStack_368[0x15] = '\0';
          acStack_368[0x16] = '\0';
          acStack_368[0x17] = '\0';
          func_0x00010007e1e8(acStack_368,auStack_348,&lStack_318,2);
          dVar17 = dVar16 * 1000.0;
          pcVar1 = "\x01";
          pcVar4 = acStack_368;
          (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847dc8,pcVar4,(long)dVar17);
          pcStack_350 = acStack_368;
          func_0x00010007e5dc(&pcStack_350);
          lVar13 = 0;
          puVar15 = auStack_348;
          do {
            if ((&cStack_319)[lVar13] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_330 + lVar13));
            }
            lVar13 = lVar13 + -0x18;
          } while (lVar13 != -0x30);
          _objc_release(pcVar3);
          _objc_release(pcVar5);
        }
        pcVar7 = pcVar3;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_318) {
          ___stack_chk_fail();
          _objc_release(pcVar3);
          if (cStack_331 < '\0') {
            __ZdlPv(auStack_348[0]);
          }
          _objc_release(pcVar3);
          _objc_release(pcVar5);
          _objc_release(pcVar3);
          _objc_release(pcVar5);
          pcVar5 = pcVar1;
          __Unwind_Resume();
          pcStack_378 = FUN_104cba660;
          lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          pcVar1 = pcVar4;
          pppuStack_380 = &pppuStack_2d0;
          _objc_retain(pcVar5);
          _objc_retain(pcVar4);
          if (pcVar7 != (char *)0x0) {
            _objc_retain(pcVar5);
            _objc_retain(pcVar4);
            plVar14 = *(long **)(pcVar7 + 8);
            _objc_retain(pcVar5);
            if (pcVar5 == (char *)0x0) {
              pcVar1 = "";
            }
            else {
              pcVar1 = pcVar5;
              _objc_retainAutorelease(pcVar5);
              func_0x00010bdc3520();
            }
            _objc_release(pcVar5);
            func_0x00010002b838(auStack_3f8,pcVar1);
            _objc_retain(pcVar4);
            if (pcVar4 == (char *)0x0) {
              pcVar1 = "";
            }
            else {
              _objc_retainAutorelease(pcVar4);
              pcVar1 = pcVar4;
              func_0x00010bdc3520(pcVar4);
            }
            _objc_release(pcVar4);
            func_0x00010002b838(auStack_3e0,pcVar1);
            acStack_418[0] = '\0';
            acStack_418[1] = '\0';
            acStack_418[2] = '\0';
            acStack_418[3] = '\0';
            acStack_418[4] = '\0';
            acStack_418[5] = '\0';
            acStack_418[6] = '\0';
            acStack_418[7] = '\0';
            acStack_418[8] = '\0';
            acStack_418[9] = '\0';
            acStack_418[10] = '\0';
            acStack_418[0xb] = '\0';
            acStack_418[0xc] = '\0';
            acStack_418[0xd] = '\0';
            acStack_418[0xe] = '\0';
            acStack_418[0xf] = '\0';
            acStack_418[0x10] = '\0';
            acStack_418[0x11] = '\0';
            acStack_418[0x12] = '\0';
            acStack_418[0x13] = '\0';
            acStack_418[0x14] = '\0';
            acStack_418[0x15] = '\0';
            acStack_418[0x16] = '\0';
            acStack_418[0x17] = '\0';
            func_0x00010007e1e8(acStack_418,auStack_3f8,&lStack_3c8,2);
            pcVar1 = acStack_418;
            (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847e18,pcVar1,(long)(dVar17 * 1000.0));
            pcStack_400 = acStack_418;
            func_0x00010007e5dc(&pcStack_400);
            lVar13 = 0;
            puVar15 = auStack_3f8;
            do {
              if ((&cStack_3c9)[lVar13] < '\0') {
                __ZdlPv(*(undefined8 *)((long)auStack_3e0 + lVar13));
              }
              lVar13 = lVar13 + -0x18;
            } while (lVar13 != -0x30);
            _objc_release(pcVar4);
            _objc_release(pcVar5);
          }
          pcVar7 = pcVar4;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3c8) {
            ___stack_chk_fail();
            _objc_release(pcVar4);
            if (cStack_3e1 < '\0') {
              __ZdlPv(auStack_3f8[0]);
            }
            _objc_release(pcVar4);
            _objc_release(pcVar5);
            _objc_release(pcVar4);
            _objc_release(pcVar5);
            pcVar2 = pcVar7;
            __Unwind_Resume();
            ppcVar8 = &pcStack_460;
            pcStack_428 = FUN_104cba8d0;
            puStack_450 = puVar15;
            pcStack_448 = pcVar7;
            pcStack_440 = pcVar4;
            pcStack_438 = pcVar5;
            pppuStack_430 = &pppuStack_380;
            _objc_retain(pcVar1);
            puStack_458 = PTR_PTR_1126e3ac0;
            pcStack_460 = pcVar2;
            _objc_msgSendSuper2(&pcStack_460,PTR_s_init_1125d9248);
            if (ppcVar8 != (char **)0x0) {
              lVar13 = (long)_DAT_1127104b4;
              _objc_retain(pcVar1);
              uVar9 = *(undefined8 *)((long)ppcVar8 + lVar13);
              *(char **)((long)ppcVar8 + lVar13) = pcVar1;
              _objc_release(uVar9);
            }
            _objc_release(pcVar1);
            return (char *)ppcVar8;
          }
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(pcVar5);
      return pcVar5;
    }
    return pcVar1;
  }
  return pcVar1;
}



/* Entry: 104cb9d44; end: 104cb9eb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_104cb9d44(double param_1,long param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  double dVar12;
  double dVar13;
  char *pcStack_3c0;
  undefined *puStack_3b8;
  undefined8 *puStack_3b0;
  char *pcStack_3a8;
  char *pcStack_3a0;
  char *pcStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  char acStack_378 [24];
  char *pcStack_360;
  undefined8 auStack_358 [2];
  char cStack_341;
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  undefined8 ***pppuStack_2e0;
  code *pcStack_2d8;
  char acStack_2c8 [24];
  char *pcStack_2b0;
  undefined8 auStack_2a8 [2];
  char cStack_291;
  undefined8 auStack_290 [2];
  char cStack_279;
  long lStack_278;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  char acStack_220 [24];
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char acStack_198 [24];
  char *pcStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar3 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar9 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110847c88,acStack_80,param_4);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar3 = pcVar2;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar3 = pcVar2;
      param_5 = param_4;
    }
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcVar8 = acStack_100;
  pcStack_88 = FUN_104cb9eb8;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar4 = pcVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar9 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_100[0] = '\0';
    acStack_100[1] = '\0';
    acStack_100[2] = '\0';
    acStack_100[3] = '\0';
    acStack_100[4] = '\0';
    acStack_100[5] = '\0';
    acStack_100[6] = '\0';
    acStack_100[7] = '\0';
    acStack_100[8] = '\0';
    acStack_100[9] = '\0';
    acStack_100[10] = '\0';
    acStack_100[0xb] = '\0';
    acStack_100[0xc] = '\0';
    acStack_100[0xd] = '\0';
    acStack_100[0xe] = '\0';
    acStack_100[0xf] = '\0';
    acStack_100[0x10] = '\0';
    acStack_100[0x11] = '\0';
    acStack_100[0x12] = '\0';
    acStack_100[0x13] = '\0';
    acStack_100[0x14] = '\0';
    acStack_100[0x15] = '\0';
    acStack_100[0x16] = '\0';
    acStack_100[0x17] = '\0';
    func_0x00010007e1e8(acStack_100,auStack_e0,&lStack_c8,1);
    pcVar7 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110847cd8,acStack_100,pcVar3);
    puStack_e8 = acStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pcVar4 = pcVar8;
    param_5 = pcVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pcVar4 = pcVar8;
      param_5 = pcVar3;
    }
  }
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    _objc_release(pcVar1);
    _objc_release(pcVar1);
    __Unwind_Resume();
    pcStack_108 = FUN_104cba02c;
    lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar1 = pcVar7;
    pcVar2 = pcVar4;
    ppuStack_110 = &puStack_90;
    _objc_retain(pcVar7);
    _objc_retain(pcVar4);
    puVar11 = (undefined8 *)0x0;
    if (pcVar3 != (char *)0x0) {
      plVar9 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar7;
        _objc_retainAutorelease(pcVar7);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar7);
      func_0x00010002b838(auStack_178,pcVar1);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar4);
        pcVar1 = pcVar4;
        func_0x00010bdc3520(pcVar4);
      }
      _objc_release(pcVar4);
      func_0x00010002b838(auStack_160,pcVar1);
      acStack_198[0] = '\0';
      acStack_198[1] = '\0';
      acStack_198[2] = '\0';
      acStack_198[3] = '\0';
      acStack_198[4] = '\0';
      acStack_198[5] = '\0';
      acStack_198[6] = '\0';
      acStack_198[7] = '\0';
      acStack_198[8] = '\0';
      acStack_198[9] = '\0';
      acStack_198[10] = '\0';
      acStack_198[0xb] = '\0';
      acStack_198[0xc] = '\0';
      acStack_198[0xd] = '\0';
      acStack_198[0xe] = '\0';
      acStack_198[0xf] = '\0';
      acStack_198[0x10] = '\0';
      acStack_198[0x11] = '\0';
      acStack_198[0x12] = '\0';
      acStack_198[0x13] = '\0';
      acStack_198[0x14] = '\0';
      acStack_198[0x15] = '\0';
      acStack_198[0x16] = '\0';
      acStack_198[0x17] = '\0';
      func_0x00010007e1e8(acStack_198,auStack_178,&lStack_148,2);
      pcVar1 = "";
      pcVar2 = acStack_198;
      (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110847d28,pcVar2,param_5);
      pcStack_180 = acStack_198;
      func_0x00010007e5dc(&pcStack_180);
      lVar10 = 0;
      puVar11 = auStack_178;
      do {
        if ((&cStack_149)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
      } while (lVar10 != -0x30);
    }
    _objc_release(pcVar4);
    pcVar3 = pcVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
      return pcVar3;
    }
    ___stack_chk_fail();
    _objc_release(pcVar4);
    if (cStack_161 < '\0') {
      __ZdlPv(auStack_178[0]);
    }
    _objc_release(pcVar4);
    _objc_release(pcVar7);
    __Unwind_Resume();
    pcVar8 = acStack_220;
    pcStack_1a8 = FUN_104cba25c;
    lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar4 = pcVar1;
    pcVar7 = pcVar1;
    dVar12 = param_1;
    pppuStack_1b0 = &ppuStack_110;
    _objc_retain();
    if (pcVar3 != (char *)0x0) {
      _objc_retain(pcVar1);
      plVar9 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      puVar11 = auStack_200;
      func_0x00010002b838(auStack_200,pcVar3);
      acStack_220[0] = '\0';
      acStack_220[1] = '\0';
      acStack_220[2] = '\0';
      acStack_220[3] = '\0';
      acStack_220[4] = '\0';
      acStack_220[5] = '\0';
      acStack_220[6] = '\0';
      acStack_220[7] = '\0';
      acStack_220[8] = '\0';
      acStack_220[9] = '\0';
      acStack_220[10] = '\0';
      acStack_220[0xb] = '\0';
      acStack_220[0xc] = '\0';
      acStack_220[0xd] = '\0';
      acStack_220[0xe] = '\0';
      acStack_220[0xf] = '\0';
      acStack_220[0x10] = '\0';
      acStack_220[0x11] = '\0';
      acStack_220[0x12] = '\0';
      acStack_220[0x13] = '\0';
      acStack_220[0x14] = '\0';
      acStack_220[0x15] = '\0';
      acStack_220[0x16] = '\0';
      acStack_220[0x17] = '\0';
      func_0x00010007e1e8(acStack_220,auStack_200,&lStack_1e8,1);
      dVar12 = param_1 * 1000.0;
      pcVar7 = "\x01";
      (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110847d78,acStack_220,(long)dVar12);
      puStack_208 = acStack_220;
      func_0x00010007e5dc(&puStack_208);
      pcVar2 = pcVar8;
      if (cStack_1e9 < '\0') {
        __ZdlPv(auStack_200[0]);
        pcVar2 = pcVar8;
      }
      pcVar4 = pcVar1;
      _objc_release();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1e8) {
      ___stack_chk_fail();
      _objc_release(pcVar1);
      _objc_release(pcVar1);
      _objc_release(pcVar1);
      pcVar1 = pcVar7;
      __Unwind_Resume();
      pcStack_228 = FUN_104cba3f0;
      lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar3 = pcVar1;
      pcVar7 = pcVar2;
      dVar13 = dVar12;
      pppuStack_230 = &pppuStack_1b0;
      _objc_retain(pcVar1);
      _objc_retain(pcVar2);
      if (pcVar4 != (char *)0x0) {
        _objc_retain(pcVar1);
        _objc_retain(pcVar2);
        plVar9 = *(long **)(pcVar4 + 8);
        _objc_retain(pcVar1);
        if (pcVar1 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = pcVar1;
          _objc_retainAutorelease(pcVar1);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar1);
        func_0x00010002b838(auStack_2a8,pcVar3);
        _objc_retain(pcVar2);
        if (pcVar2 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          _objc_retainAutorelease(pcVar2);
          pcVar3 = pcVar2;
          func_0x00010bdc3520(pcVar2);
        }
        _objc_release(pcVar2);
        func_0x00010002b838(auStack_290,pcVar3);
        acStack_2c8[0] = '\0';
        acStack_2c8[1] = '\0';
        acStack_2c8[2] = '\0';
        acStack_2c8[3] = '\0';
        acStack_2c8[4] = '\0';
        acStack_2c8[5] = '\0';
        acStack_2c8[6] = '\0';
        acStack_2c8[7] = '\0';
        acStack_2c8[8] = '\0';
        acStack_2c8[9] = '\0';
        acStack_2c8[10] = '\0';
        acStack_2c8[0xb] = '\0';
        acStack_2c8[0xc] = '\0';
        acStack_2c8[0xd] = '\0';
        acStack_2c8[0xe] = '\0';
        acStack_2c8[0xf] = '\0';
        acStack_2c8[0x10] = '\0';
        acStack_2c8[0x11] = '\0';
        acStack_2c8[0x12] = '\0';
        acStack_2c8[0x13] = '\0';
        acStack_2c8[0x14] = '\0';
        acStack_2c8[0x15] = '\0';
        acStack_2c8[0x16] = '\0';
        acStack_2c8[0x17] = '\0';
        func_0x00010007e1e8(acStack_2c8,auStack_2a8,&lStack_278,2);
        dVar13 = dVar12 * 1000.0;
        pcVar3 = "\x01";
        pcVar7 = acStack_2c8;
        (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110847dc8,pcVar7,(long)dVar13);
        pcStack_2b0 = acStack_2c8;
        func_0x00010007e5dc(&pcStack_2b0);
        lVar10 = 0;
        puVar11 = auStack_2a8;
        do {
          if ((&cStack_279)[lVar10] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_290 + lVar10));
          }
          lVar10 = lVar10 + -0x18;
        } while (lVar10 != -0x30);
        _objc_release(pcVar2);
        _objc_release(pcVar1);
      }
      pcVar4 = pcVar2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_278) {
        ___stack_chk_fail();
        _objc_release(pcVar2);
        if (cStack_291 < '\0') {
          __ZdlPv(auStack_2a8[0]);
        }
        _objc_release(pcVar2);
        _objc_release(pcVar1);
        _objc_release(pcVar2);
        _objc_release(pcVar1);
        pcVar1 = pcVar3;
        __Unwind_Resume();
        pcStack_2d8 = FUN_104cba660;
        lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar3 = pcVar7;
        pppuStack_2e0 = &pppuStack_230;
        _objc_retain(pcVar1);
        _objc_retain(pcVar7);
        if (pcVar4 != (char *)0x0) {
          _objc_retain(pcVar1);
          _objc_retain(pcVar7);
          plVar9 = *(long **)(pcVar4 + 8);
          _objc_retain(pcVar1);
          if (pcVar1 == (char *)0x0) {
            pcVar3 = "";
          }
          else {
            pcVar3 = pcVar1;
            _objc_retainAutorelease(pcVar1);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar1);
          func_0x00010002b838(auStack_358,pcVar3);
          _objc_retain(pcVar7);
          if (pcVar7 == (char *)0x0) {
            pcVar3 = "";
          }
          else {
            _objc_retainAutorelease(pcVar7);
            pcVar3 = pcVar7;
            func_0x00010bdc3520(pcVar7);
          }
          _objc_release(pcVar7);
          func_0x00010002b838(auStack_340,pcVar3);
          acStack_378[0] = '\0';
          acStack_378[1] = '\0';
          acStack_378[2] = '\0';
          acStack_378[3] = '\0';
          acStack_378[4] = '\0';
          acStack_378[5] = '\0';
          acStack_378[6] = '\0';
          acStack_378[7] = '\0';
          acStack_378[8] = '\0';
          acStack_378[9] = '\0';
          acStack_378[10] = '\0';
          acStack_378[0xb] = '\0';
          acStack_378[0xc] = '\0';
          acStack_378[0xd] = '\0';
          acStack_378[0xe] = '\0';
          acStack_378[0xf] = '\0';
          acStack_378[0x10] = '\0';
          acStack_378[0x11] = '\0';
          acStack_378[0x12] = '\0';
          acStack_378[0x13] = '\0';
          acStack_378[0x14] = '\0';
          acStack_378[0x15] = '\0';
          acStack_378[0x16] = '\0';
          acStack_378[0x17] = '\0';
          func_0x00010007e1e8(acStack_378,auStack_358,&lStack_328,2);
          pcVar3 = acStack_378;
          (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110847e18,pcVar3,(long)(dVar13 * 1000.0));
          pcStack_360 = acStack_378;
          func_0x00010007e5dc(&pcStack_360);
          lVar10 = 0;
          puVar11 = auStack_358;
          do {
            if ((&cStack_329)[lVar10] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_340 + lVar10));
            }
            lVar10 = lVar10 + -0x18;
          } while (lVar10 != -0x30);
          _objc_release(pcVar7);
          _objc_release(pcVar1);
        }
        pcVar2 = pcVar7;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_328) {
          ___stack_chk_fail();
          _objc_release(pcVar7);
          if (cStack_341 < '\0') {
            __ZdlPv(auStack_358[0]);
          }
          _objc_release(pcVar7);
          _objc_release(pcVar1);
          _objc_release(pcVar7);
          _objc_release(pcVar1);
          pcVar4 = pcVar2;
          __Unwind_Resume();
          ppcVar5 = &pcStack_3c0;
          pcStack_388 = FUN_104cba8d0;
          puStack_3b0 = puVar11;
          pcStack_3a8 = pcVar2;
          pcStack_3a0 = pcVar7;
          pcStack_398 = pcVar1;
          pppuStack_390 = &pppuStack_2e0;
          _objc_retain(pcVar3);
          puStack_3b8 = PTR_PTR_1126e3ac0;
          pcStack_3c0 = pcVar4;
          _objc_msgSendSuper2(&pcStack_3c0,PTR_s_init_1125d9248);
          if (ppcVar5 != (char **)0x0) {
            lVar10 = (long)_DAT_1127104b4;
            _objc_retain(pcVar3);
            uVar6 = *(undefined8 *)((long)ppcVar5 + lVar10);
            *(char **)((long)ppcVar5 + lVar10) = pcVar3;
            _objc_release(uVar6);
          }
          _objc_release(pcVar3);
          return (char *)ppcVar5;
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
    return pcVar1;
  }
  return pcVar3;
}



/* Entry: 104cb9eb8; end: 104cba02b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_104cb9eb8(double param_1,long param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  double dVar12;
  double dVar13;
  char *pcStack_340;
  undefined *puStack_338;
  undefined8 *puStack_330;
  char *pcStack_328;
  char *pcStack_320;
  char *pcStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  char acStack_2f8 [24];
  char *pcStack_2e0;
  undefined8 auStack_2d8 [2];
  char cStack_2c1;
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  undefined8 ***pppuStack_260;
  code *pcStack_258;
  char acStack_248 [24];
  char *pcStack_230;
  undefined8 auStack_228 [2];
  char cStack_211;
  undefined8 auStack_210 [2];
  char cStack_1f9;
  long lStack_1f8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char acStack_1a0 [24];
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_118 [24];
  char *pcStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar3 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar9 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110847cd8,acStack_80,param_4);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar3 = pcVar2;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar3 = pcVar2;
      param_5 = param_4;
    }
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_88 = FUN_104cba02c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar4 = pcVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar3);
  puVar11 = (undefined8 *)0x0;
  if (pcVar2 != (char *)0x0) {
    plVar9 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_f8,pcVar2);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar2 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_118[0] = '\0';
    acStack_118[1] = '\0';
    acStack_118[2] = '\0';
    acStack_118[3] = '\0';
    acStack_118[4] = '\0';
    acStack_118[5] = '\0';
    acStack_118[6] = '\0';
    acStack_118[7] = '\0';
    acStack_118[8] = '\0';
    acStack_118[9] = '\0';
    acStack_118[10] = '\0';
    acStack_118[0xb] = '\0';
    acStack_118[0xc] = '\0';
    acStack_118[0xd] = '\0';
    acStack_118[0xe] = '\0';
    acStack_118[0xf] = '\0';
    acStack_118[0x10] = '\0';
    acStack_118[0x11] = '\0';
    acStack_118[0x12] = '\0';
    acStack_118[0x13] = '\0';
    acStack_118[0x14] = '\0';
    acStack_118[0x15] = '\0';
    acStack_118[0x16] = '\0';
    acStack_118[0x17] = '\0';
    func_0x00010007e1e8(acStack_118,auStack_f8,&lStack_c8,2);
    pcVar7 = "";
    pcVar4 = acStack_118;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110847d28,pcVar4,param_5);
    pcStack_100 = acStack_118;
    func_0x00010007e5dc(&pcStack_100);
    lVar10 = 0;
    puVar11 = auStack_f8;
    do {
      if ((&cStack_c9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(pcVar3);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    _objc_release(pcVar3);
    if (cStack_e1 < '\0') {
      __ZdlPv(auStack_f8[0]);
    }
    _objc_release(pcVar3);
    _objc_release(pcVar1);
    __Unwind_Resume();
    pcVar8 = acStack_1a0;
    pcStack_128 = FUN_104cba25c;
    lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = pcVar7;
    pcVar1 = pcVar7;
    dVar12 = param_1;
    ppuStack_130 = &puStack_90;
    _objc_retain();
    if (pcVar2 != (char *)0x0) {
      _objc_retain(pcVar7);
      plVar9 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar7;
        _objc_retainAutorelease(pcVar7);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar7);
      puVar11 = auStack_180;
      func_0x00010002b838(auStack_180,pcVar1);
      acStack_1a0[0] = '\0';
      acStack_1a0[1] = '\0';
      acStack_1a0[2] = '\0';
      acStack_1a0[3] = '\0';
      acStack_1a0[4] = '\0';
      acStack_1a0[5] = '\0';
      acStack_1a0[6] = '\0';
      acStack_1a0[7] = '\0';
      acStack_1a0[8] = '\0';
      acStack_1a0[9] = '\0';
      acStack_1a0[10] = '\0';
      acStack_1a0[0xb] = '\0';
      acStack_1a0[0xc] = '\0';
      acStack_1a0[0xd] = '\0';
      acStack_1a0[0xe] = '\0';
      acStack_1a0[0xf] = '\0';
      acStack_1a0[0x10] = '\0';
      acStack_1a0[0x11] = '\0';
      acStack_1a0[0x12] = '\0';
      acStack_1a0[0x13] = '\0';
      acStack_1a0[0x14] = '\0';
      acStack_1a0[0x15] = '\0';
      acStack_1a0[0x16] = '\0';
      acStack_1a0[0x17] = '\0';
      func_0x00010007e1e8(acStack_1a0,auStack_180,&lStack_168,1);
      dVar12 = param_1 * 1000.0;
      pcVar1 = "\x01";
      (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110847d78,acStack_1a0,(long)dVar12);
      puStack_188 = acStack_1a0;
      func_0x00010007e5dc(&puStack_188);
      pcVar4 = pcVar8;
      if (cStack_169 < '\0') {
        __ZdlPv(auStack_180[0]);
        pcVar4 = pcVar8;
      }
      pcVar3 = pcVar7;
      _objc_release();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_168) {
      ___stack_chk_fail();
      _objc_release(pcVar7);
      _objc_release(pcVar7);
      _objc_release(pcVar7);
      pcVar7 = pcVar1;
      __Unwind_Resume();
      pcStack_1a8 = FUN_104cba3f0;
      lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar1 = pcVar7;
      pcVar2 = pcVar4;
      dVar13 = dVar12;
      pppuStack_1b0 = &ppuStack_130;
      _objc_retain(pcVar7);
      _objc_retain(pcVar4);
      if (pcVar3 != (char *)0x0) {
        _objc_retain(pcVar7);
        _objc_retain(pcVar4);
        plVar9 = *(long **)(pcVar3 + 8);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar7;
          _objc_retainAutorelease(pcVar7);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar7);
        func_0x00010002b838(auStack_228,pcVar1);
        _objc_retain(pcVar4);
        if (pcVar4 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar4);
          pcVar1 = pcVar4;
          func_0x00010bdc3520(pcVar4);
        }
        _objc_release(pcVar4);
        func_0x00010002b838(auStack_210,pcVar1);
        acStack_248[0] = '\0';
        acStack_248[1] = '\0';
        acStack_248[2] = '\0';
        acStack_248[3] = '\0';
        acStack_248[4] = '\0';
        acStack_248[5] = '\0';
        acStack_248[6] = '\0';
        acStack_248[7] = '\0';
        acStack_248[8] = '\0';
        acStack_248[9] = '\0';
        acStack_248[10] = '\0';
        acStack_248[0xb] = '\0';
        acStack_248[0xc] = '\0';
        acStack_248[0xd] = '\0';
        acStack_248[0xe] = '\0';
        acStack_248[0xf] = '\0';
        acStack_248[0x10] = '\0';
        acStack_248[0x11] = '\0';
        acStack_248[0x12] = '\0';
        acStack_248[0x13] = '\0';
        acStack_248[0x14] = '\0';
        acStack_248[0x15] = '\0';
        acStack_248[0x16] = '\0';
        acStack_248[0x17] = '\0';
        func_0x00010007e1e8(acStack_248,auStack_228,&lStack_1f8,2);
        dVar13 = dVar12 * 1000.0;
        pcVar1 = "\x01";
        pcVar2 = acStack_248;
        (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110847dc8,pcVar2,(long)dVar13);
        pcStack_230 = acStack_248;
        func_0x00010007e5dc(&pcStack_230);
        lVar10 = 0;
        puVar11 = auStack_228;
        do {
          if ((&cStack_1f9)[lVar10] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_210 + lVar10));
          }
          lVar10 = lVar10 + -0x18;
        } while (lVar10 != -0x30);
        _objc_release(pcVar4);
        _objc_release(pcVar7);
      }
      pcVar3 = pcVar4;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1f8) {
        ___stack_chk_fail();
        _objc_release(pcVar4);
        if (cStack_211 < '\0') {
          __ZdlPv(auStack_228[0]);
        }
        _objc_release(pcVar4);
        _objc_release(pcVar7);
        _objc_release(pcVar4);
        _objc_release(pcVar7);
        pcVar7 = pcVar1;
        __Unwind_Resume();
        pcStack_258 = FUN_104cba660;
        lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar1 = pcVar2;
        pppuStack_260 = &pppuStack_1b0;
        _objc_retain(pcVar7);
        _objc_retain(pcVar2);
        if (pcVar3 != (char *)0x0) {
          _objc_retain(pcVar7);
          _objc_retain(pcVar2);
          plVar9 = *(long **)(pcVar3 + 8);
          _objc_retain(pcVar7);
          if (pcVar7 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            pcVar1 = pcVar7;
            _objc_retainAutorelease(pcVar7);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar7);
          func_0x00010002b838(auStack_2d8,pcVar1);
          _objc_retain(pcVar2);
          if (pcVar2 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            _objc_retainAutorelease(pcVar2);
            pcVar1 = pcVar2;
            func_0x00010bdc3520(pcVar2);
          }
          _objc_release(pcVar2);
          func_0x00010002b838(auStack_2c0,pcVar1);
          acStack_2f8[0] = '\0';
          acStack_2f8[1] = '\0';
          acStack_2f8[2] = '\0';
          acStack_2f8[3] = '\0';
          acStack_2f8[4] = '\0';
          acStack_2f8[5] = '\0';
          acStack_2f8[6] = '\0';
          acStack_2f8[7] = '\0';
          acStack_2f8[8] = '\0';
          acStack_2f8[9] = '\0';
          acStack_2f8[10] = '\0';
          acStack_2f8[0xb] = '\0';
          acStack_2f8[0xc] = '\0';
          acStack_2f8[0xd] = '\0';
          acStack_2f8[0xe] = '\0';
          acStack_2f8[0xf] = '\0';
          acStack_2f8[0x10] = '\0';
          acStack_2f8[0x11] = '\0';
          acStack_2f8[0x12] = '\0';
          acStack_2f8[0x13] = '\0';
          acStack_2f8[0x14] = '\0';
          acStack_2f8[0x15] = '\0';
          acStack_2f8[0x16] = '\0';
          acStack_2f8[0x17] = '\0';
          func_0x00010007e1e8(acStack_2f8,auStack_2d8,&lStack_2a8,2);
          pcVar1 = acStack_2f8;
          (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110847e18,pcVar1,(long)(dVar13 * 1000.0));
          pcStack_2e0 = acStack_2f8;
          func_0x00010007e5dc(&pcStack_2e0);
          lVar10 = 0;
          puVar11 = auStack_2d8;
          do {
            if ((&cStack_2a9)[lVar10] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_2c0 + lVar10));
            }
            lVar10 = lVar10 + -0x18;
          } while (lVar10 != -0x30);
          _objc_release(pcVar2);
          _objc_release(pcVar7);
        }
        pcVar3 = pcVar2;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2a8) {
          ___stack_chk_fail();
          _objc_release(pcVar2);
          if (cStack_2c1 < '\0') {
            __ZdlPv(auStack_2d8[0]);
          }
          _objc_release(pcVar2);
          _objc_release(pcVar7);
          _objc_release(pcVar2);
          _objc_release(pcVar7);
          pcVar4 = pcVar3;
          __Unwind_Resume();
          ppcVar5 = &pcStack_340;
          pcStack_308 = FUN_104cba8d0;
          puStack_330 = puVar11;
          pcStack_328 = pcVar3;
          pcStack_320 = pcVar2;
          pcStack_318 = pcVar7;
          pppuStack_310 = &pppuStack_260;
          _objc_retain(pcVar1);
          puStack_338 = PTR_PTR_1126e3ac0;
          pcStack_340 = pcVar4;
          _objc_msgSendSuper2(&pcStack_340,PTR_s_init_1125d9248);
          if (ppcVar5 != (char **)0x0) {
            lVar10 = (long)_DAT_1127104b4;
            _objc_retain(pcVar1);
            uVar6 = *(undefined8 *)((long)ppcVar5 + lVar10);
            *(char **)((long)ppcVar5 + lVar10) = pcVar1;
            _objc_release(uVar6);
          }
          _objc_release(pcVar1);
          return (char *)ppcVar5;
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar7);
    return pcVar7;
  }
  return pcVar2;
}



/* Entry: 104cba02c; end: 104cba25b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_104cba02c(double param_1,long param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  double dVar12;
  double dVar13;
  char *pcStack_2c0;
  undefined *puStack_2b8;
  undefined8 *puStack_2b0;
  char *pcStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  char acStack_278 [24];
  char *pcStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined1 ***pppuStack_1e0;
  code *pcStack_1d8;
  char acStack_1c8 [24];
  char *pcStack_1b0;
  undefined8 auStack_1a8 [2];
  char cStack_191;
  undefined8 auStack_190 [2];
  char cStack_179;
  long lStack_178;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_120 [24];
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
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
  pcVar4 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar11 = (undefined8 *)0x0;
  if (param_2 != 0) {
    plVar10 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
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
    pcVar1 = "";
    pcVar4 = acStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110847d28,pcVar4,param_5);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar9 = 0;
    puVar11 = auStack_78;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_4);
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  pcVar8 = acStack_120;
  pcStack_a8 = FUN_104cba25c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar1;
  pcVar7 = pcVar1;
  dVar12 = param_1;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain();
  if (pcVar2 != (char *)0x0) {
    _objc_retain(pcVar1);
    plVar10 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    puVar11 = auStack_100;
    func_0x00010002b838(auStack_100,pcVar4);
    acStack_120[0] = '\0';
    acStack_120[1] = '\0';
    acStack_120[2] = '\0';
    acStack_120[3] = '\0';
    acStack_120[4] = '\0';
    acStack_120[5] = '\0';
    acStack_120[6] = '\0';
    acStack_120[7] = '\0';
    acStack_120[8] = '\0';
    acStack_120[9] = '\0';
    acStack_120[10] = '\0';
    acStack_120[0xb] = '\0';
    acStack_120[0xc] = '\0';
    acStack_120[0xd] = '\0';
    acStack_120[0xe] = '\0';
    acStack_120[0xf] = '\0';
    acStack_120[0x10] = '\0';
    acStack_120[0x11] = '\0';
    acStack_120[0x12] = '\0';
    acStack_120[0x13] = '\0';
    acStack_120[0x14] = '\0';
    acStack_120[0x15] = '\0';
    acStack_120[0x16] = '\0';
    acStack_120[0x17] = '\0';
    func_0x00010007e1e8(acStack_120,auStack_100,&lStack_e8,1);
    dVar12 = param_1 * 1000.0;
    pcVar7 = "\x01";
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110847d78,acStack_120,(long)dVar12);
    puStack_108 = acStack_120;
    func_0x00010007e5dc(&puStack_108);
    pcVar4 = pcVar8;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      pcVar4 = pcVar8;
    }
    pcVar3 = pcVar1;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
    ___stack_chk_fail();
    _objc_release(pcVar1);
    _objc_release(pcVar1);
    _objc_release(pcVar1);
    pcVar1 = pcVar7;
    __Unwind_Resume();
    pcStack_128 = FUN_104cba3f0;
    lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = pcVar1;
    pcVar7 = pcVar4;
    dVar13 = dVar12;
    ppuStack_130 = &puStack_b0;
    _objc_retain(pcVar1);
    _objc_retain(pcVar4);
    if (pcVar3 != (char *)0x0) {
      _objc_retain(pcVar1);
      _objc_retain(pcVar4);
      plVar10 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      func_0x00010002b838(auStack_1a8,pcVar2);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar4);
        pcVar2 = pcVar4;
        func_0x00010bdc3520(pcVar4);
      }
      _objc_release(pcVar4);
      func_0x00010002b838(auStack_190,pcVar2);
      acStack_1c8[0] = '\0';
      acStack_1c8[1] = '\0';
      acStack_1c8[2] = '\0';
      acStack_1c8[3] = '\0';
      acStack_1c8[4] = '\0';
      acStack_1c8[5] = '\0';
      acStack_1c8[6] = '\0';
      acStack_1c8[7] = '\0';
      acStack_1c8[8] = '\0';
      acStack_1c8[9] = '\0';
      acStack_1c8[10] = '\0';
      acStack_1c8[0xb] = '\0';
      acStack_1c8[0xc] = '\0';
      acStack_1c8[0xd] = '\0';
      acStack_1c8[0xe] = '\0';
      acStack_1c8[0xf] = '\0';
      acStack_1c8[0x10] = '\0';
      acStack_1c8[0x11] = '\0';
      acStack_1c8[0x12] = '\0';
      acStack_1c8[0x13] = '\0';
      acStack_1c8[0x14] = '\0';
      acStack_1c8[0x15] = '\0';
      acStack_1c8[0x16] = '\0';
      acStack_1c8[0x17] = '\0';
      func_0x00010007e1e8(acStack_1c8,auStack_1a8,&lStack_178,2);
      dVar13 = dVar12 * 1000.0;
      pcVar2 = "\x01";
      pcVar7 = acStack_1c8;
      (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110847dc8,pcVar7,(long)dVar13);
      pcStack_1b0 = acStack_1c8;
      func_0x00010007e5dc(&pcStack_1b0);
      lVar9 = 0;
      puVar11 = auStack_1a8;
      do {
        if ((&cStack_179)[lVar9] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_190 + lVar9));
        }
        lVar9 = lVar9 + -0x18;
      } while (lVar9 != -0x30);
      _objc_release(pcVar4);
      _objc_release(pcVar1);
    }
    pcVar3 = pcVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
      ___stack_chk_fail();
      _objc_release(pcVar4);
      if (cStack_191 < '\0') {
        __ZdlPv(auStack_1a8[0]);
      }
      _objc_release(pcVar4);
      _objc_release(pcVar1);
      _objc_release(pcVar4);
      _objc_release(pcVar1);
      pcVar1 = pcVar2;
      __Unwind_Resume();
      pcStack_1d8 = FUN_104cba660;
      lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar4 = pcVar7;
      pppuStack_1e0 = &ppuStack_130;
      _objc_retain(pcVar1);
      _objc_retain(pcVar7);
      if (pcVar3 != (char *)0x0) {
        _objc_retain(pcVar1);
        _objc_retain(pcVar7);
        plVar10 = *(long **)(pcVar3 + 8);
        _objc_retain(pcVar1);
        if (pcVar1 == (char *)0x0) {
          pcVar4 = "";
        }
        else {
          pcVar4 = pcVar1;
          _objc_retainAutorelease(pcVar1);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar1);
        func_0x00010002b838(auStack_258,pcVar4);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar4 = "";
        }
        else {
          _objc_retainAutorelease(pcVar7);
          pcVar4 = pcVar7;
          func_0x00010bdc3520(pcVar7);
        }
        _objc_release(pcVar7);
        func_0x00010002b838(auStack_240,pcVar4);
        acStack_278[0] = '\0';
        acStack_278[1] = '\0';
        acStack_278[2] = '\0';
        acStack_278[3] = '\0';
        acStack_278[4] = '\0';
        acStack_278[5] = '\0';
        acStack_278[6] = '\0';
        acStack_278[7] = '\0';
        acStack_278[8] = '\0';
        acStack_278[9] = '\0';
        acStack_278[10] = '\0';
        acStack_278[0xb] = '\0';
        acStack_278[0xc] = '\0';
        acStack_278[0xd] = '\0';
        acStack_278[0xe] = '\0';
        acStack_278[0xf] = '\0';
        acStack_278[0x10] = '\0';
        acStack_278[0x11] = '\0';
        acStack_278[0x12] = '\0';
        acStack_278[0x13] = '\0';
        acStack_278[0x14] = '\0';
        acStack_278[0x15] = '\0';
        acStack_278[0x16] = '\0';
        acStack_278[0x17] = '\0';
        func_0x00010007e1e8(acStack_278,auStack_258,&lStack_228,2);
        pcVar4 = acStack_278;
        (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110847e18,pcVar4,(long)(dVar13 * 1000.0));
        pcStack_260 = acStack_278;
        func_0x00010007e5dc(&pcStack_260);
        lVar9 = 0;
        puVar11 = auStack_258;
        do {
          if ((&cStack_229)[lVar9] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar9));
          }
          lVar9 = lVar9 + -0x18;
        } while (lVar9 != -0x30);
        _objc_release(pcVar7);
        _objc_release(pcVar1);
      }
      pcVar2 = pcVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
        ___stack_chk_fail();
        _objc_release(pcVar7);
        if (cStack_241 < '\0') {
          __ZdlPv(auStack_258[0]);
        }
        _objc_release(pcVar7);
        _objc_release(pcVar1);
        _objc_release(pcVar7);
        _objc_release(pcVar1);
        pcVar3 = pcVar2;
        __Unwind_Resume();
        ppcVar5 = &pcStack_2c0;
        pcStack_288 = FUN_104cba8d0;
        puStack_2b0 = puVar11;
        pcStack_2a8 = pcVar2;
        pcStack_2a0 = pcVar7;
        pcStack_298 = pcVar1;
        pppuStack_290 = &pppuStack_1e0;
        _objc_retain(pcVar4);
        puStack_2b8 = PTR_PTR_1126e3ac0;
        pcStack_2c0 = pcVar3;
        _objc_msgSendSuper2(&pcStack_2c0,PTR_s_init_1125d9248);
        if (ppcVar5 != (char **)0x0) {
          lVar9 = (long)_DAT_1127104b4;
          _objc_retain(pcVar4);
          uVar6 = *(undefined8 *)((long)ppcVar5 + lVar9);
          *(char **)((long)ppcVar5 + lVar9) = pcVar4;
          _objc_release(uVar6);
        }
        _objc_release(pcVar4);
        return (char *)ppcVar5;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
  return pcVar1;
}



/* Entry: 104cba25c; end: 104cba3ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_104cba25c(double param_1,long param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined8 uVar5;
  char *pcVar6;
  long *plVar7;
  long lVar8;
  undefined8 *unaff_x22;
  double dVar9;
  double dVar10;
  char *pcStack_220;
  undefined *puStack_218;
  undefined8 *puStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1d8 [24];
  char *pcStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  char acStack_128 [24];
  char *pcStack_110;
  undefined8 auStack_108 [2];
  char cStack_f1;
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar6 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar2 = param_3;
  dVar9 = param_1;
  _objc_retain();
  if (param_2 != 0) {
    _objc_retain(param_3);
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x22 = auStack_60;
    func_0x00010002b838(auStack_60,pcVar2);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    dVar9 = param_1 * 1000.0;
    pcVar2 = "\x01";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110847d78,acStack_80,(long)dVar9);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    param_4 = pcVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      param_4 = pcVar6;
    }
    pcVar1 = param_3;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_3);
    _objc_release(param_3);
    _objc_release(param_3);
    param_3 = pcVar2;
    __Unwind_Resume();
    pcStack_88 = FUN_104cba3f0;
    lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = param_3;
    pcVar6 = param_4;
    dVar10 = dVar9;
    puStack_90 = &stack0xfffffffffffffff0;
    _objc_retain(param_3);
    _objc_retain(param_4);
    if (pcVar1 != (char *)0x0) {
      _objc_retain(param_3);
      _objc_retain(param_4);
      plVar7 = *(long **)(pcVar1 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_108,pcVar2);
      _objc_retain(param_4);
      if (param_4 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(param_4);
        pcVar2 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_f0,pcVar2);
      acStack_128[0] = '\0';
      acStack_128[1] = '\0';
      acStack_128[2] = '\0';
      acStack_128[3] = '\0';
      acStack_128[4] = '\0';
      acStack_128[5] = '\0';
      acStack_128[6] = '\0';
      acStack_128[7] = '\0';
      acStack_128[8] = '\0';
      acStack_128[9] = '\0';
      acStack_128[10] = '\0';
      acStack_128[0xb] = '\0';
      acStack_128[0xc] = '\0';
      acStack_128[0xd] = '\0';
      acStack_128[0xe] = '\0';
      acStack_128[0xf] = '\0';
      acStack_128[0x10] = '\0';
      acStack_128[0x11] = '\0';
      acStack_128[0x12] = '\0';
      acStack_128[0x13] = '\0';
      acStack_128[0x14] = '\0';
      acStack_128[0x15] = '\0';
      acStack_128[0x16] = '\0';
      acStack_128[0x17] = '\0';
      func_0x00010007e1e8(acStack_128,auStack_108,&lStack_d8,2);
      dVar10 = dVar9 * 1000.0;
      pcVar2 = "\x01";
      pcVar6 = acStack_128;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110847dc8,pcVar6,(long)dVar10);
      pcStack_110 = acStack_128;
      func_0x00010007e5dc(&pcStack_110);
      lVar8 = 0;
      unaff_x22 = auStack_108;
      do {
        if ((&cStack_d9)[lVar8] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar8));
        }
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != -0x30);
      _objc_release(param_4);
      _objc_release(param_3);
    }
    pcVar1 = param_4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
      ___stack_chk_fail();
      _objc_release(param_4);
      if (cStack_f1 < '\0') {
        __ZdlPv(auStack_108[0]);
      }
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_release(param_4);
      _objc_release(param_3);
      param_3 = pcVar2;
      __Unwind_Resume();
      pcStack_138 = FUN_104cba660;
      lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar2 = pcVar6;
      ppuStack_140 = &puStack_90;
      _objc_retain(param_3);
      _objc_retain(pcVar6);
      if (pcVar1 != (char *)0x0) {
        _objc_retain(param_3);
        _objc_retain(pcVar6);
        plVar7 = *(long **)(pcVar1 + 8);
        _objc_retain(param_3);
        if (param_3 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = param_3;
          _objc_retainAutorelease(param_3);
          func_0x00010bdc3520();
        }
        _objc_release(param_3);
        func_0x00010002b838(auStack_1b8,pcVar2);
        _objc_retain(pcVar6);
        if (pcVar6 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          _objc_retainAutorelease(pcVar6);
          pcVar2 = pcVar6;
          func_0x00010bdc3520(pcVar6);
        }
        _objc_release(pcVar6);
        func_0x00010002b838(auStack_1a0,pcVar2);
        acStack_1d8[0] = '\0';
        acStack_1d8[1] = '\0';
        acStack_1d8[2] = '\0';
        acStack_1d8[3] = '\0';
        acStack_1d8[4] = '\0';
        acStack_1d8[5] = '\0';
        acStack_1d8[6] = '\0';
        acStack_1d8[7] = '\0';
        acStack_1d8[8] = '\0';
        acStack_1d8[9] = '\0';
        acStack_1d8[10] = '\0';
        acStack_1d8[0xb] = '\0';
        acStack_1d8[0xc] = '\0';
        acStack_1d8[0xd] = '\0';
        acStack_1d8[0xe] = '\0';
        acStack_1d8[0xf] = '\0';
        acStack_1d8[0x10] = '\0';
        acStack_1d8[0x11] = '\0';
        acStack_1d8[0x12] = '\0';
        acStack_1d8[0x13] = '\0';
        acStack_1d8[0x14] = '\0';
        acStack_1d8[0x15] = '\0';
        acStack_1d8[0x16] = '\0';
        acStack_1d8[0x17] = '\0';
        func_0x00010007e1e8(acStack_1d8,auStack_1b8,&lStack_188,2);
        pcVar2 = acStack_1d8;
        (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110847e18,pcVar2,(long)(dVar10 * 1000.0));
        pcStack_1c0 = acStack_1d8;
        func_0x00010007e5dc(&pcStack_1c0);
        lVar8 = 0;
        unaff_x22 = auStack_1b8;
        do {
          if ((&cStack_189)[lVar8] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar8));
          }
          lVar8 = lVar8 + -0x18;
        } while (lVar8 != -0x30);
        _objc_release(pcVar6);
        _objc_release(param_3);
      }
      pcVar1 = pcVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
        ___stack_chk_fail();
        _objc_release(pcVar6);
        if (cStack_1a1 < '\0') {
          __ZdlPv(auStack_1b8[0]);
        }
        _objc_release(pcVar6);
        _objc_release(param_3);
        _objc_release(pcVar6);
        _objc_release(param_3);
        pcVar3 = pcVar1;
        __Unwind_Resume();
        ppcVar4 = &pcStack_220;
        pcStack_1e8 = FUN_104cba8d0;
        puStack_210 = unaff_x22;
        pcStack_208 = pcVar1;
        pcStack_200 = pcVar6;
        pcStack_1f8 = param_3;
        pppuStack_1f0 = &ppuStack_140;
        _objc_retain(pcVar2);
        puStack_218 = PTR_PTR_1126e3ac0;
        pcStack_220 = pcVar3;
        _objc_msgSendSuper2(&pcStack_220,PTR_s_init_1125d9248);
        if (ppcVar4 != (char **)0x0) {
          lVar8 = (long)_DAT_1127104b4;
          _objc_retain(pcVar2);
          uVar5 = *(undefined8 *)((long)ppcVar4 + lVar8);
          *(char **)((long)ppcVar4 + lVar8) = pcVar2;
          _objc_release(uVar5);
        }
        _objc_release(pcVar2);
        return (char *)ppcVar4;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return param_3;
}



/* Entry: 104cba3f0; end: 104cba65f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_104cba3f0(double param_1,long param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined8 uVar5;
  char *pcVar6;
  long *plVar7;
  long lVar8;
  undefined8 *unaff_x22;
  double dVar9;
  char *pcStack_1a0;
  undefined *puStack_198;
  undefined8 *puStack_190;
  char *pcStack_188;
  char *pcStack_180;
  char *pcStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_158 [24];
  char *pcStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  char acStack_a8 [24];
  char *pcStack_90;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar6 = param_4;
  dVar9 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_4);
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_a8[0] = '\0';
    acStack_a8[1] = '\0';
    acStack_a8[2] = '\0';
    acStack_a8[3] = '\0';
    acStack_a8[4] = '\0';
    acStack_a8[5] = '\0';
    acStack_a8[6] = '\0';
    acStack_a8[7] = '\0';
    acStack_a8[8] = '\0';
    acStack_a8[9] = '\0';
    acStack_a8[10] = '\0';
    acStack_a8[0xb] = '\0';
    acStack_a8[0xc] = '\0';
    acStack_a8[0xd] = '\0';
    acStack_a8[0xe] = '\0';
    acStack_a8[0xf] = '\0';
    acStack_a8[0x10] = '\0';
    acStack_a8[0x11] = '\0';
    acStack_a8[0x12] = '\0';
    acStack_a8[0x13] = '\0';
    acStack_a8[0x14] = '\0';
    acStack_a8[0x15] = '\0';
    acStack_a8[0x16] = '\0';
    acStack_a8[0x17] = '\0';
    func_0x00010007e1e8(acStack_a8,auStack_88,&lStack_58,2);
    dVar9 = param_1 * 1000.0;
    pcVar1 = "\x01";
    pcVar6 = acStack_a8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110847dc8,pcVar6,(long)dVar9);
    pcStack_90 = acStack_a8;
    func_0x00010007e5dc(&pcStack_90);
    lVar8 = 0;
    unaff_x22 = auStack_88;
    do {
      if ((&cStack_59)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  pcVar2 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    if (cStack_71 < '\0') {
      __ZdlPv(auStack_88[0]);
    }
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_release(param_3);
    param_3 = pcVar1;
    __Unwind_Resume();
    pcStack_b8 = FUN_104cba660;
    lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar1 = pcVar6;
    puStack_c0 = &stack0xfffffffffffffff0;
    _objc_retain(param_3);
    _objc_retain(pcVar6);
    if (pcVar2 != (char *)0x0) {
      _objc_retain(param_3);
      _objc_retain(pcVar6);
      plVar7 = *(long **)(pcVar2 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_138,pcVar1);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar1 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_120,pcVar1);
      acStack_158[0] = '\0';
      acStack_158[1] = '\0';
      acStack_158[2] = '\0';
      acStack_158[3] = '\0';
      acStack_158[4] = '\0';
      acStack_158[5] = '\0';
      acStack_158[6] = '\0';
      acStack_158[7] = '\0';
      acStack_158[8] = '\0';
      acStack_158[9] = '\0';
      acStack_158[10] = '\0';
      acStack_158[0xb] = '\0';
      acStack_158[0xc] = '\0';
      acStack_158[0xd] = '\0';
      acStack_158[0xe] = '\0';
      acStack_158[0xf] = '\0';
      acStack_158[0x10] = '\0';
      acStack_158[0x11] = '\0';
      acStack_158[0x12] = '\0';
      acStack_158[0x13] = '\0';
      acStack_158[0x14] = '\0';
      acStack_158[0x15] = '\0';
      acStack_158[0x16] = '\0';
      acStack_158[0x17] = '\0';
      func_0x00010007e1e8(acStack_158,auStack_138,&lStack_108,2);
      pcVar1 = acStack_158;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110847e18,pcVar1,(long)(dVar9 * 1000.0));
      pcStack_140 = acStack_158;
      func_0x00010007e5dc(&pcStack_140);
      lVar8 = 0;
      unaff_x22 = auStack_138;
      do {
        if ((&cStack_109)[lVar8] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar8));
        }
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != -0x30);
      _objc_release(pcVar6);
      _objc_release(param_3);
    }
    pcVar2 = pcVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
      ___stack_chk_fail();
      _objc_release(pcVar6);
      if (cStack_121 < '\0') {
        __ZdlPv(auStack_138[0]);
      }
      _objc_release(pcVar6);
      _objc_release(param_3);
      _objc_release(pcVar6);
      _objc_release(param_3);
      pcVar3 = pcVar2;
      __Unwind_Resume();
      ppcVar4 = &pcStack_1a0;
      pcStack_168 = FUN_104cba8d0;
      puStack_190 = unaff_x22;
      pcStack_188 = pcVar2;
      pcStack_180 = pcVar6;
      pcStack_178 = param_3;
      ppuStack_170 = &puStack_c0;
      _objc_retain(pcVar1);
      puStack_198 = PTR_PTR_1126e3ac0;
      pcStack_1a0 = pcVar3;
      _objc_msgSendSuper2(&pcStack_1a0,PTR_s_init_1125d9248);
      if (ppcVar4 != (char **)0x0) {
        lVar8 = (long)_DAT_1127104b4;
        _objc_retain(pcVar1);
        uVar5 = *(undefined8 *)((long)ppcVar4 + lVar8);
        *(char **)((long)ppcVar4 + lVar8) = pcVar1;
        _objc_release(uVar5);
      }
      _objc_release(pcVar1);
      return (char *)ppcVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return param_3;
}



/* Entry: 104cba660; end: 104cba8cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_104cba660(double param_1,long param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *unaff_x22;
  char *pcStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  char acStack_a8 [24];
  char *pcStack_90;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_4);
    plVar6 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_a8[0] = '\0';
    acStack_a8[1] = '\0';
    acStack_a8[2] = '\0';
    acStack_a8[3] = '\0';
    acStack_a8[4] = '\0';
    acStack_a8[5] = '\0';
    acStack_a8[6] = '\0';
    acStack_a8[7] = '\0';
    acStack_a8[8] = '\0';
    acStack_a8[9] = '\0';
    acStack_a8[10] = '\0';
    acStack_a8[0xb] = '\0';
    acStack_a8[0xc] = '\0';
    acStack_a8[0xd] = '\0';
    acStack_a8[0xe] = '\0';
    acStack_a8[0xf] = '\0';
    acStack_a8[0x10] = '\0';
    acStack_a8[0x11] = '\0';
    acStack_a8[0x12] = '\0';
    acStack_a8[0x13] = '\0';
    acStack_a8[0x14] = '\0';
    acStack_a8[0x15] = '\0';
    acStack_a8[0x16] = '\0';
    acStack_a8[0x17] = '\0';
    func_0x00010007e1e8(acStack_a8,auStack_88,&lStack_58,2);
    pcVar1 = acStack_a8;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110847e18,pcVar1,(long)(param_1 * 1000.0));
    pcStack_90 = acStack_a8;
    func_0x00010007e5dc(&pcStack_90);
    lVar7 = 0;
    unaff_x22 = auStack_88;
    do {
      if ((&cStack_59)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  pcVar2 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return param_3;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  ppcVar4 = &pcStack_f0;
  pcStack_b8 = FUN_104cba8d0;
  puStack_e0 = unaff_x22;
  pcStack_d8 = pcVar2;
  pcStack_d0 = param_4;
  pcStack_c8 = param_3;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  puStack_e8 = PTR_PTR_1126e3ac0;
  pcStack_f0 = pcVar3;
  _objc_msgSendSuper2(&pcStack_f0,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    lVar7 = (long)_DAT_1127104b4;
    _objc_retain(pcVar1);
    uVar5 = *(undefined8 *)((long)ppcVar4 + lVar7);
    *(char **)((long)ppcVar4 + lVar7) = pcVar1;
    _objc_release(uVar5);
  }
  _objc_release(pcVar1);
  return (char *)ppcVar4;
}



/* Entry: 104cba8d0; end: 104cba953; -[SCDataUnavailableViewController initWithCurrentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104cba8d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e3ac0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127104b4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104cba954; end: 104cba95b; -[SCDataUnavailableViewController pageViewName] */

undefined8 FUN_104cba954(void)

{
  return 0x48;
}



/* Entry: 104cba95c; end: 104cba9bb; -[SCDataUnavailableViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cba95c(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3ac0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127104b4);
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar1);
  return;
}



/* Entry: 104cba9bc; end: 104cba9cf; -[SCDataUnavailableViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cba9bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127104b4,0);
  return;
}



/* Entry: 104cba9d0; end: 104cbaca7; -[SCDataUnavailableEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cba9d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126aefa8;
  _objc_alloc(PTR_PTR_1126aefa8);
  lVar10 = (long)_DAT_1127104b8;
  lVar2 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf07720();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_1127104bc;
  lVar8 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar8);
  lVar4 = lVar8;
  func_0x00010c0dbd20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3940(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126aefb0;
  _objc_alloc();
  lVar10 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar10);
  lVar2 = lVar10;
  func_0x00010bf648c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008a80(puVar5,param_2,puVar1,lVar2);
  lVar8 = (long)_DAT_1127104c0;
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar5;
  _objc_release(uVar7);
  _objc_release(lVar2);
  _objc_release(lVar10);
  func_0x00010bf17a60(*(undefined8 *)(param_1 + lVar8));
  puVar5 = PTR_PTR_1126aefb8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_1127104c4;
  _objc_loadWeakRetained(lVar2);
  lVar8 = lVar2;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c007120(puVar5,param_2,lVar8);
  lVar10 = (long)_DAT_1127104c8;
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar5;
  _objc_release(uVar7);
  _objc_release(lVar8);
  _objc_release(lVar2);
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0(puVar5);
  func_0x00010c222380(*(undefined8 *)(param_1 + lVar10),param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar6);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xa1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c29bf00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar7);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c29bf00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_1127104cc;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c14c700(puVar5,param_2,uVar7,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(uVar7);
  puVar5 = PTR_PTR_1126aefc0;
  _objc_alloc(PTR_PTR_1126aefc0);
  func_0x00010c0402e0();
  param_1 = param_1 + lVar9;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee700();
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cbaca8; end: 104cbad17; -[SCDataUnavailableEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbaca8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127104cc);
  _objc_destroyWeak(param_1 + _DAT_1127104b8);
  _objc_destroyWeak(param_1 + _DAT_1127104c4);
  _objc_destroyWeak(param_1 + _DAT_1127104bc);
  _objc_storeStrong(param_1 + _DAT_1127104c8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127104c0,0);
  return;
}



/* Entry: 104cbad18; end: 104cbadfb; -[SCProtectedDataObserver initWithApplicationDataChecker:notificationCenter:] */

undefined1 *
FUN_104cbad18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e3ac8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c06c560();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    if ((*(byte *)((long)puVar1 + 8) & 1) == 0) {
      func_0x00010befa240(*(undefined8 *)((long)puVar1 + 0x10));
    }
    puVar3 = PTR_PTR_1126aefc8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104cbadfc; end: 104cbae03; -[SCProtectedDataObserver isApplicationDataAvailable] */

undefined1 FUN_104cbadfc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104cbae04; end: 104cbae0b; -[SCProtectedDataObserver addListener:] */

void FUN_104cbae04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 104cbae0c; end: 104cbae13; -[SCProtectedDataObserver removeListener:] */

void FUN_104cbae0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 104cbae14; end: 104cbae23; -[SCProtectedDataObserver _protectedDataIsAvailable] */

void FUN_104cbae14(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bf07750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_applicationDataHasBecomeAvailabl_11259f778);
  return;
}



/* Entry: 104cbae24; end: 104cbae53; -[SCProtectedDataObserver .cxx_destruct] */

void FUN_104cbae24(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104cbae54; end: 104cbaeef; -[SCDataUnavailableWorkflow initWithDataObserver:delegate:] */

undefined1 *
FUN_104cbae54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e3ad0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104cbaef0; end: 104cbaf3f; -[SCDataUnavailableWorkflow begin] */

void FUN_104cbaef0(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c06c560();
  if (iVar1 != 0) {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf648e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008,param_1);
  return;
}



/* Entry: 104cbaf40; end: 104cbaf7b; -[SCDataUnavailableWorkflow applicationDataHasBecomeAvailable] */

void FUN_104cbaf40(long param_1,undefined8 param_2)

{
  func_0x00010c12cf80(*(undefined8 *)(param_1 + 8),param_2,param_1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf648e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cbaf7c; end: 104cbafa7; -[SCDataUnavailableWorkflow .cxx_destruct] */

void FUN_104cbaf7c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104cbafa8; end: 104cbb253; -[SCApplicationDataListenerAnnouncer addListener:] */

undefined8 FUN_104cbafa8(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar3 = (long *)0x30;
  __Znwm();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110847f58;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_104cbb254(plVar10,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_104cbb394(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_104cbb15c:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_104cbb17c;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_104cbb254(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_104cbb254(plVar10,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_104cbb394(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_104cbb15c;
    }
  }
  uVar9 = 1;
LAB_104cbb17c:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 104cbb254; end: 104cbb393;  */

void FUN_104cbb254(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    _objc_copyWeak(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_104cbb748();
LAB_104cbb390:
      FUN_104bd35f4();
      plVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_104cbb390;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    _objc_copyWeak(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        _objc_moveWeak(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        _objc_destroyWeak(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 104cbb394; end: 104cbb3db;  */

void FUN_104cbb394(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 104cbb3dc; end: 104cbb60b; -[SCApplicationDataListenerAnnouncer removeListener:] */

void FUN_104cbb3dc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_104cbb590;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_104cbb444;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_104cbb394(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_104cbb590;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_104cbb444:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110847f58;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          FUN_104cbb254(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    FUN_104cbb394(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_104cbb590;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_104cbb590:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cbb60c; end: 104cbb6ff; -[SCApplicationDataListenerAnnouncer applicationDataHasBecomeAvailable] */

void FUN_104cbb60c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = param_1 + 0x48;
  __ZNSt3__112__get_sp_mutEPKv(lVar8);
  __ZNSt3__18__sp_mut4lockEv();
  plVar2 = *(long **)(param_1 + 0x48);
  plVar3 = *(long **)(param_1 + 0x50);
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  __ZNSt3__18__sp_mut6unlockEv(lVar8);
  if (plVar2 != (long *)0x0) {
    lVar4 = plVar2[1];
    for (lVar8 = *plVar2; lVar8 != lVar4; lVar8 = lVar8 + 8) {
      lVar7 = lVar8;
      _objc_loadWeakRetained(lVar8);
      func_0x00010bf07740();
      _objc_release(lVar7);
    }
  }
  if (plVar3 != (long *)0x0) {
    plVar2 = plVar3 + 1;
    do {
      lVar8 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
      return;
    }
  }
  return;
}



/* Entry: 104cbb700; end: 104cbb727; -[SCApplicationDataListenerAnnouncer .cxx_destruct] */

void FUN_104cbb700(long param_1)

{
  FUN_104cbb7f8(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 104cbb728; end: 104cbb747; -[SCApplicationDataListenerAnnouncer .cxx_construct] */

void FUN_104cbb728(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 104cbb748; end: 104cbb75b;  */

void FUN_104cbb748(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_104bd47e8();
  *puVar1 = &PTR_FUN_110847f58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104cbb75c; end: 104cbb76b;  */

void FUN_104cbb75c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110847f58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104cbb76c; end: 104cbb78b;  */

void FUN_104cbb76c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110847f58;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104cbb78c; end: 104cbb7f3;  */

void FUN_104cbb78c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 104cbb7f4; end: 104cbb7f7;  */

void FUN_104cbb7f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104cbb7f8; end: 104cbb84f;  */

long FUN_104cbb7f8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 104cbb850; end: 104cbba3f; -[SCTIVNonceLoginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbb850(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_1127104ec;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0b4020();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9c40();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c235840(PTR_PTR_1126aefd0);
  puVar5 = PTR_PTR_1126aefd8;
  lVar2 = param_1 + _DAT_1127104f0;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c2718a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c271920(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_initWeak(auStack_48,param_1);
  param_1 = param_1 + _DAT_1127104f4;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c08d700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf059c0(lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar5);
  _objc_release(lVar1);
  return;
}



/* Entry: 104cbba40; end: 104cbba93;  */

void FUN_104cbba40(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdccc80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cbba94; end: 104cbbd3f; -[SCTIVNonceLoginEntryPoint _appLoginCompletedWithResult:networkRequestId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbba94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar5 = (long)_DAT_1127104ec;
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0b4020();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcfaa0(param_3);
  func_0x00010c119500(param_3);
  func_0x00010be44620(param_1);
  func_0x00010c0a9c00(lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bfe1560(PTR_PTR_1126aefd0);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 1;
  uVar4 = param_3;
  func_0x00010bf6f520(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010c0c0920(uVar4);
  _objc_release(uVar4);
  if (*(char *)(puStack_78 + 3) == '\x01') {
    lVar5 = param_1 + lVar5;
    _objc_loadWeakRetained(lVar5);
    lVar1 = lVar5;
    func_0x00010c0b4020();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcfaa0(param_3);
    func_0x00010c119500(param_3);
    func_0x00010c0a9c80(lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar5);
    param_1 = param_1 + _DAT_1127104f0;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2718c0();
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  _objc_release(param_4);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104cbbd40; end: 104cbbe6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbbd40(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  lVar4 = *(long *)(param_1 + 0x20);
  lVar5 = (long)_DAT_1127104ec;
  _objc_retain(param_2);
  lVar4 = lVar4 + lVar5;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0b4020();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c293740(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9d60(lVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar4 = *(long *)(param_1 + 0x20) + (long)_DAT_1127104f0;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c271900();
  _objc_release(param_2);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 104cbbe6c; end: 104cbbf0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbbe6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = (long)_DAT_1127104f0;
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = lVar1 + lVar2;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2718e0();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cbbf10; end: 104cbc01b; -[SCTIVNonceLoginEntryPoint _isSuccess:] */

undefined1 FUN_104cbbf10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_3;
  func_0x00010bf6f520(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0920();
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 104cbc01c; end: 104cbc043;  */

void FUN_104cbc01c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 104cbc044; end: 104cbc097; -[SCTIVNonceLoginEntryPoint end] */

void FUN_104cbc044(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bfe1560(PTR_PTR_1126aefd0);
  puStack_28 = PTR_PTR_1126e3ad8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cbc098; end: 104cbc0db; -[SCTIVNonceLoginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cbc098(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127104ec);
  _objc_destroyWeak(param_1 + _DAT_1127104f4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127104f0);
  return;
}



/* Entry: 104cbc0dc; end: 104cbc163; +[SCTIVNonceLoginHUD shared] */

void FUN_104cbc0dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_104cbc164;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136b89f8 != -1) {
    func_0x00010002a2fc(0x1136b89f8,&puStack_48);
  }
  uVar1 = uRam00000001136b89f0;
  _objc_retain(uRam00000001136b89f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104cbc164; end: 104cbc18b;  */

void FUN_104cbc164(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_opt_new();
  uVar1 = uRam00000001136b89f0;
  uRam00000001136b89f0 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cbc18c; end: 104cbc1e3; +[SCTIVNonceLoginHUD show] */

void FUN_104cbc18c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_104cbc1e4;
  puStack_20 = &UNK_110848088;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 104cbc1e4; end: 104cbc27f;  */

void FUN_104cbc1e4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aefd0;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bdc16e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126aefe0;
    _objc_opt_new(PTR_PTR_1126aefe0);
    puVar2 = PTR_PTR_1126aefd0;
    func_0x00010c22b6a0(PTR_PTR_1126aefd0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a5040();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdd0470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__attachHUDViewToKeyWindow_112551ab8);
  return;
}



/* Entry: 104cbc280; end: 104cbc2d7; +[SCTIVNonceLoginHUD hide] */

void FUN_104cbc280(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_104cbc2d8;
  puStack_20 = &UNK_110848088;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 104cbc2d8; end: 104cbc2df;  */

void FUN_104cbc2d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfb570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__detachHUDViewFromKeyWindow_11255c6f8);
  return;
}



/* Entry: 104cbc2e0; end: 104cbc2f7; +[SCTIVNonceLoginHUD isHidden] */

uint FUN_104cbc2e0(uint param_1)

{
  func_0x00010be40d80();
  return param_1 ^ 1;
}



/* Entry: 104cbc2f8; end: 104cbc683; +[SCTIVNonceLoginHUD _attachHUDViewToKeyWindow] */

void FUN_104cbc2f8(ulong param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be40d80();
  iVar1 = (int)param_1;
  if ((param_1 & 1) == 0) {
    puVar2 = PTR_PTR_1126aefd0;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bdc16e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(puVar3);
    _objc_release(puVar2);
    lVar4 = 0;
    func_0x0001008cd514();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      puVar2 = PTR_PTR_1126aefd0;
      func_0x00010c22b6a0(PTR_PTR_1126aefd0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bdc16e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(lVar4,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar3 = PTR_PTR_1126aefd0;
      func_0x00010c22b6a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bdc16e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar4;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010bf493a0(puVar6,param_2,lVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126aefd0;
      puStack_88 = puVar8;
      func_0x00010c22b6a0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010bdc16e0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar4;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar11;
      func_0x00010bf493a0(puVar11,param_2,lVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR_PTR_1126aefd0;
      puStack_80 = puVar13;
      func_0x00010c22b6a0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar14;
      func_0x00010bdc16e0();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar15;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar4;
      func_0x00010c274200(lVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar16;
      func_0x00010bf493a0(puVar16,param_2,lVar17);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = PTR_PTR_1126aefd0;
      puStack_78 = puVar18;
      func_0x00010c22b6a0();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar19;
      func_0x00010bdc16e0();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar20;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar22 = lVar4;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar23 = puVar21;
      func_0x00010bf493a0(puVar21,param_2,lVar22);
      _objc_retainAutoreleasedReturnValue();
      puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = puVar23;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar2,param_2,puVar24);
      _objc_release(puVar24);
      _objc_release(puVar23);
      _objc_release(lVar22);
      _objc_release(puVar21);
      _objc_release(puVar20);
      _objc_release(puVar19);
      _objc_release(puVar18);
      _objc_release(lVar17);
      _objc_release(puVar16);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(lVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(lVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar3);
    }
    _objc_release();
    iVar1 = (int)lVar4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010be40d80();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126aefd0;
    func_0x00010c22b6a0(PTR_PTR_1126aefd0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bdc16e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 104cbc684; end: 104cbc6e7; +[SCTIVNonceLoginHUD _detachHUDViewFromKeyWindow] */

void FUN_104cbc684(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010be40d80();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126aefd0;
    func_0x00010c22b6a0(PTR_PTR_1126aefd0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bdc16e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 104cbc6e8; end: 104cbc75b; +[SCTIVNonceLoginHUD _isHUDViewAttached] */

bool FUN_104cbc6e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aefd0;
  func_0x00010c22b6a0(PTR_PTR_1126aefd0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bdc16e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar3 != (undefined *)0x0;
}



/* Entry: 104cbc75c; end: 104cbc763; -[SCTIVNonceLoginHUD HUDView] */

undefined8 FUN_104cbc75c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104cbc764; end: 104cbc793; -[SCTIVNonceLoginHUD setHUDView:] */

void FUN_104cbc764(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104cbc794; end: 104cbc79f; -[SCTIVNonceLoginHUD .cxx_destruct] */

void FUN_104cbc794(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104cbc7a0; end: 104cbc7ef; -[SCTIVNonceLoginHUDView init] */

undefined1 * FUN_104cbc7a0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3ae0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beaa4c0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104cbc7f0; end: 104cbcdbb; -[SCTIVNonceLoginHUDView _setup] */

void FUN_104cbc7f0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
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
  long lVar21;
  
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x25);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar3);
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar4);
  _objc_release(puVar3);
  puVar3 = puVar4;
  func_0x00010c08c0e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4028000000000000);
  _objc_release(puVar3);
  puVar3 = puVar4;
  func_0x00010c08c0e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar3);
  func_0x00010c219b60(puVar4);
  func_0x00010befbb60(param_1);
  puVar3 = puVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010bf493c0(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(puVar3);
  func_0x00010c1e3380(0x443b8000,puVar6);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar7 = puVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf34860(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010bf49580(0x4073600000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(param_1);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar5);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  func_0x00010c207380(0x4020000000000000);
  func_0x00010c16e060(puVar7);
  func_0x00010c166c00(puVar7);
  func_0x00010c219b60(puVar7);
  func_0x00010befbb60(puVar4);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar8 = puVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf49480(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar7;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar4;
  func_0x00010c274200(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar14;
  func_0x00010bf493c0(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar4;
  func_0x00010bf1ff80(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar17;
  func_0x00010bf493c0(0xc038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
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
  puVar3 = PTR_PTR_1126aeff0;
  _objc_alloc();
  func_0x00010bfffb60();
  func_0x00010bef6d60(puVar7);
  func_0x00010c24dbc0(puVar3);
  puVar8 = PTR_PTR_1126aea58;
  _objc_opt_new();
  func_0x00010c21ad00();
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar8);
  _objc_release(puVar9);
  FUN_104cbcdbc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar8);
  _objc_release(puVar9);
  func_0x00010c1cfce0(puVar8);
  func_0x00010bef6d60(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar3);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    return;
  }
  ___stack_chk_fail();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dae4b8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dae4b8,
                      &PTR____CFConstantStringClassReference_110dae4d8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}


