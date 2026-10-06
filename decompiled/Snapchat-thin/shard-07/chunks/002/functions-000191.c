/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105380c7c; end: 105380c83; -[SCUserVerificationStateConfig viewConfig] */

undefined8 FUN_105380c7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105380c84; end: 105380cb3; -[SCUserVerificationStateConfig .cxx_destruct] */

void FUN_105380c84(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105380cb4; end: 105380d4f; -[SCUserVerificationStateViewConfig initWithCurrentStep:totalSteps:continueButtonText:options:] */

undefined1 *
FUN_105380cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e7be0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 105380d50; end: 105380d73; -[SCUserVerificationStateViewConfig copyWithZone:] */

undefined8 FUN_105380d50(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105380d74; end: 105380de7; -[SCUserVerificationStateViewConfig hash] */

undefined8 * FUN_105380d74(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  puVar2 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x000100505190(&uStack_50,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105380e8c;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       (((*(long *)((long)puVar2 + 8) != *(long *)(param_3 + 8) ||
         (*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10))) ||
        (*(long *)((long)puVar2 + 0x20) != *(long *)(param_3 + 0x20))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_105380e8c;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x18);
    if (puVar4 != *(undefined1 **)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_105380e8c;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_105380e8c:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 105380de8; end: 105380ea7; -[SCUserVerificationStateViewConfig isEqual:] */

long FUN_105380de8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105380e8c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
         (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
        (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))))) {
      lVar3 = 0;
      goto LAB_105380e8c;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_105380e8c;
    }
  }
  lVar3 = 1;
LAB_105380e8c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105380ea8; end: 105380eaf; -[SCUserVerificationStateViewConfig currentStep] */

undefined8 FUN_105380ea8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105380eb0; end: 105380eb7; -[SCUserVerificationStateViewConfig totalSteps] */

undefined8 FUN_105380eb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105380eb8; end: 105380ebf; -[SCUserVerificationStateViewConfig continueButtonText] */

undefined8 FUN_105380eb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105380ec0; end: 105380ec7; -[SCUserVerificationStateViewConfig options] */

undefined8 FUN_105380ec0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105380ec8; end: 105380ed3; -[SCUserVerificationStateViewConfig .cxx_destruct] */

void FUN_105380ec8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 105380ed4; end: 105380fab; -[SCSponsoredLensScheduleRequestFeatureInfoProvider scheduleNamespaceRequestFeatureInfo] */

void FUN_105380ed4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar5 = PTR_PTR_1126b7d70;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef4a40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be46fa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be84ac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebd1a0(param_1);
  func_0x00010c24a540(puVar5,param_2,uVar2,lVar3,lVar4,param_1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105380fac; end: 10538102f; -[SCSponsoredLensScheduleRequestFeatureInfoProvider _lastLowSensitivityResponseTime] */

void FUN_105380fac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfaa120(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c266080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c089540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105381030; end: 105381157; -[SCSponsoredLensScheduleRequestFeatureInfoProvider _purposeTypesArray] */

void FUN_105381030(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfaa120(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c266080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105381158;
  uStack_40 = 0x105381168;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar1 = uVar2;
  puStack_38 = puVar3;
  func_0x00010c11bf80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf980c0();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puStack_38);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105381158; end: 10538116f;  */

void FUN_105381158(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105381170; end: 1053811bf;  */

void FUN_105381170(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053811c0; end: 105381227; -[SCSponsoredLensScheduleRequestFeatureInfoProvider _snapScore] */

long FUN_1053811c0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x00010c276ac0(lVar2);
  }
  _objc_release(lVar2);
  return lVar1;
}



/* Entry: 105381228; end: 10538126f; -[SCSponsoredLensScheduleRequestFeatureInfoProvider .cxx_destruct] */

void FUN_105381228(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105381270; end: 105381313;  */

void FUN_105381270(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b7d78;
  _objc_alloc(PTR_PTR_1126b7d78);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef2520(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0d7980(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf1a840(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff1280(puVar1,param_2,uVar2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105381314; end: 105381363; -[SCFriendingConfigsAdaptor isContactSyncEnabled] */

undefined8 FUN_105381314(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    return 1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf49c40();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105381364; end: 10538139f; -[SCFriendingConfigsAdaptor setIsContactSyncEnabled:] */

void FUN_105381364(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1053813a0; end: 1053813df; -[SCFriendingConfigsAdaptor searchableByPhoneNumber] */

undefined8 FUN_1053813a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c154a80();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1053813e0; end: 10538141b; -[SCFriendingConfigsAdaptor setSearchableByPhoneNumber:] */

void FUN_1053813e0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10538141c; end: 105381463; -[SCFriendingConfigsAdaptor setAddedFriendsTimestamp:] */

void FUN_10538141c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0b4ca0(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105381464; end: 1053814a3; -[SCFriendingConfigsAdaptor contactsResyncRequest] */

undefined8 FUN_105381464(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf49c60();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1053814a4; end: 1053815db; -[SCFriendingConfigsAdaptor updateContactBookSyncEnabledToServer:completionQueue:completionBlock:] */

void FUN_1053814a4(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1053815dc;
  puStack_68 = &UNK_110845ce0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x1053815ec;
  puStack_90 = &UNK_110849530;
  uStack_60 = uVar2;
  uStack_58 = param_3;
  _objc_retain(param_5);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x105381604;
  puStack_b8 = &UNK_110859a38;
  uStack_b0 = param_5;
  uStack_88 = param_5;
  _objc_retain(param_5);
  func_0x00010c0f8560(uVar2,param_2,&puStack_80,param_4,param_4,&puStack_a8,&puStack_d0);
  _objc_release(param_4);
  _objc_release(uStack_b0);
  _objc_release(uStack_88);
  _objc_release(param_5);
  _objc_release(uVar2);
  return;
}



/* Entry: 1053815dc; end: 105381617;  */

void FUN_1053815dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c181270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setContactBookSyncEnabled__11263deb8,
             *(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 105381618; end: 10538174f; -[SCFriendingConfigsAdaptor updateSearchableByPhoneNumberToServer:completionQueue:completionBlock:] */

void FUN_105381618(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105381750;
  puStack_68 = &UNK_110845ce0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x105381760;
  puStack_90 = &UNK_110849530;
  uStack_60 = uVar2;
  uStack_58 = param_3;
  _objc_retain(param_5);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x105381778;
  puStack_b8 = &UNK_110859a38;
  uStack_b0 = param_5;
  uStack_88 = param_5;
  _objc_retain(param_5);
  func_0x00010c0f8560(uVar2,param_2,&puStack_80,param_4,param_4,&puStack_a8,&puStack_d0);
  _objc_release(param_4);
  _objc_release(uStack_b0);
  _objc_release(uStack_88);
  _objc_release(param_5);
  _objc_release(uVar2);
  return;
}



/* Entry: 105381750; end: 10538178b;  */

void FUN_105381750(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1f8d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setSearchableByPhoneNumber__11265bd80,
             *(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 10538178c; end: 1053818c3; -[SCFriendingConfigsAdaptor updateQuickAddPrivacyToServer:completionQueue:completionBlock:] */

void FUN_10538178c(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1053818c4;
  puStack_68 = &UNK_110845ce0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x1053818d8;
  puStack_90 = &UNK_110849530;
  uStack_60 = uVar2;
  uStack_58 = param_3;
  _objc_retain(param_5);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x1053818f0;
  puStack_b8 = &UNK_110859a38;
  uStack_b0 = param_5;
  uStack_88 = param_5;
  _objc_retain(param_5);
  func_0x00010c0f8560(uVar2,param_2,&puStack_80,param_4,param_4,&puStack_a8,&puStack_d0);
  _objc_release(param_4);
  _objc_release(uStack_b0);
  _objc_release(uStack_88);
  _objc_release(param_5);
  _objc_release(uVar2);
  return;
}



/* Entry: 1053818c4; end: 105381903;  */

void FUN_1053818c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e6930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setQuickAddPrivacyV2__112657470,
             *(byte *)(param_1 + 0x28) ^ 1);
  return;
}



/* Entry: 105381904; end: 10538193f; -[SCFriendingConfigsAdaptor .cxx_destruct] */

void FUN_105381904(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105381940; end: 105381b4b; -[SCLensGamesRPCHandlerImpl initWithUnifiedGRPCServices:userStorageServices:] */

undefined8 *
FUN_105381940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR_PTR_1126e7bf8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    _objc_release(puVar3);
    _objc_retain(puVar2);
    uVar4 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar4);
    uVar4 = param_4;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[4];
    puVar1[4] = uVar4;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_3);
    _objc_retain(puVar2);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_3);
    _objc_retain(puVar2);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(param_3);
    _objc_release(puVar2);
    _objc_release(param_3);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105381b4c; end: 105381d67;  */

void FUN_105381b4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar1,param_2,20000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar1,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1ebf80(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd5158);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfcfa00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf56360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126b7d88;
  _objc_alloc(PTR_PTR_1126b7d88);
  func_0x00010c058f80();
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105381d68; end: 105381e5b; -[SCLensGamesRPCHandlerImpl clearAllWithCompletion:] */

void FUN_105381d68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010bde0840(param_1);
  puVar1 = PTR_PTR_1126b7d98;
  func_0x00010c0cb140(PTR_PTR_1126b7d98);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be24c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105381e5c;
  puStack_40 = &UNK_11087e918;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf6b460(uVar2,param_2,puVar1,param_1,&puStack_58);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(puVar1);
  return;
}



/* Entry: 105381e5c; end: 105381e6b;  */

void FUN_105381e5c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000105381e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3);
  return;
}



/* Entry: 105381e6c; end: 10538206b; -[SCLensGamesRPCHandlerImpl recordLensUsage:appId:completion:] */

void FUN_105381e6c(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    _objc_opt_class(param_1);
    func_0x00010be0aee0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,param_1);
  }
  else {
    puVar2 = param_1;
    func_0x00010be202a0();
    if ((int)puVar2 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,0);
      goto LAB_105382014;
    }
    puVar2 = PTR_PTR_1126b7da0;
    func_0x00010c0cb140(PTR_PTR_1126b7da0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bbd60();
    func_0x00010c168ae0(puVar2);
    _objc_initWeak(auStack_58,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be24c20(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_5);
    _objc_retain(param_3);
    func_0x00010c123720(uVar3);
    _objc_release(param_1);
    _objc_release(uVar3);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    param_1 = puVar2;
  }
  _objc_release(param_1);
LAB_105382014:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10538206c; end: 1053820eb;  */

void FUN_10538206c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    pcVar4 = *(code **)(lVar2 + 0x10);
    lVar3 = 0;
  }
  else {
    if (param_3 == 0) {
      func_0x00010be998c0(lVar1);
    }
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 == 0) goto LAB_1053820d0;
    pcVar4 = *(code **)(lVar2 + 0x10);
    lVar3 = param_3;
  }
  (*pcVar4)(lVar2,lVar3);
LAB_1053820d0:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053820ec; end: 1053822cb; -[SCLensGamesRPCHandlerImpl getLensUsage:completion:] */

void FUN_1053820ec(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    _objc_opt_class(param_1);
    func_0x00010be0aee0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,0,param_1);
  }
  else {
    puVar2 = param_1;
    func_0x00010be202a0();
    if ((int)puVar2 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,1,0);
      goto LAB_105382280;
    }
    puVar2 = PTR_PTR_1126b7da8;
    func_0x00010c0cb140(PTR_PTR_1126b7da8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bbd60();
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be24c20(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010bfc70a0(uVar3);
    _objc_release(param_1);
    _objc_release(uVar3);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    param_1 = puVar2;
  }
  _objc_release(param_1);
LAB_105382280:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1053822cc; end: 10538235b;  */

void FUN_1053822cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_2;
  func_0x00010c082480();
  if ((int)uVar1 != 0) {
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar2);
    func_0x00010be998c0();
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  uVar1 = param_2;
  func_0x00010c082480(param_2);
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10538235c; end: 1053824fb; -[SCLensGamesRPCHandlerImpl deleteLensId:completion:] */

void FUN_10538235c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bdfa5e0(param_1);
  puVar1 = PTR_PTR_1126b7db0;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4000(puVar2);
  func_0x00010c1bbde0(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be24c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  puVar2 = puVar1;
  func_0x00010bf6c240(uVar4);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000105382508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + 0x20) + 0x10))(*(long *)(puVar1 + 0x20),puVar2);
  return;
}



/* Entry: 1053824fc; end: 10538250b;  */

void FUN_1053824fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000105382508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3);
  return;
}



/* Entry: 10538250c; end: 105382643; -[SCLensGamesRPCHandlerImpl inviteWithConversationId:lensId:completion:] */

void FUN_10538250c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b7db8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c183b80();
  _objc_release(param_3);
  func_0x00010c1bbd60(puVar1);
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be24c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010c06a820(uVar2);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(puVar1);
  return;
}



/* Entry: 105382644; end: 10538265b;  */

void FUN_105382644(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105382654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 10538265c; end: 1053827cf; -[SCLensGamesRPCHandlerImpl ringWithConversationId:lensId:invitedUserIds:completion:] */

void FUN_10538265c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b7dc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c183b80();
  _objc_release(param_3);
  func_0x00010c1bbd60(puVar1);
  _objc_release(param_4);
  uVar2 = param_5;
  func_0x00010c0d3c80(param_5);
  _objc_release(param_5);
  func_0x00010c1aed20(puVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be24c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  func_0x00010c1411a0(uVar2);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_6);
  _objc_release(puVar1);
  return;
}



/* Entry: 1053827d0; end: 1053827e7;  */

void FUN_1053827d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001053827e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 1053827e8; end: 1053828c7; -[SCLensGamesRPCHandlerImpl _deleteResultForLensId:] */

void FUN_1053827e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = *(undefined **)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00);
  }
  else {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(puVar4);
  func_0x00010c12d360(puVar2,param_2,param_3);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1053828c8; end: 1053829c3; -[SCLensGamesRPCHandlerImpl _saveResultForLensId:] */

void FUN_1053828c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = *(undefined **)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    _objc_opt_new();
  }
  else {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(puVar4);
  func_0x00010befa120(puVar2,param_2,param_3);
  _objc_release(param_3);
  puVar1 = puVar2;
  func_0x00010bf529e0();
  if ((undefined *)0x64 < puVar1) {
    func_0x00010c12d3c0(puVar2,param_2,0);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1053829c4; end: 105382a4b; -[SCLensGamesRPCHandlerImpl _getLensUsageLocalForLensId:] */

undefined8 FUN_1053829c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf4b900(uVar1,param_2,param_3);
  _objc_release(param_3);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105382a4c; end: 105382a8b; -[SCLensGamesRPCHandlerImpl _clearLocalCache] */

void FUN_105382a4c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105382a8c; end: 105382b97; +[SCLensGamesRPCHandlerImpl _errorForMissingParamWithLensId:appId:] */

void FUN_105382a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf72080(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be4c5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105382b98; end: 105382ba3; -[SCLensGamesRPCHandlerImpl listLensesUsedWithCompletion:] */

void FUN_105382b98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4c5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__listLensesUsedWithCursor_comple_112570b10,0,param_3);
  return;
}



/* Entry: 105382ba4; end: 105382d0f; -[SCLensGamesRPCHandlerImpl _listLensesUsedWithCursor:completion:] */

void FUN_105382ba4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b7dc8;
  func_0x00010c0cb140(PTR_PTR_1126b7dc8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bda80();
  func_0x00010c1881c0(puVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be24c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c09a1c0(uVar2);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105382d10; end: 105382e8f;  */

void FUN_105382d10(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  if (param_3 != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_3);
    goto LAB_105382e70;
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar2 = param_2;
  func_0x00010c0946a0();
  if (lVar2 != 0) {
    lVar2 = param_2;
    func_0x00010c094680(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1);
    _objc_release(lVar2);
  }
  lVar2 = param_2;
  func_0x00010bf610c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    puVar3 = puVar1;
    func_0x00010bf51e00(puVar1);
    (**(code **)(lVar5 + 0x10))(lVar5,puVar3,0);
LAB_105382e58:
    _objc_release(puVar3);
  }
  else {
    puVar3 = (undefined *)(param_1 + 0x28);
    _objc_loadWeakRetained();
    if (puVar3 != (undefined *)0x0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar4);
      _objc_retain(puVar1);
      func_0x00010be4c5c0(puVar3);
      _objc_release(puVar1);
      _objc_release(uVar4);
      goto LAB_105382e58;
    }
  }
  _objc_release(lVar2);
  _objc_release(puVar1);
LAB_105382e70:
  _objc_release(param_2);
  return;
}



/* Entry: 105382e90; end: 105382f23;  */

void FUN_105382e90(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    lVar1 = param_2;
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      func_0x00010befa160(*(undefined8 *)(param_1 + 0x20));
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010bf51e00(uVar2);
    (**(code **)(lVar1 + 0x10))(lVar1,uVar2,0);
    _objc_release(uVar2);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105382f24; end: 105382f67; -[SCLensGamesRPCHandlerImpl _grpcCallOptions] */

void FUN_105382f24(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eeba0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105382f68; end: 105382faf; -[SCLensGamesRPCHandlerImpl .cxx_destruct] */

void FUN_105382f68(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105382fb0; end: 105383093; +[SCLensGamesRPCServicesBuilder buildServicesWithUnifiedGRPCServices:userStorageServices:] */

void FUN_105382fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae720;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105383094;
  puStack_48 = &UNK_11087ea68;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b7dd8;
  _objc_alloc(PTR_PTR_1126b7dd8);
  func_0x00010c024120();
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105383094; end: 1053830c3;  */

void FUN_105383094(void)

{
  _objc_alloc(PTR_PTR_1126b7dd0);
  func_0x00010c058ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053830c4; end: 105383137; -[UNISCConnectedLensesInvitations initWithUnifiedGrpcService:] */

undefined1 * FUN_1053830c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7c00;
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



/* Entry: 105383138; end: 10538321b; -[UNISCConnectedLensesInvitations ringFriendsWithRequest:callOptionsBuilder:handler:] */

void FUN_105383138(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b7de0;
  _objc_opt_class(PTR_PTR_1126b7de0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dd5238,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10538321c; end: 1053832ff; -[UNISCConnectedLensesInvitations inviteFriendsWithRequest:callOptionsBuilder:handler:] */

void FUN_10538321c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b7de8;
  _objc_opt_class(PTR_PTR_1126b7de8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dd5258,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105383300; end: 10538330b; -[UNISCConnectedLensesInvitations .cxx_destruct] */

void FUN_105383300(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10538330c; end: 105383373; +[SCConnectedLensesRingFriendsRequest descriptor] */

void FUN_10538330c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb618 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2da40,
                        &PTR____CFConstantStringClassReference_110dd5278,
                        &PTR_s_snapchat_lens_connected_1130d07b0,&PTR_s_conversationId_1130d0808,3,
                        0x20,0x1c);
    puRam00000001136bb618 = puVar1;
  }
  return;
}



/* Entry: 105383374; end: 1053833db; +[SCConnectedLensesRingFriendsResponse descriptor] */

void FUN_105383374(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb620 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2da90,
                        &PTR____CFConstantStringClassReference_110dd5298,
                        &PTR_s_snapchat_lens_connected_1130d07b0,0,0,4,0x1c);
    puRam00000001136bb620 = puVar1;
  }
  return;
}



/* Entry: 1053833dc; end: 105383443; +[SCConnectedLensesInviteFriendsRequest descriptor] */

void FUN_1053833dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb628 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2dae0,
                        &PTR____CFConstantStringClassReference_110dd52b8,
                        &PTR_s_snapchat_lens_connected_1130d07b0,&PTR_s_conversationId_1130d07c8,2,
                        0x18,0x1c);
    puRam00000001136bb628 = puVar1;
  }
  return;
}



/* Entry: 105383444; end: 1053834ab; +[SCConnectedLensesInviteFriendsResponse descriptor] */

void FUN_105383444(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb630 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2db30,
                        &PTR____CFConstantStringClassReference_110dd52d8,
                        &PTR_s_snapchat_lens_connected_1130d07b0,0,0,4,0x1c);
    puRam00000001136bb630 = puVar1;
  }
  return;
}



