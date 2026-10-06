/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1058391e4; end: 1058391f3;  */

void FUN_1058391e4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be16f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__finishLocationPushRegistration__112563580,
             param_2,param_3);
  return;
}



/* Entry: 1058391f4; end: 1058392ef; -[SCMapLocationPushTokenProvider _finishLocationPushRegistration:error:] */

void FUN_1058391f4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((param_4 == 0) && (lVar1 != 0)) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1058392f0; end: 10583935b;  */

void FUN_1058392f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    puVar1 = PTR_PTR_1126bf088;
    _objc_alloc(PTR_PTR_1126bf088);
    func_0x00010c053e40();
    func_0x00010c0d9840(uVar2,param_2,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10583935c; end: 105839397; -[SCMapLocationPushTokenProvider .cxx_destruct] */

void FUN_10583935c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105839398; end: 10583970f; -[SCMapNotificationExtensionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105839398(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  lVar1 = param_1 + _DAT_11272a954;
  _objc_loadWeakRetained(lVar1);
  lVar10 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105839710;
  puStack_88 = &UNK_110843540;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010bf46540(lVar10);
  _objc_release(lVar10);
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_11272a95c;
  lVar1 = param_1 + lVar10;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0x11;
  func_0x0001000819a8(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar8;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_105839780;
  puStack_b0 = &UNK_1108531d0;
  _objc_copyWeak(auStack_a8,auStack_78);
  lVar7 = lVar4;
  func_0x00010c0e0c60();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_11272a960;
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  *(long *)(param_1 + lVar11) = lVar7;
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  lVar10 = param_1 + lVar10;
  _objc_loadWeakRetained();
  lVar1 = lVar10;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0x11;
  func_0x0001000819a8(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_d0,auStack_78);
  lVar4 = lVar3;
  func_0x00010c0e0c60();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  *(long *)(param_1 + lVar11) = lVar4;
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(puVar2);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(lVar10);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 105839710; end: 10583977f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105839710(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = (long)_DAT_11272a958;
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_2;
    _objc_release(uVar1);
    func_0x00010bee2f80(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105839780; end: 1058397e7;  */

void FUN_105839780(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bee2f80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1058397e8; end: 1058397ef; +[SCMapNotificationExtensionEntryPoint context] */

undefined8 FUN_1058397e8(void)

{
  return 5;
}



/* Entry: 1058397f0; end: 105839c1b; -[SCMapNotificationExtensionEntryPoint _updateUserDefaults] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058397f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  
  if (*(long *)(param_1 + _DAT_11272a958) != 0) {
    puVar1 = PTR_PTR_1126bf090;
    _objc_alloc();
    lVar2 = param_1 + _DAT_11272a964;
    _objc_loadWeakRetained(lVar2);
    lVar8 = lVar2;
    func_0x00010bf05240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05cd80(puVar1,param_2,lVar8);
    _objc_release(lVar8);
    _objc_release(lVar2);
    lVar9 = (long)_DAT_11272a954;
    lVar2 = param_1 + lVar9;
    _objc_loadWeakRetained();
    lVar8 = lVar2;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067f00();
    _objc_release(lVar8);
    _objc_release(lVar2);
    lVar2 = param_1 + lVar9;
    _objc_loadWeakRetained(lVar2);
    lVar8 = lVar2;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    fVar10 = 30.0;
    func_0x00010bfb2cc0(0x41f00000);
    _objc_release(lVar8);
    _objc_release(lVar2);
    lVar2 = param_1 + lVar9;
    _objc_loadWeakRetained(lVar2);
    lVar8 = lVar2;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    fVar11 = 10.0;
    func_0x00010bfb2cc0(0x41200000);
    _objc_release(lVar8);
    _objc_release(lVar2);
    lVar2 = param_1 + lVar9;
    _objc_loadWeakRetained();
    lVar8 = lVar2;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f440();
    _objc_release(lVar8);
    _objc_release(lVar2);
    lVar2 = param_1 + lVar9;
    _objc_loadWeakRetained(lVar2);
    lVar8 = lVar2;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = 0x3f800000;
    func_0x00010bfb2cc0(0x3f800000);
    _objc_release(lVar8);
    _objc_release(lVar2);
    lVar2 = param_1 + lVar9;
    _objc_loadWeakRetained(lVar2);
    lVar8 = lVar2;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    fVar12 = 20.0;
    func_0x00010bfb2cc0(0x41a00000);
    _objc_release(lVar8);
    _objc_release(lVar2);
    lVar2 = param_1 + lVar9;
    _objc_loadWeakRetained(lVar2);
    lVar8 = lVar2;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f440();
    _objc_release(lVar8);
    _objc_release(lVar2);
    lVar8 = (long)_DAT_11272a95c;
    lVar2 = param_1 + lVar8;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfb45c0();
    if ((int)lVar5 != 0) {
      lVar8 = param_1 + lVar8;
      _objc_loadWeakRetained();
      lVar5 = lVar8;
      func_0x00010bfa2b80();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb45e0();
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar8);
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    param_1 = param_1 + lVar9;
    _objc_loadWeakRetained();
    lVar2 = param_1;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f440();
    _objc_release(lVar2);
    _objc_release(param_1);
    puVar7 = PTR_PTR_1126bf098;
    _objc_alloc(PTR_PTR_1126bf098);
    func_0x00010c00cb80((double)fVar10,(double)fVar11,uVar13,(double)fVar12);
    func_0x00010c1c2320(puVar1,param_2,puVar7);
    _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105839c1c; end: 105839c8b; -[SCMapNotificationExtensionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105839c1c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272a95c);
  _objc_destroyWeak(param_1 + _DAT_11272a954);
  _objc_destroyWeak(param_1 + _DAT_11272a964);
  _objc_destroyWeak(param_1 + _DAT_11272a968);
  _objc_storeStrong(param_1 + _DAT_11272a960,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272a958,0);
  return;
}



/* Entry: 105839c8c; end: 105839cff; -[SCMapNotificationExtensionUserDefaults initWithUserScopedAppGroupUserDefaults:] */

undefined1 * FUN_105839c8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea918;
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



/* Entry: 105839d00; end: 105839de7; -[SCMapNotificationExtensionUserDefaults mapNotificationServiceExtensionConfigs] */

void FUN_105839d00(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc();
  func_0x00010bfeea60();
  func_0x00010c1ec620();
  puVar4 = puVar3;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126bf098;
  _objc_opt_class(PTR_PTR_1126bf098);
  puVar6 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar5);
  puVar5 = puVar4;
  if (((ulong)puVar6 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105839de8; end: 105839e87; -[SCMapNotificationExtensionUserDefaults setMapNotificationServiceExtensionConfigs:] */

void FUN_105839de8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uStack_38 = 0;
  puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,param_3,0,&uStack_38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1d0560(uVar2,param_2,puVar1,&PTR____CFConstantStringClassReference_110e06838);
  _objc_release(puVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 105839e88; end: 105839e93; -[SCMapNotificationExtensionUserDefaults .cxx_destruct] */

void FUN_105839e88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105839e94; end: 105839ff7; -[SCNotificationServiceExtensionMapConfigs initWithCoder:] */

undefined1 *
FUN_105839e94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  uVar5 = (undefined4)((ulong)param_1 >> 0x20);
  uVar4 = (undefined4)param_1;
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_1126ea920;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010bf66da0(param_4);
    *(ulong *)((long)puVar1 + 0x20) = CONCAT44(uVar5,uVar4);
    func_0x00010bf66da0(param_4);
    *(ulong *)((long)puVar1 + 0x28) = CONCAT44(uVar5,uVar4);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    func_0x00010bf66e40(param_4);
    *(undefined4 *)((long)puVar1 + 0x10) = uVar4;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
    func_0x00010bf66da0(param_4);
    *(ulong *)((long)puVar1 + 0x38) = CONCAT44(uVar5,uVar4);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xb) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xc) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xd) = (char)uVar2;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105839ff8; end: 10583a0f3; -[SCNotificationServiceExtensionMapConfigs initWithDisableLiveLocationNotificationSuppression:notificationDelayThreshold:desiredAccuracy:maxLocationRequestDuration:shouldLogBatteryState:lpseGrapheneSamplingRate:etag:useValisStaging:maxStreamingDuration:publishStreamingBlizzardEvents:isOnboardedToFootsteps:useReducedAccuracyForPeriodicPushes:] */

undefined1 *
FUN_105839ff8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined1 param_9,undefined8 param_10,undefined1 param_11,undefined1 param_12,
             undefined4 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puVar1 = &uStack_90;
  _objc_retain(param_10);
  puStack_88 = PTR_PTR_1126ea920;
  uStack_90 = param_5;
  _objc_msgSendSuper2(&uStack_90,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined8 *)((long)puVar1 + 0x18) = param_8;
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
    *(undefined1 *)((long)puVar1 + 9) = param_9;
    *(undefined4 *)((long)puVar1 + 0x10) = param_3;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = param_11;
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    *(undefined1 *)((long)puVar1 + 0xb) = param_12;
    *(undefined1 *)((long)puVar1 + 0xc) = (undefined1)param_13;
    *(undefined1 *)((long)puVar1 + 0xd) = param_13._1_1_;
  }
  _objc_release(param_10);
  return (undefined1 *)puVar1;
}



/* Entry: 10583a0f4; end: 10583a117; -[SCNotificationServiceExtensionMapConfigs copyWithZone:] */

undefined8 FUN_10583a0f4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10583a118; end: 10583a23f; -[SCNotificationServiceExtensionMapConfigs encodeWithCoder:] */

void FUN_10583a118(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92da0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e06858);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e06878);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x20),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110e06898);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x28),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110e068b8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110e068d8);
  func_0x00010bf92ee0(*(undefined4 *)(param_1 + 0x10),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110e068f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110e06918);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_110e06938);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x38),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110e06958);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xb),
                      &PTR____CFConstantStringClassReference_110e06978);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xc),
                      &PTR____CFConstantStringClassReference_110e06998);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xd),
                      &PTR____CFConstantStringClassReference_110e069b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10583a240; end: 10583a363; -[SCNotificationServiceExtensionMapConfigs hash] */

