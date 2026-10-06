/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105f36f60; end: 105f3700b;  */

void FUN_105f36f60(double param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_2 + 0x38;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf79140();
  _objc_release(lVar2);
  func_0x00010bf940a0(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x28));
  lVar2 = *(long *)(*(long *)(param_2 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  _objc_release(uVar1);
  _CACurrentMediaTime();
  lVar2 = param_2 + 0x40;
  _objc_loadWeakRetained(lVar2);
  FUN_105f3c96c(param_1 - *(double *)(param_2 + 0x48));
  _objc_release(lVar2);
  func_0x00010c281a60(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x30) + 8) + 0x28));
  lVar2 = *(long *)(*(long *)(param_2 + 0x30) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f3700c; end: 105f370af;  */

void FUN_105f3700c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  _objc_copyWeak(param_1 + 0x38,param_2 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x40,param_2 + 0x40);
  return;
}



/* Entry: 105f370b0; end: 105f372c3; -[SCMapSDKDataBridge _createUnaryPeopleLocationsRequestBuilderWithPersonLocationProvider:statusService:activeUserID:mapLoadTracker:] */

void FUN_105f370b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_3;
  func_0x00010bfd7a20();
  if ((int)uVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126bf2c8;
    _objc_alloc();
    uVar1 = param_3;
    func_0x00010bf00640(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfff460();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_initWeak(auStack_68,param_3);
  uVar1 = param_3;
  func_0x00010c09fa60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  if (puVar3 != (undefined *)0x0) {
    func_0x00010c2519e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  func_0x00010bdf11e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105f372c4; end: 105f37353;  */

void FUN_105f372c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126bf2c8;
  _objc_alloc(PTR_PTR_1126bf2c8);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf00640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfff460(puVar1,param_2,lVar3,1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f37354; end: 105f374ab; -[SCMapSDKDataBridge _createPeopleLocationRequestBuilderWithObservable:statusService:activeUserID:andDoOnFirstLocationUpdate:] */

void FUN_105f37354(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  puVar1 = PTR_PTR_1126c61b0;
  _objc_alloc(PTR_PTR_1126c61b0);
  func_0x00010bdf1200(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  func_0x00010c030a80(puVar1);
  _objc_release(param_6);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f374ac; end: 105f3751f;  */

void FUN_105f374ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  if ((*(byte *)(lVar2 + 0x18) & 1) == 0) {
    *(undefined1 *)(lVar2 + 0x18) = 1;
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
  }
  puVar1 = PTR_PTR_1126b1de8;
  _objc_alloc_init(PTR_PTR_1126b1de8);
  func_0x00010c1a0740();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f37520; end: 105f3760f; -[SCMapSDKDataBridge _createPeopleLocationsConverterWithStatusService:activeUserID:] */

void FUN_105f37520(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126c61e0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  puVar2 = PTR_PTR_1126c61e8;
  _objc_alloc(PTR_PTR_1126c61e8);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0b9240(uVar3);
  func_0x00010bfefe20(puVar2,param_2,puVar1,param_3,param_4,0,uVar3,*(undefined8 *)(param_1 + 0x20))
  ;
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126c61f0;
  _objc_alloc(PTR_PTR_1126c61f0);
  func_0x00010bfff400();
  puVar5 = PTR_PTR_1126c61f8;
  _objc_alloc(PTR_PTR_1126c61f8);
  func_0x00010bfff3c0();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105f37610; end: 105f376b3; -[SCMapSDKDataBridge _createFriendFeedRequestBuilderWithFriendsFeedDataCoordinator:] */

void FUN_105f37610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c61b0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bfba080(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bdedee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c030a80(puVar1,param_2,uVar2,param_1,&PTR___NSConcreteGlobalBlock_1108f9e80);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f376b4; end: 105f376ff;  */

void FUN_105f376b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1de8;
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  func_0x00010c19fcc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f37700; end: 105f37773; -[SCMapSDKDataBridge _createFriendFeedUpdateConverter] */

void FUN_105f37700(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c6200;
  _objc_alloc_init(PTR_PTR_1126c6200);
  puVar2 = PTR_PTR_1126c6208;
  _objc_alloc(PTR_PTR_1126c6208);
  func_0x00010c04d360();
  puVar3 = PTR_PTR_1126c6210;
  _objc_alloc(PTR_PTR_1126c6210);
  func_0x00010c015540();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105f37774; end: 105f378f7; -[SCMapSDKDataBridge _createSharingPreferencesRequestBuilderWithSharingPreferencesProvider:] */

void FUN_105f37774(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae6b8;
  if (puVar1 == (undefined *)0x0) {
    puVar5 = param_3;
    func_0x00010c1067e0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010c1067e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cab40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126c61b0;
  _objc_alloc(PTR_PTR_1126c61b0);
  puVar3 = PTR_PTR_1126c6218;
  _objc_alloc_init(PTR_PTR_1126c6218);
  func_0x00010c030a80(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126b1de8;
    _objc_retain(param_2);
    _objc_alloc_init(puVar2);
    func_0x00010c1bfca0();
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f378f8; end: 105f37943;  */

void FUN_105f378f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1de8;
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  func_0x00010c1bfca0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f37944; end: 105f379df; -[SCMapSDKDataBridge _createNotificationsPermissionRequestBuilderWithStatusRetriever:] */

void FUN_105f37944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c61b0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0dc420(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126c6220;
  _objc_alloc_init(PTR_PTR_1126c6220);
  func_0x00010c030a80(puVar1,param_2,uVar2,puVar3,&PTR___NSConcreteGlobalBlock_1108f9f00);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f379e0; end: 105f37a2b;  */

void FUN_105f379e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1de8;
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  func_0x00010c18cc60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f37a2c; end: 105f37bf3; -[SCMapSDKDataBridge _createLocationPermissionRequestBuilderWithLocationPermissionManager:] */

void FUN_105f37a2c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105f37bf4;
  puStack_80 = &UNK_110841f80;
  lStack_78 = param_3;
  puStack_70 = puVar1;
  _objc_retain();
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_98);
  puVar2 = PTR_PTR_1126c61b0;
  _objc_alloc();
  puVar6 = PTR_PTR_1126ae6b8;
  lVar3 = param_3;
  puStack_68 = puVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0f9ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_60 = lVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cab40(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c6228;
  _objc_alloc(PTR_PTR_1126c6228);
  func_0x00010c026dc0();
  func_0x00010c030a80();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puStack_70);
  _objc_release(lStack_78);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09eaa0();
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_3 + 0x28);
  puVar6 = PTR_PTR_1126bc348;
  func_0x00010bf7e420(PTR_PTR_1126bc348);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 105f37bf4; end: 105f37c6b;  */

void FUN_105f37bf4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09eaa0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puVar3 = PTR_PTR_1126bc348;
  func_0x00010bf7e420(PTR_PTR_1126bc348,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105f37c6c; end: 105f37cb7;  */

void FUN_105f37c6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1de8;
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  func_0x00010c18cc60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f37cb8; end: 105f37e83; -[SCMapSDKDataBridge _createLocationPermissionRequestBuilderWithUserLocationPermissionManager:] */

void FUN_105f37cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105f37e84;
  puStack_80 = &UNK_110841f80;
  puStack_78 = puVar1;
  uStack_70 = param_3;
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x000100162d98("APPSTORE",&puStack_98);
  puVar2 = PTR_PTR_1126c61b0;
  _objc_alloc();
  puVar6 = PTR_PTR_1126ae6b8;
  uVar3 = param_3;
  puStack_68 = puVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0f9ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cab40(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c6230;
  _objc_alloc(PTR_PTR_1126c6230);
  func_0x00010c026dc0();
  func_0x00010c030a80();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uStack_70);
  _objc_release(puStack_78);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR_PTR_1126bc370;
  uVar3 = *(undefined8 *)(puVar1 + 0x20);
  uVar4 = *(undefined8 *)(puVar1 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf10fa0();
  func_0x00010bf7e040(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105f37e84; end: 105f37ef3;  */

void FUN_105f37e84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_1126bc370;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf10fa0();
  func_0x00010bf7e040(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105f37ef4; end: 105f37f3f;  */

void FUN_105f37ef4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1de8;
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  func_0x00010c18cc60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f37f40; end: 105f37fdb; -[SCMapSDKDataBridge _createMutedFriendsRequestBuilderWithMutingService:] */

void FUN_105f37f40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c61b0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0d41e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126c6238;
  _objc_alloc_init(PTR_PTR_1126c6238);
  func_0x00010c030a80(puVar1,param_2,uVar2,puVar3,&PTR___NSConcreteGlobalBlock_1108f9f80);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f37fdc; end: 105f38027;  */

void FUN_105f37fdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1de8;
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  func_0x00010c1ca6e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f38028; end: 105f381ab; -[SCMapSDKDataBridge _createBitmojiAvatarIDRequestBuilderWithBitmojiAvatarIDProvider:] */

void FUN_105f38028(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae6b8;
  if (puVar1 == (undefined *)0x0) {
    puVar5 = param_3;
    func_0x00010bf12ee0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010bf12ee0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cab40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126c61b0;
  _objc_alloc(PTR_PTR_1126c61b0);
  puVar3 = PTR_PTR_1126c6240;
  _objc_alloc_init(PTR_PTR_1126c6240);
  func_0x00010c030a80(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126b1de8;
    _objc_retain(param_2);
    _objc_alloc_init(puVar2);
    func_0x00010c187de0();
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f381ac; end: 105f381f7;  */

void FUN_105f381ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1de8;
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  func_0x00010c187de0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f381f8; end: 105f3837f; -[SCMapSDKDataBridge _createBitmojiPoseOverrideRequestBuilderWithStatusFetcher:locationProvider:] */

void FUN_105f381f8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c253580(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf00500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar1;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  if (lVar3 != 0) {
    func_0x00010c2519e0(lVar2,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  func_0x00010bdef9c0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf41860(lVar1,param_2,param_1,&PTR___NSConcreteGlobalBlock_1108fa040);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c61b0;
  _objc_alloc(PTR_PTR_1126c61b0);
  puVar5 = PTR_PTR_1126c6250;
  _objc_alloc_init(PTR_PTR_1126c6250);
  func_0x00010c030a80(puVar4,param_2,lVar2,puVar5,&PTR___NSConcreteGlobalBlock_1108fa080);
  _objc_release(puVar5);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105f38380; end: 105f38463;  */

void FUN_105f38380(undefined8 param_1,undefined8 param_2)

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
  pcStack_38 = FUN_105f36f48;
  uStack_30 = 0x105f36f58;
  uStack_28 = 0;
  func_0x00010c0bd5c0(param_2);
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



/* Entry: 105f38464; end: 105f38467;  */

void FUN_105f38464(void)

{
  return;
}



/* Entry: 105f38468; end: 105f3849f;  */

void FUN_105f38468(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f384a0; end: 105f3850b;  */

void FUN_105f384a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c6248;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c02d1c0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f3850c; end: 105f38557;  */

void FUN_105f3850c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1de8;
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  func_0x00010c187f60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f38558; end: 105f387e3; -[SCMapSDKDataBridge _createTravelStatusRequestBuilderWithStatusService:] */

void FUN_105f38558(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined *puStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
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
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_90,param_3);
  lVar1 = param_3;
  func_0x00010c253580();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105f387e4;
  puStack_a0 = &UNK_1108fa0c0;
  _objc_copyWeak(auStack_98,auStack_90);
  lVar2 = lVar1;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c2535e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = puVar5;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_105f38948;
  puStack_c8 = &UNK_1108fa0f0;
  puVar6 = auStack_90;
  _objc_copyWeak(auStack_c0,puVar6);
  lVar3 = lVar1;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar7 = PTR_PTR_1126c61b0;
  _objc_alloc();
  puVar5 = PTR_PTR_1126ae6b8;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_88 = lVar2;
  lStack_80 = lVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cab40(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bded820(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c030a80();
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_c0);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
    lVar1 = param_3;
    __Unwind_Resume(param_3);
    pcStack_e8 = FUN_105f387e4;
    lStack_110 = lVar3;
    puStack_108 = puVar7;
    lStack_100 = lVar2;
    lStack_f8 = param_3;
    puStack_f0 = &stack0xfffffffffffffff0;
    _objc_retain(puVar6);
    puStack_138 = &uStack_140;
    uStack_140 = 0;
    uStack_130 = 0x3032000000;
    pcStack_128 = FUN_105f36f48;
    uStack_120 = 0x105f36f58;
    uStack_118 = 0;
    _objc_copyWeak(auStack_148,lVar1 + 0x20);
    func_0x00010c0bd5c0(puVar6);
    puVar7 = (undefined *)puStack_138[5];
    _objc_retain(puVar7);
    _objc_destroyWeak(auStack_148);
    __Block_object_dispose(&uStack_140,8);
    _objc_release(uStack_118);
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105f387e4; end: 105f388f3;  */

void FUN_105f387e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105f36f48;
  uStack_40 = 0x105f36f58;
  uStack_38 = 0;
  _objc_copyWeak(auStack_68,param_1 + 0x20);
  func_0x00010c0bd5c0(param_2);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_destroyWeak(auStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f388f4; end: 105f38943;  */

void FUN_105f388f4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0dba20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f38944; end: 105f38947;  */

void FUN_105f38944(void)

{
  return;
}



/* Entry: 105f38948; end: 105f389d3;  */

void FUN_105f38948(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0dba20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105f389d4; end: 105f38a57; -[SCMapSDKDataBridge _createExploreUpdateConverter] */

void FUN_105f389d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c6258;
  _objc_alloc(PTR_PTR_1126c6258);
  puVar2 = PTR_PTR_1126c6260;
  _objc_alloc(PTR_PTR_1126c6260);
  puVar3 = PTR_PTR_1126c6268;
  _objc_alloc_init(PTR_PTR_1126c6268);
  func_0x00010c04c4a0(puVar2,param_2,puVar3);
  func_0x00010c0111c0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f38a58; end: 105f38cbf; -[SCMapSDKDataBridge _createBestFriendEmojiRequestBuilderWithFriendmojiRegistry:] */

void FUN_105f38a58(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  puVar4 = puVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar2);
      }
      lVar5 = param_3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf8e420();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      if (lVar6 != 0) {
        func_0x00010c1d0640(puVar3);
      }
      _objc_release(lVar6);
      puVar8 = puVar8 + 1;
    } while (puVar4 != puVar8);
    puVar4 = puVar2;
    func_0x00010bf52a60();
  }
  _objc_release(puVar2);
  puVar4 = PTR_PTR_1126c61b0;
  _objc_alloc();
  puVar8 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdee000(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c030a80();
  _objc_release(param_1);
  _objc_release(puVar8);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    puVar4 = PTR_PTR_1126b1de8;
    _objc_retain(param_2);
    _objc_alloc_init(puVar4);
    func_0x00010c1946a0();
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105f38cc0; end: 105f38d0b;  */

void FUN_105f38cc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1de8;
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  func_0x00010c1946a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f38d0c; end: 105f38d27; -[SCMapSDKDataBridge _createFriendmojiConverter] */

void FUN_105f38d0c(void)

{
  _objc_alloc_init(PTR_PTR_1126c6270);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f38d28; end: 105f38f77; -[SCMapSDKDataBridge _createWidgetDataRequestBuilderWithUserPreferences:homeScreenWidgetUpdater:] */

void FUN_105f38d28(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    puVar1 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    lVar2 = param_3;
    func_0x00010bfdbd00();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105f38f78;
    puStack_68 = &UNK_110857498;
    uStack_58 = (undefined1)lVar2;
    _objc_retain(puVar1);
    puStack_60 = puVar1;
    func_0x00010bfc6840(param_4);
    _objc_retain(puVar1);
    _objc_initWeak(auStack_88,puVar1);
    _objc_initWeak(auStack_90,param_4);
    lVar2 = param_3;
    func_0x00010c2a4e60(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a0,auStack_90);
    _objc_copyWeak(auStack_98,auStack_88);
    func_0x00010c25ff60(lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_release(puStack_60);
    _objc_release(puVar1);
    if (puVar1 != (undefined *)0x0) goto LAB_105f38ec8;
  }
  puVar1 = PTR_PTR_1126ae6b8;
  puVar3 = PTR_PTR_1126c6278;
  _objc_alloc(PTR_PTR_1126c6278);
  func_0x00010c01fc20();
  func_0x00010c0860a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
LAB_105f38ec8:
  puVar3 = PTR_PTR_1126c61b0;
  _objc_alloc(PTR_PTR_1126c61b0);
  puVar4 = PTR_PTR_1126c6280;
  _objc_alloc_init(PTR_PTR_1126c6280);
  func_0x00010c030a80(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105f38f78; end: 105f38fc7;  */

void FUN_105f38f78(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c6278;
  _objc_alloc(PTR_PTR_1126c6278);
  func_0x00010c01fc20();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f38fc8; end: 105f3908f;  */

void FUN_105f38fc8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf1f3c0();
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  uStack_38 = (undefined1)uVar1;
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  func_0x00010bfc6840(lVar2);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 105f39090; end: 105f3913b;  */

void FUN_105f39090(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c6278;
  _objc_alloc(PTR_PTR_1126c6278);
  func_0x00010c01fc20();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0d9840();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f3913c; end: 105f3927b; -[SCMapSDKDataBridge _createHomeWorkRequestBuilderWithFeatureSettingsService:] */

void FUN_105f3913c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = param_3;
  func_0x00010bfe4000(param_3);
  func_0x00010c0df6e0(puVar2,param_2,(uint)uVar1 ^ 1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae6b8;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105f3927c;
  puStack_50 = &UNK_11088e668;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010bf54280(puVar3,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2519e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c61b0;
  _objc_alloc(PTR_PTR_1126c61b0);
  puVar5 = PTR_PTR_1126c6288;
  _objc_alloc_init(PTR_PTR_1126c6288);
  func_0x00010c030a80(puVar3,param_2,puVar4,puVar5,&PTR___NSConcreteGlobalBlock_1108fa230);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105f3927c; end: 105f39433;  */

void FUN_105f3927c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  _objc_initWeak(auStack_68,param_2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x15;
  _dispatch_get_global_queue(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c0e0c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f39434; end: 105f394ef;  */

void FUN_105f39434(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0dff20(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
  func_0x00010bf1f3c0(uVar1);
  _objc_release(uVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f394f0; end: 105f394f7;  */

void FUN_105f394f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c281a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_unobserve_11267e0c0);
  return;
}



/* Entry: 105f394f8; end: 105f39543;  */

void FUN_105f394f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1de8;
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  func_0x00010c1670c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f39544; end: 105f39683; -[SCMapSDKDataBridge _createInferredSchoolOnboardingRequestBuilderWithFeatureSettingsService:] */

void FUN_105f39544(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = param_3;
  func_0x00010c0b9240(param_3);
  func_0x00010c0df6e0(puVar2,param_2,(uint)uVar1 ^ 1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae6b8;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105f39684;
  puStack_50 = &UNK_11088e668;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010bf54280(puVar3,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2519e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c61b0;
  _objc_alloc(PTR_PTR_1126c61b0);
  puVar5 = PTR_PTR_1126c6290;
  _objc_alloc_init(PTR_PTR_1126c6290);
  func_0x00010c030a80(puVar3,param_2,puVar4,puVar5,&PTR___NSConcreteGlobalBlock_1108fa250);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105f39684; end: 105f3983b;  */

void FUN_105f39684(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  _objc_initWeak(auStack_68,param_2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x15;
  _dispatch_get_global_queue(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c0e0c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f3983c; end: 105f398f7;  */

void FUN_105f3983c(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0dff20(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
  func_0x00010bf1f3c0(uVar1);
  _objc_release(uVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f398f8; end: 105f398ff;  */

void FUN_105f398f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c281a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_unobserve_11267e0c0);
  return;
}



/* Entry: 105f39900; end: 105f3994b;  */

void FUN_105f39900(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1de8;
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  func_0x00010c167120();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f3994c; end: 105f39b6b; -[SCMapSDKDataBridge _createStickerOverrideRequestBuilderWithStatusFetcher:] */

undefined * FUN_105f3994c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar4 = PTR_PTR_1126ae6b8;
  uVar2 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf00420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c253580();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105f39c44;
  puStack_78 = &UNK_1108fa2d0;
  uStack_70 = param_3;
  _objc_retain(param_3);
  uVar6 = uVar5;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar7 = PTR_PTR_1126c61b0;
  _objc_alloc(PTR_PTR_1126c61b0);
  puVar9 = PTR_PTR_1126ae6b8;
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_68 = puVar4;
  uStack_60 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cab40(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c6298;
  _objc_alloc_init(PTR_PTR_1126c6298);
  func_0x00010c030a80(puVar7);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar6);
  _objc_release(uStack_70);
  _objc_release(param_3);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_105f39b6c;
  puStack_b0 = puVar4;
  uStack_a8 = param_3;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x2020000000;
  uStack_b8 = 0;
  func_0x00010c0bd5c0(param_2);
  bVar1 = *(byte *)(puStack_c8 + 3);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(param_2);
  return (undefined *)(ulong)bVar1;
}



/* Entry: 105f39b6c; end: 105f39c2b;  */

undefined1 FUN_105f39b6c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_2);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bd5c0(param_2);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105f39c2c; end: 105f39c43;  */

void FUN_105f39c2c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105f39c44; end: 105f39cd7;  */

void FUN_105f39c44(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf00420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105f39cd8; end: 105f3a02b; -[SCMapSDKDataBridge _createPublicUserInfoRequestBuilderWithSnapchatterRepository:snapchatterDataFetcher:activeUserID:usernameProvider:displayNameProvider:bitmojiAvatarIDProvider:bitmojiSelfieIDProvider:] */

void FUN_105f39cd8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc();
  lVar2 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520();
  _objc_release(lVar2);
  fVar12 = 10.0;
  func_0x00010bfb2cc0(*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126ae6b8;
  _objc_retain(puVar1);
  _objc_retain(param_4);
  func_0x00010bf54280();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar10 = uVar9;
  func_0x00010c0d4340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  puVar5 = PTR_PTR_1126ae6b8;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cab40(puVar5);
  _objc_retainAutoreleasedReturnValue();
  dVar13 = (double)fVar12;
  if (dVar13 <= 1.0) {
    dVar13 = 1.0;
  }
  dVar14 = 60.0;
  if (dVar13 <= 60.0) {
    dVar14 = dVar13;
  }
  puVar6 = puVar5;
  func_0x00010c26d5a0(dVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar5 = PTR_PTR_1126c62a0;
  _objc_alloc_init();
  puVar4 = PTR_PTR_1126c62a8;
  _objc_alloc(PTR_PTR_1126c62a8);
  func_0x00010bff0de0();
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  puVar7 = PTR_PTR_1126c62b0;
  _objc_alloc();
  func_0x00010bff0da0();
  _objc_release(param_5);
  puVar8 = PTR_PTR_1126c61b0;
  _objc_alloc();
  func_0x00010c030a80();
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(uVar10);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    uVar9 = *(undefined8 *)(param_4 + 0x20);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_4 + 0x28);
    func_0x00010c11de00(uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    func_0x00010c0d42a0(uVar9);
    _objc_release(uVar10);
    _objc_release(uVar9);
    puVar8 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105f3a02c; end: 105f3a113;  */

void FUN_105f3a02c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010c0d42a0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105f3a114; end: 105f3a18f;  */

void FUN_105f3a114(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  if (param_3 == 0) {
    func_0x00010c0d9840(uVar1,param_2,param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_complete_1125ae760);
  return;
}



/* Entry: 105f3a190; end: 105f3a2cf; -[SCMapSDKDataBridge _createFootstepsRequestsBuilderWithFeatureSettingsService:] */

void FUN_105f3a190(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = param_3;
  func_0x00010bfb45c0(param_3);
  func_0x00010c0df6e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae6b8;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105f3a2d0;
  puStack_50 = &UNK_11088e668;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010bf54280(puVar3,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2519e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c61b0;
  _objc_alloc(PTR_PTR_1126c61b0);
  puVar5 = PTR_PTR_1126c62b8;
  _objc_alloc_init(PTR_PTR_1126c62b8);
  func_0x00010c030a80(puVar3,param_2,puVar4,puVar5,&PTR___NSConcreteGlobalBlock_1108fa380);
  _objc_release(puVar5);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105f3a2d0; end: 105f3a487;  */

void FUN_105f3a2d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  _objc_initWeak(auStack_68,param_2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x15;
  _dispatch_get_global_queue(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c0e0c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f3a488; end: 105f3a517;  */

void FUN_105f3a488(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0dff20(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
  if (uVar1 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0d9840();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f3a518; end: 105f3a51f;  */

void FUN_105f3a518(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c281a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_unobserve_11267e0c0);
  return;
}



/* Entry: 105f3a520; end: 105f3a56b;  */

void FUN_105f3a520(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1de8;
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  func_0x00010c167060();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f3a56c; end: 105f3a6ab; -[SCMapSDKDataBridge _createFootstepsRealtimeCollectionRequestsBuilderWithFeatureSettingsService:] */

void FUN_105f3a56c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = param_3;
  func_0x00010bfb45e0(param_3);
  func_0x00010c0df6e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae6b8;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105f3a6ac;
  puStack_50 = &UNK_11088e668;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010bf54280(puVar3,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2519e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c61b0;
  _objc_alloc(PTR_PTR_1126c61b0);
  puVar5 = PTR_PTR_1126c62c0;
  _objc_alloc_init(PTR_PTR_1126c62c0);
  func_0x00010c030a80(puVar3,param_2,puVar4,puVar5,&PTR___NSConcreteGlobalBlock_1108fa3a0);
  _objc_release(puVar5);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105f3a6ac; end: 105f3a863;  */

void FUN_105f3a6ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  _objc_initWeak(auStack_68,param_2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x15;
  _dispatch_get_global_queue(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c0e0c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f3a864; end: 105f3a8f3;  */

void FUN_105f3a864(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0dff20(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
  if (uVar1 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0d9840();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f3a8f4; end: 105f3a8fb;  */

void FUN_105f3a8f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c281a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_unobserve_11267e0c0);
  return;
}



/* Entry: 105f3a8fc; end: 105f3a947;  */

void FUN_105f3a8fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1de8;
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  func_0x00010c167080();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f3a948; end: 105f3aaff; -[SCMapSDKDataBridge _createNowPlayingRequestBuilderWithNowPlayingService:connectedProviderResolver:personLocationsProvider:currentUserId:mapFriendLoadState:] */

void FUN_105f3a948(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0b90a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_7;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105f3ab00;
  puStack_70 = &UNK_110855030;
  uStack_68 = param_5;
  _objc_retain(param_5);
  uVar2 = uVar1;
  func_0x00010c2656e0(uVar1,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_7);
  func_0x00010bdf0940(param_1,param_2,uVar3,param_3,param_4,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126c61b0;
  _objc_alloc(PTR_PTR_1126c61b0);
  puVar5 = PTR_PTR_1126c62c8;
  _objc_alloc_init(PTR_PTR_1126c62c8);
  func_0x00010c030a80(puVar4,param_2,param_1,puVar5,&PTR___NSConcreteGlobalBlock_1108fa410);
  _objc_release(puVar5);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uStack_68);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105f3ab00; end: 105f3abef;  */

void FUN_105f3ab00(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c09fa60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105f3abf0;
  puStack_40 = &UNK_1108fa3c0;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar5);
  uVar2 = uVar1;
  uStack_38 = uVar5;
  func_0x00010c0b8600(uVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bf00660();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  uVar1 = uVar2;
  if (lVar4 != 0) {
    func_0x00010c2519e0(uVar2,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(lVar3);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f3abf0; end: 105f3abf7;  */

void FUN_105f3abf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf00670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_allPersonLocations_11259db40);
  return;
}



/* Entry: 105f3abf8; end: 105f3ac43;  */

void FUN_105f3abf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1de8;
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  func_0x00010c1ce920();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f3ac44; end: 105f3ad93; -[SCMapSDKDataBridge _createNowPlayingInfoObservableWithPersonLocationsObservable:nowPlayingService:connectedProviderResolver:currentUserId:] */

void FUN_105f3ac44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_3;
  func_0x00010c2656e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f3ad94; end: 105f3af83;  */

void FUN_105f3ad94(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **unaff_x27;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_2;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar7 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c136440(*(undefined8 *)(param_1 + 0x20));
    lVar2 = lVar1;
    func_0x00010bdf74e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf60f20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010be19640();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126ae6b8;
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_80 = lVar2;
    uStack_78 = uVar3;
    lStack_70 = lVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_105f3af84;
    puStack_98 = &UNK_1108fa430;
    lVar6 = param_1 + 0x38;
    _objc_copyWeak(auStack_88,lVar6);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar8);
    uStack_90 = uVar8;
    func_0x00010bf41860(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
    unaff_x27 = &puStack_b0;
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_destroyWeak((undefined1 *)((long)unaff_x27 + 0x28));
    __Unwind_Resume();
    _objc_retain(lVar6);
    puVar5 = (undefined *)(param_2 + 0x28);
    _objc_loadWeakRetained();
    if (puVar5 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = puVar5;
      func_0x00010bdd8f40(puVar5);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar5);
    _objc_release(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105f3af84; end: 105f3affb;  */

void FUN_105f3af84(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bdd8f40(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105f3affc; end: 105f3b1bf; -[SCMapSDKDataBridge _calloutInfoFromResults:currentUserId:] */

void FUN_105f3affc(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar7);
  uVar1 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar3 = param_3;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126ae750;
  _objc_opt_class(PTR_PTR_1126ae750);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar7);
  uVar2 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  uVar4 = param_3;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar7);
  uVar3 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  if (uVar3 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    func_0x00010c0d3c80(uVar4);
    uVar5 = uVar2;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar5 != 0) && (lVar6 = param_4, func_0x00010c08fa60(), lVar6 != 0)) {
      func_0x00010c1d0640(uVar4);
    }
    puVar7 = PTR_PTR_1126c62d0;
    _objc_alloc(PTR_PTR_1126c62d0);
    func_0x00010c05c6a0();
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105f3b1c0; end: 105f3b2ff; -[SCMapSDKDataBridge _currentUserProviderObservableWithConnectedProviderResolver:] */

void FUN_105f3b1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae6b8;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105f3b258;
  puStack_30 = &UNK_11088e668;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f3b300; end: 105f3b36b;  */

void FUN_105f3b300(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (param_2 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar1);
  }
  else {
    func_0x00010c0d9840(uVar2,param_2,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 105f3b36c; end: 105f3b54b; -[SCMapSDKDataBridge _friendTracksObservableForPersonLocations:nowPlayingService:] */

void FUN_105f3b36c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf54280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c28d660();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  uVar3 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126ae6b8;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cab40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    puVar6 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(param_3 + 0x20);
    func_0x00010bf529e0();
    if (lVar7 == 0) {
      func_0x00010c0d9840(param_2);
      func_0x00010bf436e0(param_2);
    }
    else {
      uVar2 = *(undefined8 *)(param_3 + 0x28);
      _objc_retain(uVar2);
      _objc_retain(param_2);
      func_0x00010bfc47c0(uVar2);
      _objc_release(param_2);
      _objc_release(uVar2);
    }
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105f3b54c; end: 105f3b63b;  */

void FUN_105f3b54c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    func_0x00010c0d9840(param_2);
    func_0x00010bf436e0(param_2);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar1);
    _objc_retain(param_2);
    func_0x00010bfc47c0(uVar1);
    _objc_release(param_2);
    _objc_release(uVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f3b63c; end: 105f3b683;  */

void FUN_105f3b63c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf275a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28),param_2,uVar1);
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f3b684; end: 105f3b68b;  */

void FUN_105f3b684(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf275b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_cachedTracks_1125a7710);
  return;
}



/* Entry: 105f3b68c; end: 105f3b717; -[SCMapSDKDataBridge _createLocationRequestStateBuilder] */

void FUN_105f3b68c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c61b0;
  _objc_alloc(PTR_PTR_1126c61b0);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0dfc20(uVar2,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c62d8;
  _objc_alloc_init(PTR_PTR_1126c62d8);
  func_0x00010c030a80(puVar1,param_2,uVar2,puVar3,&PTR___NSConcreteGlobalBlock_1108fa4c0);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f3b718; end: 105f3b763;  */

void FUN_105f3b718(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1de8;
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  func_0x00010c1be400();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f3b764; end: 105f3b7cf; -[SCMapSDKDataBridge .cxx_destruct] */

void FUN_105f3b764(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 105f3b7d0; end: 105f3c033; -[SCMapSDKDataBridgingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f3b7d0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
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
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  undefined8 uVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  
  lVar48 = param_1 + _DAT_11273ab24;
  _objc_loadWeakRetained();
  lVar1 = lVar48;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = lVar2;
  func_0x00010c1530a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar50;
  func_0x00010bfcbea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar50);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar48);
  lVar48 = param_1;
  FUN_105f3c034();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar48;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001090219d4();
  _objc_release(lVar1);
  _objc_release(lVar48);
  if (((int)lVar2 == 0) || (lVar3 == 0)) {
    if (param_1 == 0) {
      lVar48 = 0;
    }
    else {
      lVar48 = param_1 + _DAT_11273ab68;
      _objc_loadWeakRetained();
    }
    lVar1 = lVar48;
    func_0x00010c0ba3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar48);
    if (param_1 == 0) {
      lVar48 = 0;
    }
    else {
      lVar48 = param_1 + _DAT_11273ab6c;
      _objc_loadWeakRetained();
    }
    lVar2 = lVar48;
    func_0x00010bfe3ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar48);
    puVar4 = PTR_PTR_1126c62e0;
    _objc_alloc();
    if (param_1 == 0) {
      lVar48 = 0;
    }
    else {
      lVar48 = param_1 + _DAT_11273ab34;
      _objc_loadWeakRetained();
    }
    lVar50 = lVar48;
    func_0x00010c0b9440();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar50;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x000105f3c058();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c09f2a0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar34 = 0;
    }
    else {
      lVar34 = param_1 + _DAT_11273ab50;
      _objc_loadWeakRetained();
    }
    lVar8 = lVar34;
    func_0x00010c296d20();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar35 = 0;
    }
    else {
      lVar35 = param_1 + _DAT_11273ab40;
      _objc_loadWeakRetained();
    }
    lVar9 = lVar35;
    func_0x00010bfb9e20();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar36 = 0;
    }
    else {
      lVar36 = param_1 + _DAT_11273ab48;
      _objc_loadWeakRetained();
    }
    lVar10 = lVar36;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar37 = 0;
    }
    else {
      lVar37 = param_1 + _DAT_11273ab4c;
      _objc_loadWeakRetained();
    }
    lVar12 = lVar37;
    func_0x00010c1068a0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1;
    func_0x000105f3c058();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c292d20();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar38 = 0;
    }
    else {
      lVar38 = param_1 + _DAT_11273ab58;
      _objc_loadWeakRetained();
    }
    lVar15 = lVar38;
    func_0x00010bf70a00();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar39 = 0;
    }
    else {
      lVar39 = param_1 + _DAT_11273ab54;
      _objc_loadWeakRetained();
    }
    lVar16 = lVar39;
    func_0x00010c0dc400();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar40 = 0;
    }
    else {
      lVar40 = param_1 + _DAT_11273ab5c;
      _objc_loadWeakRetained();
    }
    lVar17 = lVar40;
    func_0x00010c0d4240();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar41 = 0;
    }
    else {
      lVar41 = param_1 + _DAT_11273ab60;
      _objc_loadWeakRetained();
    }
    lVar18 = lVar41;
    func_0x00010bf13100();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar42 = 0;
    }
    else {
      lVar42 = param_1 + _DAT_11273ab64;
      _objc_loadWeakRetained();
    }
    lVar19 = lVar42;
    func_0x00010c0b9ee0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar43 = 0;
    }
    else {
      lVar43 = param_1 + _DAT_11273ab44;
      _objc_loadWeakRetained();
    }
    lVar20 = lVar43;
    func_0x00010bfb9940();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = param_1;
    func_0x000105f3c07c();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar21;
    func_0x00010c0b9300();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar44 = 0;
    }
    else {
      lVar44 = param_1 + _DAT_11273ab74;
      _objc_loadWeakRetained();
    }
    lVar23 = lVar44;
    func_0x00010c0b97a0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar45 = 0;
    }
    else {
      lVar45 = param_1 + _DAT_11273ab78;
      _objc_loadWeakRetained();
    }
    lVar24 = lVar45;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = lVar24;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = param_1;
    func_0x000105f3c0a0();
    _objc_retainAutoreleasedReturnValue();
    lVar27 = lVar26;
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar28 = param_1;
    func_0x000105f3c0a0();
    _objc_retainAutoreleasedReturnValue();
    lVar29 = lVar28;
    func_0x00010c2445a0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar49 = 0;
    }
    else {
      lVar49 = param_1 + _DAT_11273ab80;
      _objc_loadWeakRetained();
    }
    lVar30 = param_1;
    FUN_105f3c034();
    _objc_retainAutoreleasedReturnValue();
    lVar31 = lVar30;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar52 = 0;
      lVar47 = 0;
    }
    else {
      lVar52 = param_1 + _DAT_11273ab88;
      _objc_loadWeakRetained();
      lVar47 = param_1 + _DAT_11273ab84;
      _objc_loadWeakRetained();
    }
    lVar32 = param_1;
    func_0x000105f3c07c();
    _objc_retainAutoreleasedReturnValue();
    lVar33 = lVar32;
    func_0x00010c0ba460();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar51 = 0;
    }
    else {
      lVar51 = param_1 + _DAT_11273ab90;
      _objc_loadWeakRetained();
    }
    func_0x00010bff7340(puVar4,param_2,lVar3,lVar5,lVar7,1,lVar8,lVar9,lVar11,lVar12,lVar14,lVar15,
                        lVar16,lVar17,lVar18,lVar19,lVar20,lVar1,lVar2,lVar22,lVar23,lVar25,lVar27,
                        lVar29,lVar49,lVar31,lVar52,lVar47,lVar33,lVar51);
    uVar46 = *(undefined8 *)(param_1 + _DAT_11273ab2c);
    *(undefined **)(param_1 + _DAT_11273ab2c) = puVar4;
    _objc_release(uVar46);
    _objc_release(lVar51);
    _objc_release(lVar33);
    _objc_release(lVar32);
    _objc_release(lVar47);
    _objc_release(lVar52);
    _objc_release(lVar31);
    _objc_release(lVar30);
    _objc_release(lVar49);
    _objc_release(lVar29);
    _objc_release(lVar28);
    _objc_release(lVar27);
    _objc_release(lVar26);
    _objc_release(lVar25);
    _objc_release(lVar24);
    _objc_release(lVar45);
    _objc_release(lVar23);
    _objc_release(lVar44);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar43);
    _objc_release(lVar19);
    _objc_release(lVar42);
    _objc_release(lVar18);
    _objc_release(lVar41);
    _objc_release(lVar17);
    _objc_release(lVar40);
    _objc_release(lVar16);
    _objc_release(lVar39);
    _objc_release(lVar15);
    _objc_release(lVar38);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar37);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar36);
    _objc_release(lVar9);
    _objc_release(lVar35);
    _objc_release(lVar8);
    _objc_release(lVar34);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar50);
    _objc_release(lVar48);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    if (param_1 == 0) {
      lVar48 = 0;
    }
    else {
      lVar48 = param_1 + _DAT_11273ab8c;
      _objc_loadWeakRetained();
    }
    lVar1 = lVar48;
    func_0x00010bf21100();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf22140();
    _objc_retainAutoreleasedReturnValue();
    lVar50 = (long)_DAT_11273ab28;
    uVar46 = *(undefined8 *)(param_1 + lVar50);
    *(long *)(param_1 + lVar50) = lVar2;
    _objc_release(uVar46);
    _objc_release(lVar1);
    _objc_release(lVar48);
    func_0x00010c24d960(*(undefined8 *)(param_1 + lVar50));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105f3c034; end: 105f3c0c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f3c034(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11273ab38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f3c0c4; end: 105f3c23b; -[SCMapSDKDataBridgingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f3c0c4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273ab90);
  _objc_destroyWeak(param_1 + _DAT_11273ab8c);
  _objc_destroyWeak(param_1 + _DAT_11273ab88);
  _objc_destroyWeak(param_1 + _DAT_11273ab84);
  _objc_destroyWeak(param_1 + _DAT_11273ab80);
  _objc_destroyWeak(param_1 + _DAT_11273ab7c);
  _objc_destroyWeak(param_1 + _DAT_11273ab78);
  _objc_destroyWeak(param_1 + _DAT_11273ab74);
  _objc_destroyWeak(param_1 + _DAT_11273ab70);
  _objc_destroyWeak(param_1 + _DAT_11273ab24);
  _objc_destroyWeak(param_1 + _DAT_11273ab6c);
  _objc_destroyWeak(param_1 + _DAT_11273ab68);
  _objc_destroyWeak(param_1 + _DAT_11273ab64);
  _objc_destroyWeak(param_1 + _DAT_11273ab60);
  _objc_destroyWeak(param_1 + _DAT_11273ab5c);
  _objc_destroyWeak(param_1 + _DAT_11273ab58);
  _objc_destroyWeak(param_1 + _DAT_11273ab54);
  _objc_destroyWeak(param_1 + _DAT_11273ab50);
  _objc_destroyWeak(param_1 + _DAT_11273ab4c);
  _objc_destroyWeak(param_1 + _DAT_11273ab48);
  _objc_destroyWeak(param_1 + _DAT_11273ab44);
  _objc_destroyWeak(param_1 + _DAT_11273ab40);
  _objc_destroyWeak(param_1 + _DAT_11273ab3c);
  _objc_destroyWeak(param_1 + _DAT_11273ab38);
  _objc_destroyWeak(param_1 + _DAT_11273ab34);
  _objc_destroyWeak(param_1 + _DAT_11273ab30);
  _objc_storeStrong(param_1 + _DAT_11273ab28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273ab2c,0);
  return;
}



/* Entry: 105f3c23c; end: 105f3c2e7; -[SCMapMyStatusAndLocation initWithMyStatus:myLocation:] */

undefined1 *
FUN_105f3c23c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ee188;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f3c2e8; end: 105f3c30b; -[SCMapMyStatusAndLocation copyWithZone:] */

undefined8 FUN_105f3c2e8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105f3c30c; end: 105f3c37f; -[SCMapMyStatusAndLocation hash] */

undefined8 * FUN_105f3c30c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105f3c400:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105f3c40c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_105f3c40c;
        }
        goto LAB_105f3c400;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105f3c40c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105f3c380; end: 105f3c427; -[SCMapMyStatusAndLocation isEqual:] */

long FUN_105f3c380(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105f3c400:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105f3c40c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_105f3c40c;
        }
        goto LAB_105f3c400;
      }
    }
    lVar3 = 0;
  }
LAB_105f3c40c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105f3c428; end: 105f3c42f; -[SCMapMyStatusAndLocation myStatus] */

undefined8 FUN_105f3c428(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105f3c430; end: 105f3c437; -[SCMapMyStatusAndLocation myLocation] */

undefined8 FUN_105f3c430(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105f3c438; end: 105f3c467; -[SCMapMyStatusAndLocation .cxx_destruct] */

void FUN_105f3c438(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f3c468; end: 105f3c4c7; -[SCMapWidgetInfo initWithIsWidgetInstalled:isUserOnboarded:isWidgetSupported:] */

void FUN_105f3c468(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ee190;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
  }
  return;
}



/* Entry: 105f3c4c8; end: 105f3c4eb; -[SCMapWidgetInfo copyWithZone:] */

undefined8 FUN_105f3c4c8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105f3c4ec; end: 105f3c54f; -[SCMapWidgetInfo hash] */

ulong * FUN_105f3c4ec(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_28 = (ulong)*(byte *)(param_1 + 9);
  uStack_20 = (ulong)*(byte *)(param_1 + 10);
  func_0x000100505190(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (ulong *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) ||
         ((*(char *)((long)puVar1 + 8) != param_3[8] || (*(char *)((long)puVar1 + 9) != param_3[9]))
         )) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(char *)((long)puVar1 + 10) == param_3[10]);
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar3;
}