/* Entry: 1053834ac; end: 10538351f; -[UNISCGamesLensManagementLensDataManagement initWithUnifiedGrpcService:] */

undefined1 * FUN_1053834ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7c08;
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



/* Entry: 105383520; end: 105383603; -[UNISCGamesLensManagementLensDataManagement recordLensUsageWithRequest:callOptionsBuilder:handler:] */

void FUN_105383520(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b7df0;
  _objc_opt_class(PTR_PTR_1126b7df0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dd52f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105383604; end: 1053836e7; -[UNISCGamesLensManagementLensDataManagement listLensesUsedWithRequest:callOptionsBuilder:handler:] */

void FUN_105383604(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b7df8;
  _objc_opt_class(PTR_PTR_1126b7df8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dd5318,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1053836e8; end: 1053837cb; -[UNISCGamesLensManagementLensDataManagement deleteLensesDataWithRequest:callOptionsBuilder:handler:] */

void FUN_1053836e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b7e00;
  _objc_opt_class(PTR_PTR_1126b7e00);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dd5338,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1053837cc; end: 1053838af; -[UNISCGamesLensManagementLensDataManagement deleteAllLensesDataWithRequest:callOptionsBuilder:handler:] */

void FUN_1053837cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b7e08;
  _objc_opt_class(PTR_PTR_1126b7e08);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dd5358,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1053838b0; end: 105383993; -[UNISCGamesLensManagementLensDataManagement getLensUsageWithRequest:callOptionsBuilder:handler:] */

void FUN_1053838b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b7e10;
  _objc_opt_class(PTR_PTR_1126b7e10);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dd5378,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105383994; end: 10538399f; -[UNISCGamesLensManagementLensDataManagement .cxx_destruct] */

void FUN_105383994(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053839a0; end: 105383a1b;  */

undefined * FUN_1053839a0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bb638 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dd5398,
                        &UNK_10dd97c88,&UNK_10dd97c98,2,FUN_105383a1c,0);
    do {
      if (puRam00000001136bb638 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bb638;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bb638,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bb638 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bb638;
}



/* Entry: 105383a1c; end: 105383a27;  */

bool FUN_105383a1c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 105383a28; end: 105383a8f; +[SCGamesLensManagementRecordLensUsageRequest descriptor] */

void FUN_105383a28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb640 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2dc20,
                        &PTR____CFConstantStringClassReference_110dd53b8,
                        &PTR_s_games_lensmanagement_1130d0868,&PTR_s_lensId_1130d0a00,3,0x18,0x1c);
    puRam00000001136bb640 = puVar1;
  }
  return;
}



/* Entry: 105383a90; end: 105383af7; +[SCGamesLensManagementRecordLensUsageResponse descriptor] */

void FUN_105383a90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb648 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2dc70,
                        &PTR____CFConstantStringClassReference_110dd53d8,
                        &PTR_s_games_lensmanagement_1130d0868,0,0,4,0x1c);
    puRam00000001136bb648 = puVar1;
  }
  return;
}