ulong * FUN_10583a240(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  float fVar8;
  double dVar9;
  ulong uStack_88;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = (ulong)*(byte *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x18);
  lStack_80 = -lVar2;
  if (-1 < lVar2) {
    lStack_80 = lVar2;
  }
  uVar6 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_78 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uVar6 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_70 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uVar6 = (ulong)*(uint *)(param_1 + 0x10) * 0x200000 - 1;
  uVar6 = (uVar6 ^ uVar6 >> 0x18) * 0x109;
  uStack_68 = (ulong)*(byte *)(param_1 + 9);
  uVar6 = (uVar6 ^ uVar6 >> 0xe) * 0x15;
  lStack_60 = (uVar6 ^ uVar6 >> 0x1c) * 0x80000001;
  func_0x00010bfde980();
  uStack_50 = (ulong)*(byte *)(param_1 + 10);
  uVar6 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_48 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uStack_40 = (ulong)*(byte *)(param_1 + 0xb);
  uStack_38 = (ulong)*(byte *)(param_1 + 0xc);
  uStack_30 = (ulong)*(byte *)(param_1 + 0xd);
  puVar4 = &uStack_88;
  uStack_58 = uVar3;
  func_0x000100505190(puVar4,0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10583a520:
    puVar7 = (ulong *)0x1;
  }
  else {
    puVar7 = (ulong *)0x0;
    if ((puVar4 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10583a524;
    puVar7 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((((ulong)puVar5 & 1) != 0) &&
         (((((char)puVar4[1] == (char)param_3[1] && (puVar4[3] == param_3[3])) &&
           (*(char *)((long)puVar4 + 9) == *(char *)((long)param_3 + 9))) &&
          ((*(char *)((long)puVar4 + 10) == *(char *)((long)param_3 + 10) &&
           (*(char *)((long)puVar4 + 0xb) == *(char *)((long)param_3 + 0xb))))))) &&
        (*(char *)((long)puVar4 + 0xc) == *(char *)((long)param_3 + 0xc))) &&
       (*(char *)((long)puVar4 + 0xd) == *(char *)((long)param_3 + 0xd))) {
      dVar9 = ABS((double)puVar4[4] - (double)param_3[4]);
      if ((dVar9 < 2.2250738585072014e-308) ||
         (dVar9 < ABS((double)puVar4[4] + (double)param_3[4]) * 2.220446049250313e-16)) {
        dVar9 = ABS((double)puVar4[5] - (double)param_3[5]);
        if ((dVar9 < 2.2250738585072014e-308) ||
           (dVar9 < ABS((double)puVar4[5] + (double)param_3[5]) * 2.220446049250313e-16)) {
          fVar8 = ABS(*(float *)(puVar4 + 2) - *(float *)(param_3 + 2));
          if ((fVar8 < 1.1754944e-38) ||
             (fVar8 < ABS(*(float *)(puVar4 + 2) + *(float *)(param_3 + 2)) * 1.1920929e-07)) {
            dVar9 = ABS((double)puVar4[7] - (double)param_3[7]);
            if ((dVar9 < 2.2250738585072014e-308) ||
               (dVar9 < ABS((double)puVar4[7] + (double)param_3[7]) * 2.220446049250313e-16)) {
              puVar7 = (ulong *)puVar4[6];
              if (puVar7 != (ulong *)param_3[6]) {
                func_0x00010c071ae0();
                goto LAB_10583a524;
              }
              goto LAB_10583a520;
            }
          }
        }
      }
    }
    puVar7 = (ulong *)0x0;
  }
LAB_10583a524:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 10583a364; end: 10583a53f; -[SCNotificationServiceExtensionMapConfigs isEqual:] */

long FUN_10583a364(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  double dVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10583a520:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10583a524;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
            (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
           (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
          ((*(char *)(param_1 + 10) == *(char *)(param_3 + 10) &&
           (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))))))) &&
        (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))) &&
       (*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd))) {
      dVar5 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
      if ((dVar5 < 2.2250738585072014e-308) ||
         (dVar5 < ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                  2.220446049250313e-16)) {
        dVar5 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
        if ((dVar5 < 2.2250738585072014e-308) ||
           (dVar5 < ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                    2.220446049250313e-16)) {
          fVar4 = ABS(*(float *)(param_1 + 0x10) - *(float *)(param_3 + 0x10));
          if ((fVar4 < 1.1754944e-38) ||
             (fVar4 < ABS(*(float *)(param_1 + 0x10) + *(float *)(param_3 + 0x10)) * 1.1920929e-07))
          {
            dVar5 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
            if ((dVar5 < 2.2250738585072014e-308) ||
               (dVar5 < ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) *
                        2.220446049250313e-16)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_10583a524;
              }
              goto LAB_10583a520;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10583a524:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10583a540; end: 10583a547; -[SCNotificationServiceExtensionMapConfigs disableLiveLocationNotificationSuppression] */

undefined1 FUN_10583a540(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10583a548; end: 10583a54f; -[SCNotificationServiceExtensionMapConfigs notificationDelayThreshold] */

undefined8 FUN_10583a548(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10583a550; end: 10583a557; -[SCNotificationServiceExtensionMapConfigs desiredAccuracy] */

undefined8 FUN_10583a550(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10583a558; end: 10583a55f; -[SCNotificationServiceExtensionMapConfigs maxLocationRequestDuration] */

undefined8 FUN_10583a558(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10583a560; end: 10583a567; -[SCNotificationServiceExtensionMapConfigs shouldLogBatteryState] */

undefined1 FUN_10583a560(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10583a568; end: 10583a56f; -[SCNotificationServiceExtensionMapConfigs lpseGrapheneSamplingRate] */

undefined4 FUN_10583a568(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10583a570; end: 10583a577; -[SCNotificationServiceExtensionMapConfigs etag] */

undefined8 FUN_10583a570(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10583a578; end: 10583a57f; -[SCNotificationServiceExtensionMapConfigs useValisStaging] */

undefined1 FUN_10583a578(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10583a580; end: 10583a587; -[SCNotificationServiceExtensionMapConfigs maxStreamingDuration] */

undefined8 FUN_10583a580(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10583a588; end: 10583a58f; -[SCNotificationServiceExtensionMapConfigs publishStreamingBlizzardEvents] */

undefined1 FUN_10583a588(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10583a590; end: 10583a597; -[SCNotificationServiceExtensionMapConfigs isOnboardedToFootsteps] */

undefined1 FUN_10583a590(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 10583a598; end: 10583a59f; -[SCNotificationServiceExtensionMapConfigs useReducedAccuracyForPeriodicPushes] */

undefined1 FUN_10583a598(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 10583a5a0; end: 10583a5ab; -[SCNotificationServiceExtensionMapConfigs .cxx_destruct] */

void FUN_10583a5a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 10583a5ac; end: 10583a64f; -[SCMapPeliasProvider initWithPeliasService:locationProvider:] */

undefined1 *
FUN_10583a5ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea928;
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



/* Entry: 10583a650; end: 10583a82b; -[SCMapPeliasProvider fetchLocationsForRequest:completion:] */

void FUN_10583a650(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be71180();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e069d8;
  lVar2 = param_3;
  func_0x00010c07d860();
  ppuStack_60 = &PTR____CFConstantStringClassReference_110dad378;
  if ((int)lVar2 == 0) {
    ppuStack_60 = &PTR____CFConstantStringClassReference_110dad398;
  }
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bc1b8;
  func_0x000106b13b74(PTR_PTR_1126bc1b8,0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_70,param_1);
  uVar6 = *(undefined8 *)(param_1 + 8);
  puVar5 = auStack_70;
  _objc_copyWeak(auStack_78,puVar5);
  _objc_retain(param_4);
  lVar2 = lVar1;
  func_0x00010c0fd480(uVar6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume();
  _objc_retain(lVar2);
  _objc_retain(puVar5);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  func_0x00010be2dd00();
  _objc_release(lVar2);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10583a82c; end: 10583a897;  */

void FUN_10583a82c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2dd00();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10583a898; end: 10583a947; -[SCMapPeliasProvider _handlePeliasPlaceSearchResponse:error:completion:] */

void FUN_10583a898(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  
  if (param_4 == 0) {
    _objc_retain(param_5);
    func_0x00010bfa3520(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bf43280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    (**(code **)(param_5 + 0x10))(param_5,lVar1,0);
    _objc_release(param_5);
  }
  else {
    pcVar2 = *(code **)(param_5 + 0x10);
    _objc_retain(param_5);
    (*pcVar2)(param_5,0,param_4);
    lVar1 = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10583a948; end: 10583aa6b;  */

void FUN_10583a948(float param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  _objc_retain(param_3);
  uVar5 = param_3;
  func_0x00010c102a80();
  iVar4 = (int)uVar5;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08aca0();
  dVar10 = (double)param_1;
  uVar5 = param_3;
  func_0x00010c102a80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4a40();
  dVar8 = (double)param_1;
  _CLLocationCoordinate2DMake();
  _objc_release(uVar5);
  _objc_release();
  dVar9 = ABS(dVar10);
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (1.1920928955078125e-07 < ABS(dVar8)) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(dVar9)) {
      bVar1 = dVar9 < 1.1920928955078125e-07;
      bVar2 = dVar9 == 1.1920928955078125e-07;
      bVar3 = false;
    }
  }
  if ((bVar2 || bVar1 != bVar3) || (_CLLocationCoordinate2DIsValid(dVar10,dVar8), iVar4 == 0)) {
    puVar7 = (undefined *)0x0;
  }
  else {
    uVar5 = param_3;
    func_0x00010c118b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c087500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar7 = PTR_PTR_1126bf0a0;
    _objc_alloc(PTR_PTR_1126bf0a0);
    func_0x00010bff2620(dVar10,dVar8);
    _objc_release(uVar6);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10583aa6c; end: 10583abef; -[SCMapPeliasProvider _peliasSearchRequestFromRequest:] */

void FUN_10583aa6c(undefined8 param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  double dVar8;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126bf0a8;
  _objc_alloc_init(PTR_PTR_1126bf0a8);
  lVar2 = param_5;
  func_0x00010befd580(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1,param_4,lVar2);
  _objc_release(lVar2);
  lVar2 = param_5;
  func_0x00010c0c2b40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010c1cf360(puVar1,param_4,10);
  }
  else {
    lVar3 = param_5;
    func_0x00010c0c2b40(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c282760();
    func_0x00010c1cf360(puVar1,param_4,lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  lVar2 = param_5;
  func_0x00010bfb3580();
  if ((int)lVar2 != 0) {
    uVar5 = *(undefined8 *)(param_3 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    dVar8 = 60.0;
    uVar5 = uVar6;
    func_0x000107f492b0(0x404e000000000000);
    if ((int)uVar5 != 0) {
      puVar7 = PTR_PTR_1126bf0b0;
      _objc_alloc_init(PTR_PTR_1126bf0b0);
      func_0x00010bf51c80(uVar6);
      func_0x00010c1b9120((float)dVar8,puVar7);
      func_0x00010bf51c80(uVar6);
      func_0x00010c1c0c00((float)param_2,puVar7);
      func_0x00010c19e100(puVar1,param_4,puVar7);
      _objc_release(puVar7);
    }
    _objc_release(uVar6);
  }
  func_0x00010c206c40(puVar1,param_4,2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10583abf0; end: 10583ac1f; -[SCMapPeliasProvider .cxx_destruct] */

void FUN_10583abf0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10583ac20; end: 10583ad03; -[SCMapPeliasServiceProvider provide] */

void FUN_10583ac20(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126bf0b8;
  _objc_alloc(PTR_PTR_1126bf0b8);
  func_0x00010c034880();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10583ad04; end: 10583ad43;  */

void FUN_10583ad04(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be71160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10583ad44; end: 10583aec3; -[SCMapPeliasServiceProvider _peliasProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10583ad44(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  lVar1 = param_1 + _DAT_11272a9a8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf0c120();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c11e0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126bc1b8;
  lVar1 = param_1 + _DAT_11272a9ac;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106b139c8(puVar5,&PTR____CFConstantStringClassReference_110e069f8,lVar4,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11272a9b0);
  *(undefined **)(param_1 + _DAT_11272a9b0) = puVar5;
  _objc_release(uVar7);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126bf0c0;
  _objc_alloc(PTR_PTR_1126bf0c0);
  func_0x00010c058f80();
  puVar6 = PTR_PTR_1126bf0c8;
  _objc_alloc(PTR_PTR_1126bf0c8);
  param_1 = param_1 + _DAT_11272a9b4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0348a0(puVar6);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10583aec4; end: 10583af23; -[SCMapPeliasServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10583aec4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272a9b4);
  _objc_destroyWeak(param_1 + _DAT_11272a9a8);
  _objc_destroyWeak(param_1 + _DAT_11272a9ac);
  _objc_destroyWeak(param_1 + _DAT_11272a9b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272a9b0,0);
  return;
}



/* Entry: 10583af24; end: 10583af97; -[UNISCMPPPeliasProxy initWithUnifiedGrpcService:] */

undefined1 * FUN_10583af24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea930;
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



/* Entry: 10583af98; end: 10583b07b; -[UNISCMPPPeliasProxy reverseGeocodeWithRequest:callOptionsBuilder:handler:] */

void FUN_10583af98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bf0d0;
  _objc_opt_class(PTR_PTR_1126bf0d0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e06a18,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10583b07c; end: 10583b15f; -[UNISCMPPPeliasProxy placeSearchWithRequest:callOptionsBuilder:handler:] */

void FUN_10583b07c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bf0d8;
  _objc_opt_class(PTR_PTR_1126bf0d8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e06a38,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10583b160; end: 10583b16b; -[UNISCMPPPeliasProxy .cxx_destruct] */

void FUN_10583b160(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10583b16c; end: 10583b1e7;  */

undefined * FUN_10583b16c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c0c28 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e06a58,
                        &UNK_10ddbf4b0,&UNK_10ddbf4d8,3,FUN_10583b1e8,0);
    do {
      if (puRam00000001136c0c28 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c0c28;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c0c28,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c0c28 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c0c28;
}



/* Entry: 10583b1e8; end: 10583b1f3;  */

bool FUN_10583b1e8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10583b1f4; end: 10583b25b; +[SCMPPReverseGeocodeRequest descriptor] */

void FUN_10583b1f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0c30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a71c90,
                        &PTR____CFConstantStringClassReference_110e06a78,&PTR_DAT_113105000,
                        &PTR_DAT_113105198,3,0x18,0x1c);
    puRam00000001136c0c30 = puVar1;
  }
  return;
}



/* Entry: 10583b25c; end: 10583b2c3; +[SCMPPReverseGeocodeResponse descriptor] */

void FUN_10583b25c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0c38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a71ce0,
                        &PTR____CFConstantStringClassReference_110e06a98,&PTR_DAT_113105000,
                        &PTR_DAT_113105018,1,0x10,0x1c);
    puRam00000001136c0c38 = puVar1;
  }
  return;
}



/* Entry: 10583b2c4; end: 10583b34f; +[SCMPPReverseGeocodeFeature descriptor] */

undefined * FUN_10583b2c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0c40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a71d30,
                        &PTR____CFConstantStringClassReference_110e06ab8,&PTR_DAT_113105000,
                        &PTR_DAT_113105058,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001136c0c40 = puVar1;
  }
  return puRam00000001136c0c40;
}



/* Entry: 10583b350; end: 10583b3b7; +[SCMPPReverseGeocodeProperties descriptor] */

void FUN_10583b350(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0c48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a71d80,
                        &PTR____CFConstantStringClassReference_110e06ad8,&PTR_DAT_113105000,
                        &PTR_DAT_113105098,2,0x10,0x1c);
    puRam00000001136c0c48 = puVar1;
  }
  return;
}



/* Entry: 10583b3b8; end: 10583b41f; +[SCMPPPlaceSearchRequest descriptor] */

void FUN_10583b3b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0c50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a71dd0,
                        &PTR____CFConstantStringClassReference_110e06af8,&PTR_DAT_113105000,
                        &PTR_s_text_1131051f8,4,0x20,0x1c);
    puRam00000001136c0c50 = puVar1;
  }
  return;
}



/* Entry: 10583b420; end: 10583b487; +[SCMPPPlaceSearchResponse descriptor] */

void FUN_10583b420(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0c58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a71e20,
                        &PTR____CFConstantStringClassReference_110e06b18,&PTR_DAT_113105000,
                        &PTR_DAT_113105038,1,0x10,0x1c);
    puRam00000001136c0c58 = puVar1;
  }
  return;
}



/* Entry: 10583b488; end: 10583b513; +[SCMPPPlaceSearchFeature descriptor] */

undefined * FUN_10583b488(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0c60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a71e70,
                        &PTR____CFConstantStringClassReference_110e06b38,&PTR_DAT_113105000,
                        &PTR_DAT_1131050d8,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001136c0c60 = puVar1;
  }
  return puRam00000001136c0c60;
}



/* Entry: 10583b514; end: 10583b57b; +[SCMPPPlaceSearchProperties descriptor] */

void FUN_10583b514(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0c68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a71ec0,
                        &PTR____CFConstantStringClassReference_110e06b58,&PTR_DAT_113105000,
                        &PTR_DAT_113105118,2,0x10,0x1c);
    puRam00000001136c0c68 = puVar1;
  }
  return;
}



/* Entry: 10583b57c; end: 10583b663; +[SCMPPPoint descriptor] */

void FUN_10583b57c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0c70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a71f10,
                        &PTR____CFConstantStringClassReference_110e06b78,&PTR_DAT_113105000,
                        &PTR_s_lat_113105158,2,0xc,0x1c);
    puRam00000001136c0c70 = puVar1;
  }
  return;
}



/* Entry: 10583b664; end: 10583b8d7; -[SCMapPeopleServiceProvider _mapPeopleFriendsProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10583b664(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  
  puVar1 = PTR_PTR_1126bf0e8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11272a9c0;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_11272a9c4;
  lVar5 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf1a840();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bf85f80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bf1ad00();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar13 = lVar21;
  func_0x00010bf1c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_11272a9c8;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bfb9e20();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_11272a9cc;
  lVar16 = param_1 + lVar20;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + lVar20;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar20;
  _objc_loadWeakRetained();
  lVar20 = param_1;
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff0dc0(puVar1,param_2,lVar4,lVar6,lVar8,lVar10,lVar12,lVar13,lVar15,lVar17,lVar19,
                      lVar20);
  _objc_release(lVar20);
  _objc_release(param_1);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar21);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10583b8d8; end: 10583ba87; -[SCMapPeopleServiceProvider _mapGroupsProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10583b8d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  puVar1 = PTR_PTR_1126bf0f0;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11272a9c0;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11272a9c4;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_11272a9d0;
  lVar9 = param_1 + lVar13;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010bfcf8a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + lVar13;
  _objc_loadWeakRetained(lVar11);
  lVar12 = lVar11;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar13;
  _objc_loadWeakRetained(param_1);
  lVar13 = param_1;
  func_0x00010bfcf900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c007a20(puVar1,param_2,lVar4,lVar8,lVar10,lVar12,lVar13);
  _objc_release(lVar13);
  _objc_release(param_1);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10583ba88; end: 10583bae3; -[SCMapPeopleServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10583ba88(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272a9c4);
  _objc_destroyWeak(param_1 + _DAT_11272a9c8);
  _objc_destroyWeak(param_1 + _DAT_11272a9d0);
  _objc_destroyWeak(param_1 + _DAT_11272a9cc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272a9c0);
  return;
}



/* Entry: 10583bae4; end: 10583bcd7; -[SCMapPeopleGroupsProvider initWithCurrentUserId:usernameObservable:groupsDataCreator:groupsDataFetcher:groupsDataTracker:] */

undefined8 *
FUN_10583bae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126ea938;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar4 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[6];
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    _objc_initWeak(auStack_68,puVar1);
    _objc_copyWeak(auStack_70,auStack_68);
    uVar2 = param_4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10583bcd8; end: 10583bd47;  */

void FUN_10583bcd8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010beda680(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10583bd48; end: 10583bd6f; -[SCMapPeopleGroupsProvider groupsUpdateObservable] */

void FUN_10583bd48(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10583bd70; end: 10583bdb3; -[SCMapPeopleGroupsProvider displayNameForExistingGroupChatContainingPeople:] */

void FUN_10583bd70(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be61260();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfcef60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10583bdb4; end: 10583be83; -[SCMapPeopleGroupsProvider canCreateGroupChatForPeople:] */

bool FUN_10583bdb4(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf529e0();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10583be84;
  puStack_40 = &UNK_1108b7250;
  lVar3 = param_3;
  lStack_38 = param_1;
  func_0x00010bf04920(param_3,param_2,&puStack_58);
  _objc_release(param_3);
  uVar1 = lVar2 + (ulong)((uint)lVar3 ^ 1);
  if (uVar1 < 3) {
    bVar6 = false;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0c2920();
    bVar6 = uVar1 <= uVar5;
    _objc_release(uVar4);
  }
  return bVar6;
}



/* Entry: 10583be84; end: 10583becf;  */

undefined8 FUN_10583be84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10583bed0; end: 10583bf77; -[SCMapPeopleGroupsProvider orderedPeopleForGroupId:] */

void FUN_10583bed0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfc61a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c0ecc20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10583bf78; end: 10583c097;  */

void FUN_10583bf78(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126bf0f8;
    _objc_alloc(PTR_PTR_1126bf0f8);
    lVar1 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c294420(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010c0d5140(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2;
    func_0x00010bf1acc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_2;
    func_0x00010bf1c0a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05bfe0(puVar2);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10583c098; end: 10583c0c7; -[SCMapPeopleGroupsProvider _updateLatestUsername:] */

void FUN_10583c098(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10583c0c8; end: 10583c3e3; -[SCMapPeopleGroupsProvider _mostRecentGroupContainingAllPeople:] */

void FUN_10583c0c8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010bf529e0(param_3);
  func_0x00010bffc4a0(puVar1);
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_1a0;
    do {
      lVar14 = 0;
      do {
        if (*plStack_1a0 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        uVar12 = *(ulong *)(lStack_1a8 + lVar14 * 8);
        uVar3 = uVar12;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        if ((uVar4 & 1) == 0) {
          func_0x00010c2923e0(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(uVar12);
        }
        lVar14 = lVar14 + 1;
      } while (lVar2 != lVar14);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  func_0x00010befa120(puVar1);
  lVar9 = *(long *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  func_0x00010bfc22c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  _objc_retain(lVar2);
  puVar8 = &uStack_1f0;
  lVar9 = lVar2;
  func_0x00010bf52a60();
  if (lVar9 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = 0;
    lVar10 = *plStack_1e0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_1e0 != lVar10) {
          _objc_enumerationMutation(lVar2);
        }
        lVar13 = *(long *)(lStack_1e8 + lVar11 * 8);
        lVar5 = lVar13;
        func_0x00010c0ecc20();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x000108ef5198();
        _objc_release(lVar5);
        puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
        if ((int)lVar6 != 0) {
          if (lVar14 != 0) {
            lVar5 = lVar13;
            func_0x00010c0891c0(lVar13);
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar14;
            func_0x00010c0891c0(lVar14);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c070240();
            _objc_release(lVar6);
            _objc_release(lVar5);
            if ((int)puVar7 == 0) goto LAB_10583c350;
          }
          _objc_retain(lVar13);
          _objc_release(lVar14);
          lVar14 = lVar13;
        }
LAB_10583c350:
        lVar11 = lVar11 + 1;
      } while (lVar9 != lVar11);
      puVar8 = &uStack_1f0;
      lVar9 = lVar2;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
  }
  _objc_release(lVar2);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar14);
    return;
  }
  ___stack_chk_fail();
  if ((undefined8 *)0x3 < puVar8) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x38),PTR_s_next__112614028,param_3);
  return;
}



/* Entry: 10583c3e4; end: 10583c3ff; -[SCMapPeopleGroupsProvider didUpdateGroupsDataRequest:groupId:] */

void FUN_10583c3e4(long param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 4) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x38),PTR_s_next__112614028,param_1);
    return;
  }
  return;
}



/* Entry: 10583c400; end: 10583c46b; -[SCMapPeopleGroupsProvider .cxx_destruct] */

void FUN_10583c400(long param_1)

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



/* Entry: 10583c46c; end: 10583c4d7; -[SCMapPerson firstName] */

void FUN_10583c46c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x00010bf85d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010901e6c8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10583c4d8; end: 10583c52b; -[SCMapPerson guaranteedDisplayName] */

void FUN_10583c4d8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c294420(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10583c52c; end: 10583c66b; -[SCFriendLocationsDataStoreV2 initWithCurrentUserId:circumstanceEngine:loggerQueue:] */

undefined1 *
FUN_10583c52c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ea940;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10583c66c; end: 10583c8c7; -[SCFriendLocationsDataStoreV2 addCluster:] */

void FUN_10583c66c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_320;
  long lStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 auStack_2a0 [128];
  undefined1 auStack_220 [128];
  long lStack_1a0;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_3;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf3e6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c0fa5e0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar1;
    func_0x00010bf529e0();
    if (lVar11 == 0) {
      _objc_release(lVar1);
    }
    else {
      lVar11 = param_3;
      func_0x00010bf3e6e0();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010c08fa60();
      _objc_release(lVar11);
      _objc_release(lVar1);
      if (lVar12 != 0) {
        _os_unfair_lock_lock(param_1 + 0x10);
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        lStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        plStack_120 = (long *)0x0;
        lVar1 = param_3;
        func_0x00010c0fa5e0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bf52a60();
        if (lVar2 != 0) {
          lVar11 = *plStack_120;
          do {
            lVar12 = 0;
            do {
              if (*plStack_120 != lVar11) {
                _objc_enumerationMutation(lVar1);
              }
              lVar7 = *(long *)(lStack_128 + lVar12 * 8);
              lVar5 = lVar7;
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              lVar6 = lVar5;
              func_0x00010c08fa60();
              _objc_release(lVar5);
              if (lVar6 != 0) {
                uVar8 = *(undefined8 *)(param_1 + 0x30);
                lVar5 = lVar7;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(uVar8,param_2,lVar7,lVar5);
                _objc_release(lVar5);
                uVar8 = *(undefined8 *)(param_1 + 0x28);
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(uVar8,param_2,param_3,lVar7);
                _objc_release(lVar7);
              }
              lVar12 = lVar12 + 1;
            } while (lVar2 != lVar12);
            lVar2 = lVar1;
            func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_e8,0x10);
          } while (lVar2 != 0);
        }
        _objc_release(lVar1);
        uVar8 = *(undefined8 *)(param_1 + 0x20);
        lVar1 = param_3;
        func_0x00010bf3e6e0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_3;
        func_0x00010c1d0640(uVar8,param_2,param_3,lVar1);
        _objc_release(lVar1);
        _os_unfair_lock_unlock(param_1 + 0x10);
      }
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar2);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x00010bf3e6e0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar11 != 0) {
      _os_unfair_lock_lock(param_3 + 0x10);
      lVar11 = *(long *)(param_3 + 0x20);
      lVar1 = lVar2;
      func_0x00010bf3e6e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dff20(lVar11,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      if (lVar11 != 0) {
        uStack_2b8 = 0;
        uStack_2c0 = 0;
        uStack_2a8 = 0;
        uStack_2b0 = 0;
        lStack_2d8 = 0;
        uStack_2e0 = 0;
        uStack_2c8 = 0;
        plStack_2d0 = (long *)0x0;
        lVar1 = lVar2;
        func_0x00010c0fa5e0();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar1;
        func_0x00010bf52a60();
        if (lVar12 != 0) {
          lVar5 = *plStack_2d0;
          do {
            lVar6 = 0;
            do {
              if (*plStack_2d0 != lVar5) {
                _objc_enumerationMutation(lVar1);
              }
              lVar9 = *(long *)(lStack_2d8 + lVar6 * 8);
              lVar7 = lVar9;
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              lVar3 = lVar7;
              func_0x00010c08fa60();
              _objc_release(lVar7);
              if (lVar3 != 0) {
                uVar10 = *(undefined8 *)(param_3 + 0x28);
                lVar7 = lVar9;
                func_0x00010c2923e0(lVar9);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0dff20(uVar10,param_2,lVar7);
                _objc_retainAutoreleasedReturnValue();
                uVar8 = uVar10;
                func_0x00010bf3e6e0();
                _objc_retainAutoreleasedReturnValue();
                lVar3 = lVar2;
                func_0x00010bf3e6e0(lVar2);
                _objc_retainAutoreleasedReturnValue();
                uVar4 = uVar8;
                func_0x00010c0720c0(uVar8,param_2,lVar3);
                _objc_release(lVar3);
                _objc_release(uVar8);
                _objc_release(uVar10);
                _objc_release(lVar7);
                if ((int)uVar4 != 0) {
                  uVar8 = *(undefined8 *)(param_3 + 0x30);
                  lVar7 = lVar9;
                  func_0x00010c2923e0(lVar9);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c12d3e0(uVar8,param_2,lVar7);
                  _objc_release(lVar7);
                  uVar8 = *(undefined8 *)(param_3 + 0x28);
                  func_0x00010c2923e0(lVar9);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c12d3e0(uVar8,param_2,lVar9);
                  _objc_release(lVar9);
                }
              }
              lVar6 = lVar6 + 1;
            } while (lVar12 != lVar6);
            lVar12 = lVar1;
            func_0x00010bf52a60(lVar1,param_2,&uStack_2e0,auStack_220,0x10);
          } while (lVar12 != 0);
        }
        _objc_release(lVar1);
        lVar1 = lVar2;
        func_0x00010c081340();
        if ((int)lVar1 != 0) {
          uStack_2f8 = 0;
          uStack_300 = 0;
          uStack_2e8 = 0;
          uStack_2f0 = 0;
          lStack_318 = 0;
          uStack_320 = 0;
          uStack_308 = 0;
          plStack_310 = (long *)0x0;
          lVar1 = lVar11;
          func_0x00010c0fa5e0();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar1;
          func_0x00010bf52a60();
          if (lVar12 != 0) {
            lVar5 = *plStack_310;
            do {
              lVar6 = 0;
              do {
                if (*plStack_310 != lVar5) {
                  _objc_enumerationMutation(lVar1);
                }
                lVar9 = *(long *)(lStack_318 + lVar6 * 8);
                lVar7 = lVar9;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                lVar3 = lVar7;
                func_0x00010c08fa60();
                _objc_release(lVar7);
                if (lVar3 != 0) {
                  uVar10 = *(undefined8 *)(param_3 + 0x28);
                  lVar7 = lVar9;
                  func_0x00010c2923e0(lVar9);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0dff20(uVar10,param_2,lVar7);
                  _objc_retainAutoreleasedReturnValue();
                  uVar8 = uVar10;
                  func_0x00010bf3e6e0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar3 = lVar11;
                  func_0x00010bf3e6e0(lVar11);
                  _objc_retainAutoreleasedReturnValue();
                  uVar4 = uVar8;
                  func_0x00010c0720c0(uVar8,param_2,lVar3);
                  _objc_release(lVar3);
                  _objc_release(uVar8);
                  _objc_release(uVar10);
                  _objc_release(lVar7);
                  if ((int)uVar4 != 0) {
                    uVar8 = *(undefined8 *)(param_3 + 0x30);
                    lVar7 = lVar9;
                    func_0x00010c2923e0(lVar9);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c12d3e0(uVar8,param_2,lVar7);
                    _objc_release(lVar7);
                    uVar8 = *(undefined8 *)(param_3 + 0x28);
                    func_0x00010c2923e0(lVar9);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c12d3e0(uVar8,param_2,lVar9);
                    _objc_release(lVar9);
                  }
                }
                lVar6 = lVar6 + 1;
              } while (lVar12 != lVar6);
              lVar12 = lVar1;
              func_0x00010bf52a60(lVar1,param_2,&uStack_320,auStack_2a0,0x10);
            } while (lVar12 != 0);
          }
          _objc_release(lVar1);
        }
        uVar8 = *(undefined8 *)(param_3 + 0x20);
        lVar1 = lVar2;
        func_0x00010bf3e6e0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3e0(uVar8,param_2,lVar1);
        _objc_release(lVar1);
      }
      _os_unfair_lock_unlock(param_3 + 0x10);
      _objc_release(lVar11);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_lock(lVar2 + 0x10);
  uVar8 = *(undefined8 *)(lVar2 + 0x30);
  func_0x00010c0e00e0(uVar8,param_2,*(undefined8 *)(lVar2 + 8));
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(lVar2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 10583c8c8; end: 10583cd5f; -[SCFriendLocationsDataStoreV2 removeCluster:] */

void FUN_10583c8c8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
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
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bf3e6e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar7 != 0) {
      _os_unfair_lock_lock(param_1 + 0x10);
      lVar7 = *(long *)(param_1 + 0x20);
      lVar1 = param_3;
      func_0x00010bf3e6e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dff20(lVar7,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      if (lVar7 != 0) {
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        lStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_198 = 0;
        plStack_1a0 = (long *)0x0;
        lVar1 = param_3;
        func_0x00010c0fa5e0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bf52a60();
        if (lVar2 != 0) {
          lVar6 = *plStack_1a0;
          do {
            lVar9 = 0;
            do {
              if (*plStack_1a0 != lVar6) {
                _objc_enumerationMutation(lVar1);
              }
              lVar10 = *(long *)(lStack_1a8 + lVar9 * 8);
              lVar3 = lVar10;
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              lVar4 = lVar3;
              func_0x00010c08fa60();
              _objc_release(lVar3);
              if (lVar4 != 0) {
                uVar11 = *(undefined8 *)(param_1 + 0x28);
                lVar3 = lVar10;
                func_0x00010c2923e0(lVar10);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0dff20(uVar11,param_2,lVar3);
                _objc_retainAutoreleasedReturnValue();
                uVar8 = uVar11;
                func_0x00010bf3e6e0();
                _objc_retainAutoreleasedReturnValue();
                lVar4 = param_3;
                func_0x00010bf3e6e0(param_3);
                _objc_retainAutoreleasedReturnValue();
                uVar5 = uVar8;
                func_0x00010c0720c0(uVar8,param_2,lVar4);
                _objc_release(lVar4);
                _objc_release(uVar8);
                _objc_release(uVar11);
                _objc_release(lVar3);
                if ((int)uVar5 != 0) {
                  uVar8 = *(undefined8 *)(param_1 + 0x30);
                  lVar3 = lVar10;
                  func_0x00010c2923e0(lVar10);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c12d3e0(uVar8,param_2,lVar3);
                  _objc_release(lVar3);
                  uVar8 = *(undefined8 *)(param_1 + 0x28);
                  func_0x00010c2923e0(lVar10);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c12d3e0(uVar8,param_2,lVar10);
                  _objc_release(lVar10);
                }
              }
              lVar9 = lVar9 + 1;
            } while (lVar2 != lVar9);
            lVar2 = lVar1;
            func_0x00010bf52a60(lVar1,param_2,&uStack_1b0,auStack_f0,0x10);
          } while (lVar2 != 0);
        }
        _objc_release(lVar1);
        lVar1 = param_3;
        func_0x00010c081340();
        if ((int)lVar1 != 0) {
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          lVar1 = lVar7;
          func_0x00010c0fa5e0();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar1;
          func_0x00010bf52a60();
          if (lVar2 != 0) {
            lVar6 = *plStack_1e0;
            do {
              lVar9 = 0;
              do {
                if (*plStack_1e0 != lVar6) {
                  _objc_enumerationMutation(lVar1);
                }
                lVar10 = *(long *)(lStack_1e8 + lVar9 * 8);
                lVar3 = lVar10;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                lVar4 = lVar3;
                func_0x00010c08fa60();
                _objc_release(lVar3);
                if (lVar4 != 0) {
                  uVar11 = *(undefined8 *)(param_1 + 0x28);
                  lVar3 = lVar10;
                  func_0x00010c2923e0(lVar10);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0dff20(uVar11,param_2,lVar3);
                  _objc_retainAutoreleasedReturnValue();
                  uVar8 = uVar11;
                  func_0x00010bf3e6e0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar4 = lVar7;
                  func_0x00010bf3e6e0(lVar7);
                  _objc_retainAutoreleasedReturnValue();
                  uVar5 = uVar8;
                  func_0x00010c0720c0(uVar8,param_2,lVar4);
                  _objc_release(lVar4);
                  _objc_release(uVar8);
                  _objc_release(uVar11);
                  _objc_release(lVar3);
                  if ((int)uVar5 != 0) {
                    uVar8 = *(undefined8 *)(param_1 + 0x30);
                    lVar3 = lVar10;
                    func_0x00010c2923e0(lVar10);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c12d3e0(uVar8,param_2,lVar3);
                    _objc_release(lVar3);
                    uVar8 = *(undefined8 *)(param_1 + 0x28);
                    func_0x00010c2923e0(lVar10);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c12d3e0(uVar8,param_2,lVar10);
                    _objc_release(lVar10);
                  }
                }
                lVar9 = lVar9 + 1;
              } while (lVar2 != lVar9);
              lVar2 = lVar1;
              func_0x00010bf52a60(lVar1,param_2,&uStack_1f0,auStack_170,0x10);
            } while (lVar2 != 0);
          }
          _objc_release(lVar1);
        }
        uVar8 = *(undefined8 *)(param_1 + 0x20);
        lVar1 = param_3;
        func_0x00010bf3e6e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3e0(uVar8,param_2,lVar1);
        _objc_release(lVar1);
      }
      _os_unfair_lock_unlock(param_1 + 0x10);
      _objc_release(lVar7);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_lock(param_3 + 0x10);
  uVar8 = *(undefined8 *)(param_3 + 0x30);
  func_0x00010c0e00e0(uVar8,param_2,*(undefined8 *)(param_3 + 8));
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_3 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 10583cd60; end: 10583cda7; -[SCFriendLocationsDataStoreV2 currentUserPersonLocation] */

void FUN_10583cd60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0e00e0(uVar1,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10583cda8; end: 10583ce2f; -[SCFriendLocationsDataStoreV2 personLocationClusterForUserId:] */

void FUN_10583cda8(long param_1,undefined8 param_2,long param_3)

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
    _os_unfair_lock_lock(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0dff20(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf51e00();
    _objc_release(uVar2);
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10583ce30; end: 10583ceb7; -[SCFriendLocationsDataStoreV2 friendPersonLocationForUserId:] */

void FUN_10583ce30(long param_1,undefined8 param_2,long param_3)

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
    _os_unfair_lock_lock(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0dff20(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf51e00();
    _objc_release(uVar2);
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10583ceb8; end: 10583cef3; -[SCFriendLocationsDataStoreV2 personLocationClustersByUserId] */

void FUN_10583ceb8(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10583cef4; end: 10583cf2f; -[SCFriendLocationsDataStoreV2 personLocationsByUserId] */

void FUN_10583cef4(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf51e00(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10583cf30; end: 10583cf6b; -[SCFriendLocationsDataStoreV2 personLocationClustersByClusterId] */

void FUN_10583cf30(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf51e00(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10583cf6c; end: 10583cfe3; -[SCFriendLocationsDataStoreV2 allFriendLocations] */

void FUN_10583cf6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_alloc(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf00d20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4020(puVar1,param_2,uVar2,1);
  _objc_release(uVar2);
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10583cfe4; end: 10583d06f; -[SCFriendLocationsDataStoreV2 clearDataStore] */

void FUN_10583cfe4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x10);
  return;
}



/* Entry: 10583d070; end: 10583d0cf; -[SCFriendLocationsDataStoreV2 .cxx_destruct] */

void FUN_10583d070(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10583d0d0; end: 10583d45f;  */

long * FUN_10583d0d0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  long lVar15;
  long in_x5;
  long in_x6;
  long in_x7;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long unaff_x22;
  long unaff_x23;
  long lVar20;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auStack_3a0 [8];
  undefined *puStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined *puStack_380;
  undefined1 auStack_378 [8];
  undefined *puStack_370;
  undefined8 uStack_368;
  code *pcStack_360;
  undefined *puStack_358;
  undefined1 auStack_350 [8];
  undefined *puStack_348;
  undefined8 uStack_340;
  code *pcStack_338;
  undefined *puStack_330;
  undefined1 auStack_328 [8];
  undefined *puStack_320;
  undefined8 uStack_318;
  code *pcStack_310;
  undefined *puStack_308;
  undefined1 auStack_300 [8];
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  code *pcStack_2e8;
  undefined *puStack_2e0;
  undefined1 auStack_2d8 [8];
  undefined1 auStack_2d0 [8];
  long lStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long *plStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined1 *puStack_250;
  code *pcStack_248;
  undefined1 uStack_240;
  undefined7 uStack_23f;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long *plStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_4);
  plVar4 = (long *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0;
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  _objc_retain(param_3);
  puVar13 = &uStack_1c0;
  puVar14 = auStack_100;
  lVar15 = 0x10;
  lStack_210 = param_3;
  func_0x00010bf52a60();
  fVar21 = (float)uVar5;
  if (param_3 != 0) {
    unaff_x22 = *plStack_1b0;
    lStack_228 = unaff_x22;
    plStack_220 = plVar4;
    do {
      unaff_x23 = 0;
      lStack_218 = param_3;
      do {
        if (*plStack_1b0 != unaff_x22) {
          _objc_enumerationMutation(lStack_210);
        }
        unaff_x24 = *(long *)(lStack_1b8 + unaff_x23 * 8);
        lVar15 = unaff_x24;
        func_0x00010c081340();
        if ((int)lVar15 == 0) {
          uVar5 = 0;
          uStack_1d8 = 0;
          uStack_1e0 = 0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          lStack_1f8 = 0;
          uStack_200 = 0;
          uStack_1e8 = 0;
          plStack_1f0 = (long *)0x0;
          unaff_x25 = unaff_x24;
          lStack_208 = unaff_x23;
          func_0x00010c0fa5e0();
          _objc_retainAutoreleasedReturnValue();
          lVar15 = unaff_x25;
          func_0x00010bf52a60();
          if (lVar15 == 0) {
            _objc_release(unaff_x25);
LAB_10583d3b8:
            func_0x00010befa120(plVar4);
            lVar20 = 0;
          }
          else {
            lVar20 = 0;
            lVar16 = *plStack_1f0;
            uVar22 = uVar5;
            uVar23 = param_2;
            do {
              lVar19 = 0;
              do {
                if (*plStack_1f0 != lVar16) {
                  _objc_enumerationMutation(unaff_x25);
                }
                unaff_x27 = *(long *)(lStack_1f8 + lVar19 * 8);
                unaff_x28 = unaff_x27;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                uVar5 = param_4;
                func_0x00010bf4b900();
                _objc_release(unaff_x28);
                if ((int)uVar5 != 0) {
                  if (lVar20 == 0) {
                    lVar6 = unaff_x24;
                    func_0x00010c0fa5e0();
                    _objc_retainAutoreleasedReturnValue();
                    lVar20 = lVar6;
                    func_0x00010c0d3c80();
                    _objc_release(lVar6);
                  }
                  func_0x00010c12d360(lVar20);
                }
                lVar19 = lVar19 + 1;
              } while (lVar15 != lVar19);
              lVar15 = unaff_x25;
              func_0x00010bf52a60();
            } while (lVar15 != 0);
            _objc_release(unaff_x25);
            plVar4 = plStack_220;
            unaff_x22 = lStack_228;
            unaff_x26 = 0;
            uVar5 = uVar22;
            param_2 = uVar23;
            if (lVar20 == 0) goto LAB_10583d3b8;
            lVar15 = lVar20;
            func_0x00010bf529e0();
            uVar5 = uVar22;
            param_2 = uVar23;
            if (lVar15 != 0) {
              puVar7 = PTR_PTR_1126bf100;
              _objc_alloc(PTR_PTR_1126bf100);
              func_0x00010bf51c80(unaff_x24);
              unaff_x25 = unaff_x24;
              func_0x00010bfb2e60();
              _objc_retainAutoreleasedReturnValue();
              unaff_x26 = unaff_x24;
              func_0x00010c118b00();
              _objc_retainAutoreleasedReturnValue();
              unaff_x27 = unaff_x24;
              func_0x00010c0b8f60();
              _objc_retainAutoreleasedReturnValue();
              unaff_x28 = unaff_x24;
              func_0x00010c06fae0();
              func_0x00010bf3e6e0();
              _objc_retainAutoreleasedReturnValue();
              lStack_238 = 0;
              uStack_240 = 0;
              in_x5 = unaff_x27;
              in_x6 = unaff_x28;
              in_x7 = unaff_x24;
              uVar5 = uVar22;
              param_2 = uVar23;
              func_0x00010c035720(puVar7);
              _objc_release(unaff_x24);
              _objc_release(unaff_x27);
              _objc_release(unaff_x26);
              _objc_release(unaff_x25);
              func_0x00010befa120(plVar4);
              _objc_release(puVar7);
              unaff_d8 = uVar22;
              unaff_d9 = uVar23;
            }
          }
          _objc_release(lVar20);
          param_3 = lStack_218;
          unaff_x23 = lStack_208;
        }
        else {
          func_0x00010befa120(plVar4);
        }
        unaff_x23 = unaff_x23 + 1;
      } while (unaff_x23 != param_3);
      puVar13 = &uStack_1c0;
      puVar14 = auStack_100;
      lVar15 = 0x10;
      param_3 = lStack_210;
      func_0x00010bf52a60();
      fVar21 = (float)uVar5;
    } while (param_3 != 0);
  }
  lVar20 = lStack_210;
  _objc_release(lStack_210);
  _objc_release(param_4);
  lVar16 = lVar20;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
    return plVar4;
  }
  ___stack_chk_fail();
  lVar3 = lStack_210;
  lVar2 = lStack_218;
  plVar1 = plStack_220;
  lVar6 = lStack_228;
  lVar19 = lStack_238;
  lStack_258 = lVar20;
  pcStack_248 = FUN_10583d460;
  lVar20 = CONCAT71(uStack_23f,uStack_240);
  uStack_2b0 = unaff_d9;
  uStack_2a8 = unaff_d8;
  lStack_2a0 = unaff_x28;
  lStack_298 = unaff_x27;
  lStack_290 = unaff_x26;
  lStack_288 = unaff_x25;
  lStack_280 = unaff_x24;
  lStack_278 = unaff_x23;
  lStack_270 = unaff_x22;
  plStack_268 = plVar4;
  uStack_260 = param_4;
  puStack_250 = &stack0xfffffffffffffff0;
  _objc_retain(puVar13);
  _objc_retain(puVar14);
  _objc_retain(lVar15);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  _objc_retain(lVar20);
  _objc_retain(lVar19);
  _objc_retain(lStack_230);
  _objc_retain(lVar6);
  _objc_retain(plVar1);
  _objc_retain(lVar2);
  _objc_retain(lVar3);
  puStack_2c0 = PTR_PTR_1126ea948;
  plVar4 = &lStack_2c8;
  lStack_2c8 = lVar16;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  if (plVar4 != (long *)0x0) {
    puVar8 = puVar13;
    func_0x00010bf51e00();
    lVar16 = plVar4[1];
    plVar4[1] = (long)puVar8;
    _objc_release(lVar16);
    _objc_retain(puVar14);
    lVar16 = plVar4[2];
    plVar4[2] = (long)puVar14;
    _objc_release(lVar16);
    _objc_retain(lVar15);
    lVar16 = plVar4[3];
    plVar4[3] = lVar15;
    _objc_release(lVar16);
    _objc_retain(in_x5);
    lVar16 = plVar4[4];
    plVar4[4] = in_x5;
    _objc_release(lVar16);
    _objc_retain(in_x6);
    lVar16 = plVar4[5];
    plVar4[5] = in_x6;
    _objc_release(lVar16);
    _objc_retain(in_x7);
    lVar16 = plVar4[6];
    plVar4[6] = in_x7;
    _objc_release(lVar16);
    _objc_retain(lVar20);
    lVar16 = plVar4[7];
    plVar4[7] = lVar20;
    _objc_release(lVar16);
    _objc_retain(lVar19);
    lVar16 = plVar4[8];
    plVar4[8] = lVar19;
    _objc_release(lVar16);
    _objc_retain(lVar6);
    lVar16 = plVar4[9];
    plVar4[9] = lVar6;
    _objc_release(lVar16);
    _objc_retain(plVar1);
    lVar16 = plVar4[10];
    plVar4[10] = (long)plVar1;
    _objc_release(lVar16);
    puVar7 = PTR_PTR_1126bf108;
    _objc_alloc_init();
    lVar16 = plVar4[0xb];
    plVar4[0xb] = (long)puVar7;
    _objc_release(lVar16);
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = plVar4[0x1e];
    plVar4[0x1e] = (long)puVar7;
    _objc_release(lVar16);
    puVar7 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    lVar16 = plVar4[0x13];
    plVar4[0x13] = (long)puVar7;
    _objc_release(lVar16);
    _objc_release(puVar9);
    puVar7 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    lVar16 = plVar4[0x19];
    plVar4[0x19] = (long)puVar7;
    _objc_release(lVar16);
    puVar7 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    lVar16 = plVar4[0x12];
    plVar4[0x12] = (long)puVar7;
    _objc_release(lVar16);
    *(undefined4 *)(plVar4 + 0x18) = 0;
    puVar7 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x00010c2a2b60();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = plVar4[0x1a];
    plVar4[0x1a] = (long)puVar7;
    _objc_release(lVar16);
    lVar16 = lVar2;
    func_0x00010bf05fe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090222f0();
    plVar4[0x1f] = (long)(double)fVar21;
    lVar10 = lVar16;
    func_0x0001090222dc();
    *(char *)(plVar4 + 0x20) = (char)lVar10;
    _objc_initWeak(auStack_2d0,plVar4);
    lVar11 = plVar4[9];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar11;
    func_0x00010c25c480();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar10;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_2f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2f0 = 0xc2000000;
    pcStack_2e8 = FUN_10583dc24;
    puStack_2e0 = &UNK_110842a38;
    _objc_copyWeak(auStack_2d8,auStack_2d0);
    lVar18 = lVar12;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = plVar4[0x10];
    plVar4[0x10] = lVar18;
    _objc_release(lVar17);
    _objc_release(lVar12);
    _objc_release(lVar10);
    _objc_release(lVar11);
    lVar12 = plVar4[4];
    func_0x00010c09f820();
    _objc_retainAutoreleasedReturnValue();
    puStack_320 = puVar7;
    uStack_318 = 0xc2000000;
    pcStack_310 = FUN_10583dc84;
    puStack_308 = &UNK_11085fbf8;
    _objc_copyWeak(auStack_300,auStack_2d0);
    lVar10 = lVar12;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = plVar4[0xc];
    plVar4[0xc] = lVar10;
    _objc_release(lVar18);
    _objc_release(lVar12);
    lVar12 = plVar4[5];
    func_0x00010bfba660();
    _objc_retainAutoreleasedReturnValue();
    puStack_348 = puVar7;
    uStack_340 = 0xc2000000;
    pcStack_338 = FUN_10583dd5c;
    puStack_330 = &UNK_1108b7300;
    _objc_copyWeak(auStack_328,auStack_2d0);
    lVar10 = lVar12;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = plVar4[0xd];
    plVar4[0xd] = lVar10;
    _objc_release(lVar18);
    _objc_release(lVar12);
    lVar10 = lStack_230;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar10;
    func_0x00010c0d41e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_370 = puVar7;
    uStack_368 = 0xc2000000;
    pcStack_360 = FUN_10583de44;
    puStack_358 = &UNK_11086a720;
    _objc_copyWeak(auStack_350,auStack_2d0);
    lVar18 = lVar12;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = plVar4[0x14];
    plVar4[0x14] = lVar18;
    _objc_release(lVar11);
    _objc_release(lVar12);
    _objc_release(lVar10);
    lVar12 = lVar3;
    func_0x00010bf75dc0();
    _objc_retainAutoreleasedReturnValue();
    puStack_398 = puVar7;
    uStack_390 = 0xc2000000;
    uStack_388 = 0x10583de8c;
    puStack_380 = &UNK_110846510;
    _objc_copyWeak(auStack_378,auStack_2d0);
    lVar10 = lVar12;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = plVar4[0xf];
    plVar4[0xf] = lVar10;
    _objc_release(lVar18);
    _objc_release(lVar12);
    lVar10 = lVar3;
    func_0x00010bf72840();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_3a0,auStack_2d0);
    lVar12 = lVar10;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = plVar4[0x11];
    plVar4[0x11] = lVar12;
    _objc_release(lVar18);
    _objc_release(lVar10);
    _objc_destroyWeak(auStack_3a0);
    _objc_destroyWeak(auStack_378);
    _objc_destroyWeak(auStack_350);
    _objc_destroyWeak(auStack_328);
    _objc_destroyWeak(auStack_300);
    _objc_destroyWeak(auStack_2d8);
    _objc_destroyWeak(auStack_2d0);
    _objc_release(lVar16);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(plVar1);
  _objc_release(lVar6);
  _objc_release(lStack_230);
  _objc_release(lVar19);
  _objc_release(lVar20);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(lVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  return plVar4;
}



/* Entry: 10583d460; end: 10583dc23; -[SCMapBasePersonLocationsProviderV2 initWithUserId:systemScope:friendLocationsDataStore:locationProvider:mapPeopleFriendsProvider:mapStatusStore:friendsFinderRequestService:mapUserPreferences:locationMutingService:valisService:internalPerformerQueue:circumstanceEngine:applicationLifecycleEvents:] */

undefined8 *
FUN_10583d460(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
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
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_80 = PTR_PTR_1126ea948;
  puVar1 = &uStack_88;
  uStack_88 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar7 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar7);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[9];
    puVar1[9] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[10];
    puVar1[10] = param_14;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bf108;
    _objc_alloc_init();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[0x19];
    puVar1[0x19] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = puVar1[0x12];
    puVar1[0x12] = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 0x18) = 0;
    puVar3 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x00010c2a2b60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_15;
    func_0x00010bf05fe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090222f0();
    puVar1[0x1f] = (double)param_1;
    uVar7 = uVar2;
    func_0x0001090222dc();
    *(char *)(puVar1 + 0x20) = (char)uVar7;
    _objc_initWeak(auStack_90,puVar1);
    uVar5 = puVar1[9];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c25c480();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10583dc24;
    puStack_a0 = &UNK_110842a38;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar9 = uVar6;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar1[0x10];
    puVar1[0x10] = uVar9;
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar7);
    _objc_release(uVar5);
    uVar6 = puVar1[4];
    func_0x00010c09f820();
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = puVar3;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_10583dc84;
    puStack_c8 = &UNK_11085fbf8;
    _objc_copyWeak(auStack_c0,auStack_90);
    uVar7 = uVar6;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar1[0xc];
    puVar1[0xc] = uVar7;
    _objc_release(uVar9);
    _objc_release(uVar6);
    uVar6 = puVar1[5];
    func_0x00010bfba660();
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puVar3;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_10583dd5c;
    puStack_f0 = &UNK_1108b7300;
    _objc_copyWeak(auStack_e8,auStack_90);
    uVar7 = uVar6;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar1[0xd];
    puVar1[0xd] = uVar7;
    _objc_release(uVar9);
    _objc_release(uVar6);
    uVar7 = param_12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010c0d41e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_130 = puVar3;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_10583de44;
    puStack_118 = &UNK_11086a720;
    _objc_copyWeak(auStack_110,auStack_90);
    uVar9 = uVar6;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x14];
    puVar1[0x14] = uVar9;
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar7);
    uVar6 = param_16;
    func_0x00010bf75dc0();
    _objc_retainAutoreleasedReturnValue();
    puStack_158 = puVar3;
    uStack_150 = 0xc2000000;
    uStack_148 = 0x10583de8c;
    puStack_140 = &UNK_110846510;
    _objc_copyWeak(auStack_138,auStack_90);
    uVar7 = uVar6;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar1[0xf];
    puVar1[0xf] = uVar7;
    _objc_release(uVar9);
    _objc_release(uVar6);
    uVar6 = param_16;
    func_0x00010bf72840();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_160,auStack_90);
    uVar7 = uVar6;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar1[0x11];
    puVar1[0x11] = uVar7;
    _objc_release(uVar9);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_160);
    _objc_destroyWeak(auStack_138);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
    _objc_release(uVar2);
  }
  _objc_release(param_16);
  _objc_release(param_15);
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
  return puVar1;
}



/* Entry: 10583dc24; end: 10583dc83;  */

void FUN_10583dc24(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010bec53a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10583dc84; end: 10583dd2f;  */

void FUN_10583dc84(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd800(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10583dd30; end: 10583dd5b;  */

void FUN_10583dd30(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c09f340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10583dd5c; end: 10583de0f;  */

void FUN_10583dd5c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd7c0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10583de10; end: 10583de13;  */

void FUN_10583de10(void)

{
  return;
}



/* Entry: 10583de14; end: 10583de3f;  */

void FUN_10583de14(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1288e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10583de40; end: 10583de43;  */

void FUN_10583de40(void)

{
  return;
}



/* Entry: 10583de44; end: 10583deff;  */

void FUN_10583de44(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be01720();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10583df00; end: 10583df43; -[SCMapBasePersonLocationsProviderV2 dealloc] */

void FUN_10583df00(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bec39a0();
  puStack_28 = PTR_PTR_1126ea948;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10583df44; end: 10583e07f; -[SCMapBasePersonLocationsProviderV2 _scheduleReload] */

void FUN_10583df44(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126aeec0;
  puVar3 = PTR_PTR_1126ae960;
  puVar2 = PTR_PTR_1126bf070;
  func_0x00010c09f540(PTR_PTR_1126bf070);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b8600(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae970;
  func_0x00010c0c7320(PTR_PTR_1126ae970);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf0caa0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}