/* Entry: 105383af8; end: 105383b5f; +[SCGamesLensManagementListLensesUsedRequest descriptor] */

void FUN_105383af8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb650 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2dcc0,
                        &PTR____CFConstantStringClassReference_110dd53f8,
                        &PTR_s_games_lensmanagement_1130d0868,&PTR_s_limit_1130d0a60,3,0x18,0x1c);
    puRam00000001136bb650 = puVar1;
  }
  return;
}



/* Entry: 105383b60; end: 105383bc7; +[SCGamesLensManagementListLensesUsedResponse descriptor] */

void FUN_105383b60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb658 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2dd10,
                        &PTR____CFConstantStringClassReference_110dd5418,
                        &PTR_s_games_lensmanagement_1130d0868,&PTR_s_cursor_1130d0940,2,0x18,0x1c);
    puRam00000001136bb658 = puVar1;
  }
  return;
}



/* Entry: 105383bc8; end: 105383c2f; +[SCGamesLensManagementDeleteLensesDataRequest descriptor] */

void FUN_105383bc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb660 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2dd60,
                        &PTR____CFConstantStringClassReference_110dd5438,
                        &PTR_s_games_lensmanagement_1130d0868,&PTR_s_lensIdsArray_1130d0980,2,0x10,
                        0x1c);
    puRam00000001136bb660 = puVar1;
  }
  return;
}



/* Entry: 105383c30; end: 105383c97; +[SCGamesLensManagementDeleteLensesDataResponse descriptor] */

void FUN_105383c30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb668 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2ddb0,
                        &PTR____CFConstantStringClassReference_110dd5458,
                        &PTR_s_games_lensmanagement_1130d0868,0,0,4,0x1c);
    puRam00000001136bb668 = puVar1;
  }
  return;
}



/* Entry: 105383c98; end: 105383cff; +[SCGamesLensManagementDeleteAllLensesDataRequest descriptor] */

void FUN_105383c98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb670 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2de00,
                        &PTR____CFConstantStringClassReference_110dd5478,
                        &PTR_s_games_lensmanagement_1130d0868,&PTR_s_platform_1130d0880,1,8,0x1c);
    puRam00000001136bb670 = puVar1;
  }
  return;
}



/* Entry: 105383d00; end: 105383d67; +[SCGamesLensManagementDeleteAllLensesDataResponse descriptor] */

void FUN_105383d00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb678 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2de50,
                        &PTR____CFConstantStringClassReference_110dd5498,
                        &PTR_s_games_lensmanagement_1130d0868,0,0,4,0x1c);
    puRam00000001136bb678 = puVar1;
  }
  return;
}



/* Entry: 105383d68; end: 105383dcf; +[SCGamesLensManagementGetLensUsageRequest descriptor] */

void FUN_105383d68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb680 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2dea0,
                        &PTR____CFConstantStringClassReference_110dd54b8,
                        &PTR_s_games_lensmanagement_1130d0868,&PTR_s_lensId_1130d08a0,1,0x10,0x1c);
    puRam00000001136bb680 = puVar1;
  }
  return;
}



/* Entry: 105383dd0; end: 105383e37; +[SCGamesLensManagementGetLensUsageResponse descriptor] */

void FUN_105383dd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb688 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2def0,
                        &PTR____CFConstantStringClassReference_110dd54d8,
                        &PTR_s_games_lensmanagement_1130d0868,&PTR_s_isUsed_1130d08c0,1,4,0x1c);
    puRam00000001136bb688 = puVar1;
  }
  return;
}



/* Entry: 105383e38; end: 105383e9f; +[SCGamesLensManagementRecordFreePlayRequest descriptor] */

void FUN_105383e38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb690 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2df40,
                        &PTR____CFConstantStringClassReference_110dd54f8,
                        &PTR_s_games_lensmanagement_1130d0868,&PTR_s_lensId_1130d09c0,2,0x10,0x1c);
    puRam00000001136bb690 = puVar1;
  }
  return;
}



/* Entry: 105383ea0; end: 105383f07; +[SCGamesLensManagementRecordFreePlayResponse descriptor] */

void FUN_105383ea0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb698 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2df90,
                        &PTR____CFConstantStringClassReference_110dd5518,
                        &PTR_s_games_lensmanagement_1130d0868,&PTR_s_freePlayCount_1130d08e0,1,8,
                        0x1c);
    puRam00000001136bb698 = puVar1;
  }
  return;
}



/* Entry: 105383f08; end: 105383f6f; +[SCGamesLensManagementGetFreePlayStatusRequest descriptor] */

void FUN_105383f08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb6a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2dfe0,
                        &PTR____CFConstantStringClassReference_110dd5538,
                        &PTR_s_games_lensmanagement_1130d0868,&PTR_s_lensId_1130d0900,1,0x10,0x1c);
    puRam00000001136bb6a0 = puVar1;
  }
  return;
}



/* Entry: 105383f70; end: 105383fd7; +[SCGamesLensManagementGetFreePlayStatusResponse descriptor] */

void FUN_105383f70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb6a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2e030,
                        &PTR____CFConstantStringClassReference_110dd5558,
                        &PTR_s_games_lensmanagement_1130d0868,&PTR_s_freePlayCount_1130d0920,1,8,
                        0x1c);
    puRam00000001136bb6a8 = puVar1;
  }
  return;
}



/* Entry: 105383fd8; end: 1053840f7; -[SCLensRemoteApiDataServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105383fd8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar5 = (long)_DAT_1127222f4;
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  param_1 = param_1 + lVar5;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126ae720;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1053840f8;
  puStack_48 = &UNK_11087ea98;
  lStack_40 = lVar2;
  lStack_38 = lVar1;
  _objc_retain(lVar1);
  _objc_retain(lVar2);
  func_0x00010bf11fe0(puVar3,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b7e20;
  _objc_alloc(PTR_PTR_1126b7e20);
  func_0x00010c03dec0();
  _objc_release(puVar3);
  _objc_release(lStack_38);
  _objc_release(lStack_40);
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1053840f8; end: 105384127;  */

void FUN_1053840f8(void)

{
  _objc_alloc(PTR_PTR_1126b7e18);
  func_0x00010c00e000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105384128; end: 10538415f; -[SCLensRemoteApiDataServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105384128(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127222f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127222f4);
  return;
}



/* Entry: 105384160; end: 10538421f; -[SCLensRemoteApiDataProvider initWithDocObjectContext:preferences:] */

undefined1 *
FUN_105384160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7c10;
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



/* Entry: 105384220; end: 105384333; -[SCLensRemoteApiDataProvider saveInProgressAuthWithLensId:specId:] */

void FUN_105384220(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b7e28;
  _objc_alloc(PTR_PTR_1126b7e28);
  func_0x00010c04adc0();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105384334; end: 1053844c7; -[SCLensRemoteApiDataProvider saveAuthCode:orError:forExistingAuthProgress:] */

void FUN_105384334(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b7e28;
  _objc_alloc(PTR_PTR_1126b7e28);
  uVar4 = param_5;
  func_0x00010c2481e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c094540(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c252440(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04adc0(puVar1,param_2,uVar4,uVar2,param_3,uVar3,param_4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053844c8; end: 10538452b; -[SCLensRemoteApiDataProvider getInProgressAuth] */

void FUN_1053844c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10538452c; end: 10538457f; -[SCLensRemoteApiDataProvider deleteInProgressAuth] */

void FUN_10538452c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105384580; end: 105384763; -[SCLensRemoteApiDataProvider clearRemoteApiDataWithCompletionQueue:completionHandler:] */

void FUN_105384580(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_9c;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126b1c98);
  if (lVar1 == 0) {
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_80,lVar1);
  }
  lStack_98 = 0;
  lStack_90 = 0;
  uStack_88 = 0;
  uStack_9c = 0;
  puVar2 = &uStack_80;
  func_0x00010054c81c(puVar2,&lStack_98,&uStack_9c);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (lStack_98 != 0) {
    lStack_90 = lStack_98;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_58);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_retain(puVar3);
  func_0x00010c0f8500(lVar1);
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105384764; end: 1053848e3;  */

void FUN_105384764(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *unaff_x22;
  long unaff_x23;
  undefined **unaff_x24;
  long lVar7;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined **ppuStack_160;
  long lStack_158;
  undefined *puStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
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
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar6 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar6);
  puVar4 = auStack_d8;
  uVar5 = 0x10;
  lVar1 = lVar6;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    unaff_x23 = *plStack_110;
    unaff_x24 = &PTR_PTR_1126b7000;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != unaff_x23) {
          _objc_enumerationMutation(lVar6);
        }
        unaff_x22 = PTR_PTR_1126b7e30;
        FUN_105385a60(PTR_PTR_1126b7e30,*(undefined8 *)(lStack_118 + lVar7 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(unaff_x22);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      puVar4 = auStack_d8;
      uVar5 = 0x10;
      lVar1 = lVar6;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar6);
  lVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar6);
  _objc_release(param_2);
  lVar7 = lVar1;
  __Unwind_Resume();
  pcStack_128 = FUN_1053848e4;
  ppuStack_160 = unaff_x24;
  lStack_158 = unaff_x23;
  puStack_150 = unaff_x22;
  lStack_148 = lVar1;
  lStack_140 = lVar6;
  lStack_138 = param_2;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  _objc_retain(puVar4);
  _objc_retain(uVar5);
  lVar1 = lVar7;
  func_0x00010bfaaec0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    if (puVar4 == (undefined1 *)0x0) {
      puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1a8 = 0xc2000000;
      uStack_1a0 = 0x105384adc;
      puStack_198 = &UNK_11087bb60;
      _objc_retain(uVar5);
      uStack_190 = uVar5;
      func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_1b0);
      uVar2 = uStack_190;
    }
    else {
      puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_180 = 0xc2000000;
      pcStack_178 = FUN_105384acc;
      puStack_170 = &UNK_11087bb60;
      _objc_retain(uVar5);
      uStack_168 = uVar5;
      func_0x00010007380c(puVar4,&puStack_188);
      uVar2 = uStack_168;
    }
  }
  else {
    uVar2 = *(undefined8 *)(lVar7 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar1);
    func_0x00010c0f8500(uVar2);
    _objc_release(lVar1);
  }
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  return;
}


