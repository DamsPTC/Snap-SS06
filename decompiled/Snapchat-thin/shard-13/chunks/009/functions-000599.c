/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aeafcbc; end: 10aeafcc3; -[SCPredefinedLensMetadataStore supportsFilteringForAttribute:] */

undefined8 FUN_10aeafcbc(void)

{
  return 0;
}



/* Entry: 10aeafcc4; end: 10aeafccb; -[SCPredefinedLensMetadataStore addListener:] */

void FUN_10aeafcc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10aeafccc; end: 10aeafcd3; -[SCPredefinedLensMetadataStore removeListener:] */

void FUN_10aeafccc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10aeafcd4; end: 10aeafcdb; -[SCPredefinedLensMetadataStore startUpdatingWithMode:] */

void FUN_10aeafcd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c251670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_startUpdatingWithMode__112671fc0);
  return;
}



/* Entry: 10aeafcdc; end: 10aeafce3; -[SCPredefinedLensMetadataStore stopUpdating] */

void FUN_10aeafcdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_stopUpdating_112673578);
  return;
}



/* Entry: 10aeafce4; end: 10aeafceb; -[SCPredefinedLensMetadataStore synchronize] */

void FUN_10aeafce4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c266b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_synchronize_112677508);
  return;
}



/* Entry: 10aeafcec; end: 10aeafd3b; -[SCPredefinedLensMetadataStore lenses] */

void FUN_10aeafcec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = *(undefined **)(param_1 + 8);
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aeafd3c; end: 10aeafd8b; -[SCPredefinedLensMetadataStore lensesToPrefetch] */

void FUN_10aeafd3c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = *(undefined **)(param_1 + 8);
  func_0x00010c0987c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aeafd8c; end: 10aeafd93; -[SCPredefinedLensMetadataStore hasMoreLensesToLoad] */

undefined8 FUN_10aeafd8c(void)

{
  return 0;
}



/* Entry: 10aeafd94; end: 10aeafd9b; -[SCPredefinedLensMetadataStore loadMoreTriggerDistance] */

undefined8 FUN_10aeafd94(void)

{
  return 0;
}



/* Entry: 10aeafd9c; end: 10aeafdcb; -[SCPredefinedLensMetadataStore .cxx_destruct] */

void FUN_10aeafd9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeafdcc; end: 10aeafe3f; -[SCLensMetadataStoreForRepositoryAdaptor initWithLensMetadataStore:] */

undefined1 * FUN_10aeafdcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112701698;
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



/* Entry: 10aeafe40; end: 10aeafefb; -[SCLensMetadataStoreForRepositoryAdaptor lensMetadatas] */

void FUN_10aeafe40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c266b80();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126ae558;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10aeafefc; end: 10aeaff23;  */

void FUN_10aeafefc(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10aeaff24; end: 10aeaff2f; -[SCLensMetadataStoreForRepositoryAdaptor .cxx_destruct] */

void FUN_10aeaff24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeaff30; end: 10aeb0153; -[SCGeofence containsCoordinate:] */

ulong FUN_10aeaff30(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  double *pdVar4;
  long extraout_x12;
  uint uVar5;
  long lVar6;
  double *pdVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar6 = param_2;
  func_0x00010bfc14a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010bf529e0();
  _objc_release(lVar6);
  uVar5 = 0;
  if ((param_4 != 0) && (lVar1 != 0)) {
    (*(code *)PTR____chkstk_darwin_11034bd40)(lVar1 << 3);
    pdVar7 = (double *)((long)&dStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    pdVar8 = (double *)((long)pdVar7 - extraout_x12);
    lVar6 = 0;
    do {
      lVar2 = param_2;
      func_0x00010bfc14a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b55a0();
      pdVar7[lVar6] = param_1;
      _objc_release(lVar3);
      _objc_release(lVar2);
      lVar2 = param_2;
      func_0x00010bfc14a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08b3c0();
      pdVar8[lVar6] = param_1;
      _objc_release(lVar3);
      _objc_release(lVar2);
      lVar6 = lVar6 + 1;
    } while (lVar1 != lVar6);
    func_0x00010c0b55a0(param_4);
    dVar9 = param_1;
    func_0x00010c08b3c0(param_4);
    uVar5 = 0;
    lVar6 = 0;
    pdVar4 = pdVar7;
    lVar2 = lVar1 + -1;
    dVar10 = pdVar8[lVar1 + -1];
    do {
      lVar3 = lVar6;
      dVar11 = *pdVar8;
      if ((dVar10 <= dVar9 == dVar9 < dVar11) &&
         (param_1 < *pdVar4 + ((dVar9 - dVar11) * (pdVar7[lVar2] - *pdVar4)) / (dVar10 - dVar11))) {
        uVar5 = uVar5 ^ 1;
      }
      pdVar4 = pdVar4 + 1;
      lVar1 = lVar1 + -1;
      lVar6 = lVar3 + 1;
      lVar2 = lVar3;
      pdVar8 = pdVar8 + 1;
      dVar10 = dVar11;
    } while (lVar1 != 0);
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return (ulong)uVar5;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf99470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return param_4;
}



/* Entry: 10aeb0154; end: 10aeb015b;  */

void FUN_10aeb0154(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_errorWithScheduleFetcherErrorCod_1125c3ec0,param_3,0);
  return;
}



/* Entry: 10aeb015c; end: 10aeb022f;  */

void FUN_10aeb015c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  func_0x00010bdfaf60(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72040(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,param_1,
                      *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    func_0x00010c1d0640(puVar1,param_2,param_4,*(undefined8 *)PTR__NSUnderlyingErrorKey_110345660);
  }
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110f2f538,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aeb0230; end: 10aeb0257;  */

undefined ** FUN_10aeb0230(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 + 0x68U < 5) {
    return (undefined **)(&PTR_PTR_110c8ed08)[param_3 + 0x68U];
  }
  return &PTR____CFConstantStringClassReference_110f2f558;
}



/* Entry: 10aeb0258; end: 10aeb02ef; -[SCLensGtqRequestLocationProvider requestLocationMetadataForNamespaces:] */

void FUN_10aeb0258(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x00010bdcd700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be19200(param_1,param_2,lVar1);
  puVar2 = PTR_PTR_1126de6b0;
  _objc_alloc(PTR_PTR_1126de6b0);
  func_0x00010c026d20();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x18),param_2,puVar2);
  puVar3 = PTR_PTR_1126de6b8;
  _objc_alloc(PTR_PTR_1126de6b8);
  func_0x00010c026b40();
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10aeb02f0; end: 10aeb0373; -[SCLensGtqRequestLocationProvider _applicableUserLocation] */

void FUN_10aeb02f0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x00010be4f640(param_1,param_2,lVar2);
    lVar1 = lVar2;
    if ((int)param_1 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10aeb0374; end: 10aeb0413; -[SCLensGtqRequestLocationProvider _freshnessTypeForLocation:] */

undefined1 FUN_10aeb0374(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (param_4 == 0) {
    uVar1 = 2;
  }
  else {
    _objc_retain(param_4);
    func_0x00010bf64de0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x00010c2709c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    func_0x00010c26f380(puVar2,param_3,lVar3);
    uVar1 = *(double *)(param_2 + 0x10) <= param_1;
    _objc_release(lVar3);
    _objc_release(puVar2);
  }
  return uVar1;
}



/* Entry: 10aeb0414; end: 10aeb0463; -[SCLensGtqRequestLocationProvider _locationIsNotStale:] */

bool FUN_10aeb0414(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c2709c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3a0();
  _objc_release(param_4);
  return ABS(param_1) < 86400.0;
}



/* Entry: 10aeb0464; end: 10aeb057b; -[SCLensBuilder withTrackingInfo:] */

undefined8 FUN_10aeb0464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c277f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bbf60(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c241660(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bbee0(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf92c00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ad240(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c07bb00(param_3);
  func_0x00010c2b1280(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c26a320(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c2bad80(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aeb057c; end: 10aeb066b; -[SCLensBuilder withCarouselPositionInfo:] */

undefined8 FUN_10aeb057c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010beec6c0(param_3);
  func_0x00010c2a7480(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c076320(param_3);
  func_0x00010c2b0cc0(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c113c80(param_3);
  func_0x00010c2b60a0(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf32760(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aa300(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bfcd120(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c2aa2e0(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aeb066c; end: 10aeb0673; -[SCLensScheduleNamespaceFilteredMetadataStore initWithScheduleService:announcerPerformer:lensPerformerProvider:lensDataConfig:] */

void FUN_10aeb066c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c041cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithScheduleService_announce_1125ee130);
  return;
}



/* Entry: 10aeb0674; end: 10aeb06f7; -[SCLensScheduleNamespaceFilteredMetadataStore applyMetadataProviderSettings:] */

void FUN_10aeb0674(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126de6c0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bba0();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c115be0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bba80(*(undefined8 *)(param_1 + 8),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10aeb06f8; end: 10aeb06ff; -[SCLensScheduleNamespaceFilteredMetadataStore addListener:] */

void FUN_10aeb06f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10aeb0700; end: 10aeb0707; -[SCLensScheduleNamespaceFilteredMetadataStore removeListener:] */

void FUN_10aeb0700(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10aeb0708; end: 10aeb0757; -[SCLensScheduleNamespaceFilteredMetadataStore warmUp] */

void FUN_10aeb0708(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bec6fe0();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be61ec0(param_1,param_2,0);
  func_0x00010c251660(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aeb0758; end: 10aeb07bf; -[SCLensScheduleNamespaceFilteredMetadataStore startUpdatingWithMode:] */

void FUN_10aeb0758(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 2) {
    func_0x00010bec6fe0(param_1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be61ec0(param_1,param_2,param_3);
  func_0x00010c251660(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aeb07c0; end: 10aeb07c7; -[SCLensScheduleNamespaceFilteredMetadataStore stopUpdating] */

void FUN_10aeb07c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 10aeb07c8; end: 10aeb07cb; -[SCLensScheduleNamespaceFilteredMetadataStore synchronize] */

void FUN_10aeb07c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec6ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__subscribeOnServiceObservable_11258f5a0);
  return;
}



/* Entry: 10aeb07cc; end: 10aeb081b; -[SCLensScheduleNamespaceFilteredMetadataStore lenses] */

void FUN_10aeb07cc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = *(undefined **)(param_1 + 8);
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aeb081c; end: 10aeb086b; -[SCLensScheduleNamespaceFilteredMetadataStore lensesToPrefetch] */

void FUN_10aeb081c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = *(undefined **)(param_1 + 8);
  func_0x00010c0987c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aeb086c; end: 10aeb08eb; -[SCLensScheduleNamespaceFilteredMetadataStore hasMoreLensesToLoad] */

bool FUN_10aeb086c(long param_1)

{
  long lVar1;
  long lVar2;
  
  _os_unfair_lock_lock(param_1 + 0x40);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c0cf080(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0f2920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x40);
  return lVar2 != 0;
}



/* Entry: 10aeb08ec; end: 10aeb092b; -[SCLensScheduleNamespaceFilteredMetadataStore loadMoreTriggerDistance] */

undefined8 FUN_10aeb08ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0cf080(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d9cc0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10aeb092c; end: 10aeb0947; -[SCLensScheduleNamespaceFilteredMetadataStore supportsFilteringForAttribute:] */

byte FUN_10aeb092c(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  
  if (param_3 == 1) {
    bVar1 = *(byte *)(param_1 + 0x30);
  }
  else {
    bVar1 = 1;
  }
  return bVar1 & 1;
}



/* Entry: 10aeb0948; end: 10aeb0a9f; -[SCLensScheduleNamespaceFilteredMetadataStore _subscribeOnServiceObservable] */

void FUN_10aeb0948(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cae20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c15e720(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 10aeb0aa0; end: 10aeb0ae7;  */

void FUN_10aeb0aa0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedba40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10aeb0ae8; end: 10aeb0b9f; -[SCLensScheduleNamespaceFilteredMetadataStore _updateMetadataStoreWithNamespaceData:] */

void FUN_10aeb0ae8(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar2 = param_3;
  func_0x00010bef0bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2;
  }
  func_0x00010c2873a0(uVar4,param_2,puVar3);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar3 = param_3;
  func_0x00010c105c60();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    puVar1 = puVar3;
  }
  func_0x00010c2873e0(uVar4,param_2,puVar1);
  _objc_release(puVar3);
  _os_unfair_lock_lock(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = param_3;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x40);
  return;
}



/* Entry: 10aeb0ba0; end: 10aeb0bb7; -[SCLensScheduleNamespaceFilteredMetadataStore _namespaceUpdatingModeForStoreUpdatingMode:] */

undefined1 FUN_10aeb0ba0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  
  uVar1 = 3;
  if (param_3 != 2) {
    uVar1 = param_3 == 1;
  }
  return uVar1;
}



/* Entry: 10aeb0bb8; end: 10aeb0c17; -[SCLensScheduleNamespaceFilteredMetadataStore .cxx_destruct] */

void FUN_10aeb0bb8(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeb0c18; end: 10aeb0c6b; -[SCMixerFeedContextProvider exclusiveLensSubscriptionPresent] */

uint FUN_10aeb0c18(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c076640(lVar1,param_2,1);
    uVar3 = (uint)lVar2 ^ 1;
  }
  _objc_release(lVar1);
  return uVar3;
}



/* Entry: 10aeb0c6c; end: 10aeb0cd7; -[SCMixerFeedContextProvider currentLocale] */

void FUN_10aeb0c6c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c106d20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10aeb0cd8; end: 10aeb0ce3; -[SCMixerFeedContextProvider .cxx_destruct] */

void FUN_10aeb0cd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeb0ce4; end: 10aeb0da7;  */

void FUN_10aeb0ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126de6e8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010c24e860(param_3);
  func_0x00010bf655e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf946c0(param_3);
  _objc_release(param_3);
  func_0x00010bf655e0(param_1,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04ba40(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aeb0da8; end: 10aeb0e0b;  */

void FUN_10aeb0da8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf414c0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf41080();
  func_0x00010c0df760(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aeb0e0c; end: 10aeb0e83;  */

void FUN_10aeb0e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_PTR_1126bb810;
  uVar3 = (undefined4)((ulong)param_1 >> 0x20);
  uVar2 = (undefined4)param_1;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bf32b00(param_3);
  func_0x00010bfcd100(param_3);
  _objc_release(param_3);
  func_0x00010bffcd60((float)(double)CONCAT44(uVar3,uVar2),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aeb0e84; end: 10aeb0f33;  */

void FUN_10aeb0e84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bb878;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c277e80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf4d360(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c290120(param_2);
  _objc_release(param_2);
  func_0x00010c054bc0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aeb0f34; end: 10aeb0fd7; -[SCLensMetadataModelTransformer _lensPlusFreemiumInfoForDataModelLensPlusFreemiumInfo:] */

void FUN_10aeb0f34(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126bb858;
  puVar5 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    lVar2 = param_3;
    func_0x00010bfceb20(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c099040(param_3);
    lVar4 = param_3;
    func_0x00010c155400(param_3);
    _objc_release(param_3);
    func_0x00010c018e40(puVar1,param_2,lVar2,lVar3,lVar4);
    _objc_release(lVar2);
    puVar5 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10aeb0fd8; end: 10aeb0fe3; -[SCLensMetadataModelTransformer .cxx_destruct] */

void FUN_10aeb0fd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeb0fe4; end: 10aeb1ae7; -[SCLensMetadataTransformer lensMetadataModelFromLensMetadata:] */

void FUN_10aeb0fe4(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
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
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  undefined *puVar68;
  undefined8 uVar69;
  undefined8 auStack_70 [2];
  
  if (param_4 == 0) {
    puVar68 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_4);
    func_0x00010be4b580(param_2,param_3,param_4);
    uVar69 = *(undefined8 *)(param_2 + 8);
    lVar1 = param_4;
    func_0x00010c093a40(param_4);
    _objc_retainAutoreleasedReturnValue();
    auStack_70[0] = 0;
    func_0x00010bf63ba0(uVar69,param_3,lVar1,auStack_70);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar68 = PTR_PTR_1126de6f8;
    _objc_alloc();
    lVar1 = param_4;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x00010bf3ec40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_4;
    func_0x00010bfe3760();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    func_0x00010bfe3820();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_2;
    func_0x00010be36260(param_2,param_3,lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    func_0x00010bfe5b40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_4;
    func_0x00010bf1b100();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_4;
    func_0x00010c13b280();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bf5fe00();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_2;
    func_0x00010be60160(param_2,param_3,lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_4;
    func_0x00010bf9c720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    lVar13 = param_4;
    func_0x00010c27dd80(param_4);
    lVar14 = param_2;
    func_0x00010be60280(param_2,param_3,lVar13);
    lVar13 = param_4;
    func_0x00010c1554e0(param_4);
    func_0x00010be60180(param_2,param_3,lVar13);
    lVar13 = param_4;
    func_0x00010bf33060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c072c20();
    func_0x00010c07f200();
    lVar15 = param_4;
    func_0x00010c24a620();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_2;
    func_0x00010be60220(param_2,param_3,lVar15);
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_4;
    func_0x00010c14fe60();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_2;
    func_0x00010be9b180(param_2,param_3,lVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c070700();
    lVar19 = param_4;
    func_0x00010bf6d760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010beec6c0();
    lVar20 = param_4;
    func_0x00010c2813a0();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = param_2;
    func_0x00010bed1820(param_2,param_3,lVar20);
    _objc_retainAutoreleasedReturnValue();
    lVar22 = param_4;
    func_0x00010c0b8380();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = param_2;
    func_0x00010bdcfb00(param_2,param_3,lVar22);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c080040();
    lVar24 = param_4;
    func_0x00010bef0200(param_4);
    func_0x00010bdfbea0(param_2,param_3,lVar24);
    lVar24 = param_4;
    func_0x00010bf93ae0();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = param_4;
    func_0x00010c280be0();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = param_4;
    func_0x00010bf29280();
    _objc_retainAutoreleasedReturnValue();
    lVar27 = lVar26;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    lVar28 = param_4;
    func_0x00010bf07540();
    _objc_retainAutoreleasedReturnValue();
    lVar29 = lVar28;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd5c20();
    lVar30 = param_4;
    func_0x00010c0e3640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07bb00();
    func_0x00010c113c80();
    lVar31 = param_4;
    func_0x00010c092760();
    _objc_retainAutoreleasedReturnValue();
    lVar32 = param_4;
    func_0x00010bf43020();
    _objc_retainAutoreleasedReturnValue();
    lVar33 = param_2;
    func_0x00010bde25c0(param_2,param_3,lVar32);
    _objc_retainAutoreleasedReturnValue();
    lVar34 = param_4;
    func_0x00010c245600(param_4);
    func_0x00010be8f240(param_2,param_3,lVar34);
    lVar34 = param_4;
    func_0x00010c245640();
    _objc_retainAutoreleasedReturnValue();
    lVar35 = param_4;
    func_0x00010c2455e0();
    _objc_retainAutoreleasedReturnValue();
    lVar36 = param_2;
    func_0x00010be24480(param_2,param_3,lVar35);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c076320();
    lVar37 = param_4;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    lVar38 = param_4;
    func_0x00010bf38a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06ecc0();
    lVar39 = param_4;
    func_0x00010c281520();
    _objc_retainAutoreleasedReturnValue();
    lVar40 = param_2;
    func_0x00010bed1880(param_2,param_3,lVar39);
    _objc_retainAutoreleasedReturnValue();
    lVar41 = param_4;
    func_0x00010c0915a0();
    _objc_retainAutoreleasedReturnValue();
    lVar42 = param_4;
    func_0x00010bf32760();
    _objc_retainAutoreleasedReturnValue();
    lVar43 = param_2;
    func_0x00010bed18e0(param_2,param_3,lVar42);
    _objc_retainAutoreleasedReturnValue();
    lVar44 = param_4;
    func_0x00010c281320();
    _objc_retainAutoreleasedReturnValue();
    lVar45 = param_4;
    func_0x00010bf48840();
    _objc_retainAutoreleasedReturnValue();
    lVar46 = param_2;
    func_0x00010bde6380(param_2,param_3,lVar45);
    _objc_retainAutoreleasedReturnValue();
    lVar47 = param_4;
    func_0x00010c0d3a80();
    _objc_retainAutoreleasedReturnValue();
    lVar48 = param_2;
    func_0x00010be61920(param_2,param_3,lVar47);
    _objc_retainAutoreleasedReturnValue();
    lVar49 = param_4;
    func_0x00010c22cfc0();
    _objc_retainAutoreleasedReturnValue();
    lVar57 = param_4;
    func_0x00010c24ab20();
    func_0x00010bebec20(param_2,param_3,lVar57);
    lVar50 = param_4;
    func_0x00010c129ce0();
    _objc_retainAutoreleasedReturnValue();
    lVar51 = param_2;
    func_0x00010be8b0c0(param_2,param_3,lVar50);
    _objc_retainAutoreleasedReturnValue();
    lVar52 = param_4;
    func_0x00010bef4380();
    _objc_retainAutoreleasedReturnValue();
    lVar53 = param_4;
    func_0x00010bf32720();
    _objc_retainAutoreleasedReturnValue();
    lVar54 = param_2;
    func_0x00010bed18c0(param_2,param_3,lVar53);
    _objc_retainAutoreleasedReturnValue();
    lVar55 = param_4;
    func_0x00010c1074c0();
    _objc_retainAutoreleasedReturnValue();
    lVar56 = lVar55;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    lVar57 = param_4;
    func_0x00010bf62d40();
    _objc_retainAutoreleasedReturnValue();
    lVar58 = param_2;
    func_0x00010bdf7a80(param_2,param_3,lVar57);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07eda0();
    lVar59 = param_4;
    func_0x00010c13b280();
    _objc_retainAutoreleasedReturnValue();
    lVar60 = param_2;
    func_0x00010be601e0(param_2,param_3,lVar59);
    _objc_retainAutoreleasedReturnValue();
    lVar61 = param_4;
    func_0x00010c26a320();
    _objc_retainAutoreleasedReturnValue();
    lVar62 = param_4;
    func_0x00010c095fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar63 = param_2;
    func_0x00010be4b940(param_2,param_3,lVar62);
    _objc_retainAutoreleasedReturnValue();
    lVar64 = param_4;
    func_0x00010c112da0();
    _objc_retainAutoreleasedReturnValue();
    lVar65 = param_4;
    func_0x00010c0953c0();
    _objc_retainAutoreleasedReturnValue();
    lVar66 = param_2;
    func_0x00010be4b680(param_2,param_3,lVar65);
    _objc_retainAutoreleasedReturnValue();
    lVar67 = param_4;
    func_0x00010c095e40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    func_0x00010be4b880(param_2,param_3,lVar67);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0247a0(puVar68,param_3,lVar1,lVar2,lVar3,lVar4,lVar6,lVar7,lVar8,lVar11,
                        (long)param_1,(char)lVar14);
    _objc_release(param_2);
    _objc_release(lVar67);
    _objc_release(lVar66);
    _objc_release(lVar65);
    _objc_release(lVar64);
    _objc_release(lVar63);
    _objc_release(lVar62);
    _objc_release(lVar61);
    _objc_release(lVar60);
    _objc_release(lVar59);
    _objc_release(lVar58);
    _objc_release(lVar57);
    _objc_release(lVar56);
    _objc_release(lVar55);
    _objc_release(lVar54);
    _objc_release(lVar53);
    _objc_release(lVar52);
    _objc_release(lVar51);
    _objc_release(lVar50);
    _objc_release(lVar49);
    _objc_release(lVar48);
    _objc_release(lVar47);
    _objc_release(lVar46);
    _objc_release(lVar45);
    _objc_release(lVar44);
    _objc_release(lVar43);
    _objc_release(lVar42);
    _objc_release(lVar41);
    _objc_release(lVar40);
    _objc_release(lVar39);
    _objc_release(lVar38);
    _objc_release(lVar37);
    _objc_release(lVar36);
    _objc_release(lVar35);
    _objc_release(lVar34);
    _objc_release(lVar33);
    _objc_release(lVar32);
    _objc_release(lVar31);
    _objc_release(lVar30);
    _objc_release(lVar29);
    _objc_release(lVar28);
    _objc_release(lVar27);
    _objc_release(lVar26);
    _objc_release(lVar25);
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar13);
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
    _objc_release(lVar1);
    _objc_release(uVar69);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar68);
  return;
}



/* Entry: 10aeb1ae8; end: 10aeb1b17; -[SCLensMetadataTransformer _lensMetadataLensApiLevelForLensMetadata:] */

undefined4 FUN_10aeb1ae8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  func_0x00010bf04b60();
  uVar2 = 1;
  if (param_3 == 1) {
    uVar2 = 2;
  }
  uVar1 = 3;
  if (param_3 != 2) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 10aeb1b18; end: 10aeb1ccf; -[SCLensMetadataTransformer _hintTranslationsForLensHintTranslations:] */

void FUN_10aeb1b18(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar5 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (param_3 == (undefined1 *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar1 = param_3;
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0(puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    puVar1 = param_3;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf52a60();
    if (puVar3 != (undefined1 *)0x0) {
      lVar8 = *plStack_120;
      do {
        puVar9 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(puVar1);
          }
          uVar7 = *(undefined8 *)(lStack_128 + (long)puVar9 * 8);
          puVar6 = PTR_PTR_1126de700;
          _objc_alloc();
          puVar4 = param_3;
          func_0x00010c0e00e0(param_3,param_2,uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c01a800(puVar6,param_2,uVar7,puVar4);
          func_0x00010befa120(puVar2,param_2,puVar6);
          _objc_release(puVar6);
          _objc_release(puVar4);
          puVar9 = puVar9 + 1;
        } while (puVar3 != puVar9);
        puVar3 = puVar1;
        puVar5 = &uStack_130;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined1 *)0x0);
    }
    _objc_release(puVar1);
    puVar6 = puVar2;
    func_0x00010bf51e00();
    _objc_release(puVar2);
    puVar1 = (undefined1 *)puVar5;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126de708;
    puVar6 = (undefined *)0x0;
    if (puVar1 != (undefined1 *)0x0) {
      _objc_retain(puVar1);
      _objc_alloc(puVar2);
      puVar3 = puVar1;
      func_0x00010bdc3360(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar1;
      func_0x00010bf38a80(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010c27dd80(puVar1);
      func_0x00010be60200(param_3,param_2,puVar4);
      puVar4 = puVar1;
      func_0x00010c072920(puVar1);
      _objc_release(puVar1);
      func_0x00010c057d80(puVar2,param_2,puVar3,puVar9,param_3,puVar4);
      _objc_release(puVar9);
      _objc_release(puVar3);
      puVar6 = puVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10aeb1cd0; end: 10aeb1da3; -[SCLensMetadataTransformer _metadataLensResourceForLensResource:] */

void FUN_10aeb1cd0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126de708;
  puVar5 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    lVar2 = param_3;
    func_0x00010bdc3360(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bf38a80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c27dd80(param_3);
    func_0x00010be60200(param_1,param_2,lVar4);
    lVar4 = param_3;
    func_0x00010c072920(param_3);
    _objc_release(param_3);
    func_0x00010c057d80(puVar1,param_2,lVar2,lVar3,param_1,lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar5 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10aeb1da4; end: 10aeb1e5f; -[SCLensMetadataTransformer _metadataResourceContainerForResourceContainer:] */

void FUN_10aeb1da4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010c13b540(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bf43280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar2 = PTR_PTR_1126de710;
    _objc_alloc(PTR_PTR_1126de710);
    func_0x00010c025720();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aeb1e60; end: 10aeb1e6b;  */

void FUN_10aeb1e60(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be60170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__metadataLensResourceForLensReso_1125759f8,
             param_2);
  return;
}



/* Entry: 10aeb1e6c; end: 10aeb1e8f; -[SCLensMetadataTransformer _metadataResourceTypeForLensResourceType:] */

uint FUN_10aeb1e6c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  
  uVar1 = (uint)(0x403000100 >> ((param_3 & 7) << 3));
  if (4 < param_3) {
    uVar1 = 0;
  }
  return uVar1 & 7;
}



/* Entry: 10aeb1e90; end: 10aeb1eb7; -[SCLensMetadataTransformer _metadataTypeLensForLensType:] */

int FUN_10aeb1e90(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  
  if (param_3 - 1U < 0x19) {
    cVar1 = (&UNK_10e5329f7)[param_3];
  }
  else {
    cVar1 = -1;
  }
  return (int)cVar1;
}



/* Entry: 10aeb1eb8; end: 10aeb1ec3; -[SCLensMetadataTransformer _metadataLensSectionForLensSection:] */

bool FUN_10aeb1eb8(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 0;
}



/* Entry: 10aeb1ec4; end: 10aeb25d3; -[SCLensMetadataTransformer _metadataSponsoredSlugForLensSponsoredSlug:] */

void FUN_10aeb1ec4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar23 = (undefined *)0x0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c25dfa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 == 0) {
      puVar24 = (undefined *)0x0;
    }
    else {
      uVar1 = param_3;
      func_0x00010c25dfa0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf8ac40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar1);
      if (uVar2 == 0) {
        uStack_70 = (undefined *)0x0;
      }
      else {
        uStack_70 = PTR_PTR_1126de718;
        _objc_alloc();
        uVar1 = param_3;
        func_0x00010c25dfa0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf8ac40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c2be880();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_3;
        func_0x00010c25dfa0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf8ac40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c2beba0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c063600(uStack_70,param_2,uVar3,uVar6);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
      }
      puVar24 = PTR_PTR_1126de720;
      _objc_alloc();
      uVar1 = param_3;
      func_0x00010c25dfa0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfb3a80();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c25dfa0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c26c800();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010c25dfa0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf40c40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_3;
      func_0x00010c25dfa0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf8ac20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c013ac0(puVar24,param_2,uVar2,uVar4,uVar6,uVar8,uStack_70);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(uStack_70);
    }
    uVar1 = param_3;
    func_0x00010bf6a9a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 == 0) {
      puVar25 = (undefined *)0x0;
    }
    else {
      uVar1 = param_3;
      func_0x00010bf6a9a0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c29e100();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar1);
      if (uVar2 == 0) {
        uStack_70 = (undefined *)0x0;
      }
      else {
        uStack_70 = PTR_PTR_1126de728;
        _objc_alloc();
        puVar23 = PTR_PTR_1126de718;
        _objc_alloc(PTR_PTR_1126de718);
        uVar1 = param_3;
        func_0x00010bf6a9a0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c29e100();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c2be880();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_3;
        func_0x00010bf6a9a0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c29e100();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c2beba0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c063600(puVar23,param_2,uVar3,uVar6);
        uVar7 = param_3;
        func_0x00010bf6a9a0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c29e100();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c2a5040();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = param_3;
        func_0x00010bf6a9a0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010c29e100();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010bfe0640();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c037940(uStack_70,param_2,puVar23,uVar9,uVar12);
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(puVar23);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
      }
      puVar25 = PTR_PTR_1126de730;
      _objc_alloc();
      uVar1 = param_3;
      func_0x00010bf6a9a0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010beffa20();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010bf6a9a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c104260();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010bf6a9a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bfe3c20();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_3;
      func_0x00010bf6a9a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c2a0740();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_3;
      func_0x00010bf6a9a0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = param_3;
      func_0x00010bf6a9a0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010c24aae0();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = param_3;
      func_0x00010bf6a9a0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar13;
      func_0x00010c24a240();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = param_3;
      func_0x00010bf6a9a0();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar15;
      func_0x00010c26f0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar16;
      func_0x00010c282760();
      uVar18 = param_3;
      func_0x00010bf6a9a0();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar18;
      func_0x00010c0b5480();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = param_3;
      func_0x00010bf6a9a0();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar20;
      func_0x00010c0b54a0();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar21;
      func_0x00010c282760();
      func_0x00010c062080(puVar25,param_2,uStack_70,uVar2,uVar4,uVar6,uVar8,uVar10,uVar12,uVar14,
                          uVar17 & 0xffffffff,uVar19,uVar22 & 0xffffffff);
      _objc_release(uVar21);
      _objc_release(uVar20);
      _objc_release(uVar19);
      _objc_release(uVar18);
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(uStack_70);
    }
    puVar23 = PTR_PTR_1126de738;
    _objc_alloc(PTR_PTR_1126de738);
    func_0x00010c04eb60();
    _objc_release(puVar25);
    _objc_release(puVar24);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar23);
  return;
}



/* Entry: 10aeb25d4; end: 10aeb260f; -[SCLensMetadataTransformer _scheduleIntervalsForLensScheduleIntervals:] */

void FUN_10aeb25d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010c0b8620(param_3,param_2,&PTR___NSConcreteGlobalBlock_110c8ef28,0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aeb2610; end: 10aeb26bf;  */

void FUN_10aeb2610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126de740;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c24e860(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  uVar3 = param_3;
  uVar4 = param_1;
  func_0x00010bf946c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c26f320(uVar3);
  func_0x00010c04ba40(param_1,uVar4,puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aeb26c0; end: 10aeb28a7; -[SCLensMetadataTransformer _unlockableTrackInfoForLensUnlockableTrackInfo:] */

void FUN_10aeb26c0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  
  puVar1 = PTR_PTR_1126de748;
  puVar14 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    uVar2 = param_3;
    func_0x00010bef4d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c11ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c23e500();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c282760();
    uVar6 = param_3;
    func_0x00010bf93c40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010bef5fa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    func_0x00010c11fae0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_3;
    func_0x00010c11fa40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_3;
    func_0x00010bf93ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_3;
    func_0x00010c23d7c0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_3;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = param_3;
    func_0x00010bef4d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010bff1e80(puVar1,param_2,uVar2,uVar3,uVar5 & 0xffffffff,uVar6,uVar7,uVar8,uVar9,uVar10
                        ,uVar11,uVar12,uVar13);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar14 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 10aeb28a8; end: 10aeb2917; -[SCLensMetadataTransformer _assetsForLensAssests:] */

void FUN_10aeb28a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  if (param_3 != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_10aeb2918;
    puStack_20 = &UNK_110c8ef48;
    uStack_18 = param_1;
    func_0x00010c0b8620(param_3,param_2,&puStack_38,0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aeb2918; end: 10aeb2b97;  */

void FUN_10aeb2918(long param_1,undefined8 param_2)

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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar1 = PTR_PTR_1126de750;
  _objc_retain(param_2);
  _objc_alloc();
  uVar2 = param_2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c23c2c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010bf38a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80(param_2);
  func_0x00010bdcf7c0();
  func_0x00010c136b80(param_2);
  func_0x00010be91dc0();
  func_0x00010c14e120();
  func_0x00010c1087e0();
  uVar7 = param_2;
  func_0x00010c0ed520();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010bf933c0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_2;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_2;
  func_0x00010bf93ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_2;
  func_0x00010bf93e80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  uVar13 = param_2;
  func_0x00010c257200(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bdcf9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bc80();
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aeb2b98; end: 10aeb2bbf; -[SCLensMetadataTransformer _assestTypeForLensAssestType:] */

int FUN_10aeb2b98(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  
  if (param_3 - 1U < 10) {
    cVar1 = (&UNK_10e532a10)[param_3];
  }
  else {
    cVar1 = '\0';
  }
  return (int)cVar1;
}



/* Entry: 10aeb2bc0; end: 10aeb2be7; -[SCLensMetadataTransformer _requestingTimeForLensRequestTiming:] */

uint FUN_10aeb2bc0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  
  uVar1 = (uint)(0x5040302050100 >> ((param_3 & 7) << 3));
  if (6 < param_3) {
    uVar1 = 0;
  }
  return uVar1 & 7;
}



/* Entry: 10aeb2be8; end: 10aeb2c23; -[SCLensMetadataTransformer _assetStorageOptionsForLensAssetStorageOptions:] */

void FUN_10aeb2be8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010c0b8620(param_3,param_2,&PTR___NSConcreteGlobalBlock_110c8ef98,0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aeb2c24; end: 10aeb2cdf;  */

void FUN_10aeb2c24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  func_0x00010c27dd80();
  puVar1 = PTR_PTR_1126de758;
  _objc_alloc(PTR_PTR_1126de758);
  uVar2 = param_2;
  func_0x00010c28f340(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf38a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c032180(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aeb2ce0; end: 10aeb2cf7; -[SCLensMetadataTransformer _devicePositionForCaptureDevicePosition:] */

undefined1 FUN_10aeb2ce0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_3 != 1) {
    uVar1 = param_3 == 0;
  }
  return uVar1;
}



/* Entry: 10aeb2cf8; end: 10aeb2f2f; -[SCLensMetadataTransformer _communityDataForCommunityLensData:] */

void FUN_10aeb2cf8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
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
  undefined *puVar13;
  undefined *puVar14;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c092080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar14 = PTR_PTR_1126de760;
      _objc_alloc();
      lVar1 = param_3;
      func_0x00010c092080();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010c092080();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c291440();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3;
      func_0x00010c092080(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c2936e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_3;
      func_0x00010c092080(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c2427a0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_3;
      func_0x00010c092080(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c242800();
      lVar11 = param_3;
      func_0x00010c092080(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010c078fa0();
      func_0x00010c05bdc0(puVar14,param_2,lVar2,lVar4,lVar6,lVar8,lVar10,lVar12);
      _objc_release(lVar11);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    puVar13 = PTR_PTR_1126de768;
    _objc_alloc(PTR_PTR_1126de768);
    lVar1 = param_3;
    func_0x00010bf0ea80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c14f7e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c023620(puVar13,param_2,puVar14,lVar1,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(puVar14);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 10aeb2f30; end: 10aeb2f47; -[SCLensMetadataTransformer _replyTypeForLensSnappablesReplyType:] */

undefined1 FUN_10aeb2f30(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_3 != 2) {
    uVar1 = param_3 == 1;
  }
  return uVar1;
}



/* Entry: 10aeb2f48; end: 10aeb2f83; -[SCLensMetadataTransformer _gradientColorsForSnappablesPlayButtonGradientHexCodeColors:] */

void FUN_10aeb2f48(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010c0b8620(param_3,param_2,&PTR___NSConcreteGlobalBlock_110c8efb8,0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aeb2f84; end: 10aeb2fdf;  */

void FUN_10aeb2f84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c067fc0(param_2);
  func_0x00010bf41580(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf09c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aeb2fe0; end: 10aeb3683; -[SCLensMetadataTransformer _unlockablesAttachmentForLensUnlockablesAttachment:] */

void FUN_10aeb2fe0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar26 = (undefined *)0x0;
  }
  else {
    uVar1 = param_3;
    func_0x00010bf67c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 == 0) {
      uStack_70 = (undefined *)0x0;
    }
    else {
      uStack_70 = PTR_PTR_1126de770;
      _objc_alloc();
      uVar1 = param_3;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c28f280();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfeb020();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c282760();
      uVar6 = param_3;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf06520();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_3;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010bfeaf20();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = param_3;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010c06aec0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = param_3;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar12;
      func_0x00010c06aee0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar13;
      func_0x00010c282760();
      uVar15 = param_3;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar15;
      func_0x00010bf02a60();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = param_3;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar17;
      func_0x00010bf02ac0();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = param_3;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar19;
      func_0x00010c269100();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = param_3;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar21;
      func_0x00010bf68380();
      _objc_retainAutoreleasedReturnValue();
      uVar23 = param_3;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      uVar24 = uVar23;
      func_0x00010bf67dc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c059e40(uStack_70,param_2,uVar2,uVar5 & 0xffffffff,uVar7,uVar9,uVar11,
                          uVar14 & 0xffffffff,uVar16,uVar18,uVar20,uVar22,uVar24);
      _objc_release(uVar24);
      _objc_release(uVar23);
      _objc_release(uVar22);
      _objc_release(uVar21);
      _objc_release(uVar20);
      _objc_release(uVar19);
      _objc_release(uVar18);
      _objc_release(uVar17);
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    uVar1 = param_3;
    func_0x00010c0b4b40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 == 0) {
      puVar28 = (undefined *)0x0;
    }
    else {
      puVar28 = PTR_PTR_1126de778;
      _objc_alloc(PTR_PTR_1126de778);
      uVar1 = param_3;
      func_0x00010c0b4b40(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c29a460();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c0b4b40(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c29a900();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c282760();
      uVar6 = param_3;
      func_0x00010c0b4b40(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c29bbe0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c060e60(puVar28,param_2,uVar2,uVar5 & 0xffffffff,uVar7);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    uVar1 = param_3;
    func_0x00010c2a3bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 == 0) {
      puVar27 = (undefined *)0x0;
    }
    else {
      puVar27 = PTR_PTR_1126de780;
      _objc_alloc();
      uVar1 = param_3;
      func_0x00010c2a3bc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c2a4480();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c2a3bc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c22dfc0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c282760();
      func_0x00010c062fa0(puVar27,param_2,uVar2,uVar5 & 0xffffffff);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    uVar1 = param_3;
    func_0x00010bf054e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar25 = (undefined *)0x0;
    if (uVar1 != 0) {
      puVar25 = PTR_PTR_1126de788;
      _objc_alloc(PTR_PTR_1126de788);
      uVar1 = param_3;
      func_0x00010bf054e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf05ba0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010bf054e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c06aee0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010bf054e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf02aa0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_3;
      func_0x00010bf054e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf052e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff3520(puVar25,param_2,uVar2,uVar4,uVar6,uVar8);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    puVar26 = PTR_PTR_1126de790;
    _objc_alloc(PTR_PTR_1126de790);
    uVar1 = param_3;
    func_0x00010bf0d600(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bf5d560(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c09e4a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff4ce0(puVar26,param_2,uVar1,puVar28,puVar27,uVar2,puVar25,uStack_70,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(puVar25);
    _objc_release(puVar27);
    _objc_release(puVar28);
    _objc_release(uStack_70);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar26);
  return;
}



/* Entry: 10aeb3684; end: 10aeb3723; -[SCLensMetadataTransformer _unlockablesCarouselGroupForLensUnlockablesCarouselGroup:] */

void FUN_10aeb3684(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126de798;
  puVar4 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    lVar2 = param_3;
    func_0x00010bfcef60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bf32a40(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010bf885a0(lVar3);
    func_0x00010c0191e0(puVar1,param_2,lVar2);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar4 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10aeb3724; end: 10aeb379f; -[SCLensMetadataTransformer _connectedLensInfoForConnectedLensInfo:] */

void FUN_10aeb3724(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126de7a0;
  puVar3 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    lVar2 = param_3;
    func_0x00010bf05300(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010bff3380(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    puVar3 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10aeb37a0; end: 10aeb37d7; -[SCLensMetadataTransformer _musicTrackMetadataForLensMusicTrackMetadata:] */

void FUN_10aeb37a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010c0b8600(param_3,param_2,&PTR___NSConcreteGlobalBlock_110c8eff8);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aeb37d8; end: 10aeb3887;  */

void FUN_10aeb37d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126de7a8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c277e80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf4d360(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c290120(param_2);
  _objc_release(param_2);
  func_0x00010c054bc0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aeb3888; end: 10aeb389b; -[SCLensMetadataTransformer _sponsoredTypeForLensSponsoredType:] */

int FUN_10aeb3888(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  
  cVar1 = '\0';
  if (param_3 - 1U < 0xb) {
    cVar1 = (char)(param_3 - 1U) + '\x01';
  }
  return (int)cVar1;
}



/* Entry: 10aeb389c; end: 10aeb3933; -[SCLensMetadataTransformer _remoteApiInfoForRemoteApiInfo:] */

void FUN_10aeb389c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126de7b0;
  puVar4 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    lVar2 = param_3;
    func_0x00010c129dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar3 = lVar2;
    func_0x00010bf00560(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03df00(puVar1,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar4 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10aeb3934; end: 10aeb39f3; -[SCLensMetadataTransformer _customizationInfoForCustomizationMetadata:] */

void FUN_10aeb3934(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126de7b8;
  if (param_3 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_3);
    _objc_alloc(puVar3);
    lVar1 = param_3;
    func_0x00010c27dd80(param_3);
    lVar2 = param_3;
    func_0x00010c106220(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010bdf7a60(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c055f00(puVar3,param_2,(int)(char)lVar1,param_1);
    _objc_release(param_1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10aeb39f4; end: 10aeb3ae7; -[SCLensMetadataTransformer _customizationBodyForCustomizationBody:] */

void FUN_10aeb39f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c111ee0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = param_3;
      func_0x00010c111ee0(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126de7c0;
    _objc_alloc(PTR_PTR_1126de7c0);
    lVar1 = param_3;
    func_0x00010bf62d20(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf62c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008120(puVar4,param_2,lVar1,lVar2,lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10aeb3ae8; end: 10aeb3af7; -[SCLensMetadataTransformer _unlockablesCarouselGlobalScoreListForLensUnlockablesCarouselGlobalScoreList:] */

void FUN_10aeb3ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_compactMap__1125ae648,&PTR___NSConcreteGlobalBlock_110c8f038);
  return;
}



/* Entry: 10aeb3af8; end: 10aeb3b6f;  */

void FUN_10aeb3af8(float param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126de7c8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bf32b00(param_3);
  func_0x00010bfcd100(param_3);
  _objc_release(param_3);
  func_0x00010bffcd60((double)param_1,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aeb3b70; end: 10aeb3c33; -[SCLensMetadataTransformer _lensPreviewForLensPreview:] */

void FUN_10aeb3b70(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126de7d0;
  puVar6 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    lVar2 = param_3;
    func_0x00010c28f800(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c15e6c0(param_3);
    lVar4 = param_3;
    func_0x00010c15e5c0(param_3);
    lVar5 = param_3;
    func_0x00010c26e500(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c05a440(puVar1,param_2,lVar2,lVar3,lVar4,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar2);
    puVar6 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10aeb3c34; end: 10aeb3cdf; -[SCLensMetadataTransformer _lensMiscDataForLensMiscData:] */

void FUN_10aeb3c34(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar1 = param_3;
    func_0x00010bf15220(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfb8680();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c067fc0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126de7d8;
    _objc_alloc(PTR_PTR_1126de7d8);
    uVar1 = param_3;
    func_0x00010c29c5c0(param_3);
    _objc_release(param_3);
    func_0x00010c061b00(puVar4,param_2,uVar1,uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aeb3ce0; end: 10aeb3da3; -[SCLensMetadataTransformer _lensPlusTierConfigForLensPlusTierConfig:] */

void FUN_10aeb3ce0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bfb7600(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4b7c0(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar2 = PTR_PTR_1126de7e0;
    _objc_alloc(PTR_PTR_1126de7e0);
    lVar1 = param_3;
    func_0x00010c280e00(param_3);
    lVar3 = param_3;
    func_0x00010bf61400(param_3);
    _objc_release(param_3);
    func_0x00010c0590c0(puVar2,param_2,lVar1,lVar3,param_1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aeb3da4; end: 10aeb3e47; -[SCLensMetadataTransformer _lensPlusFreemiumInfoForLensPlusFreemiumInfo:] */

void FUN_10aeb3da4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126de7e8;
  puVar5 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    lVar2 = param_3;
    func_0x00010bfceb20(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c099040(param_3);
    lVar4 = param_3;
    func_0x00010c155400(param_3);
    _objc_release(param_3);
    func_0x00010c018e40(puVar1,param_2,lVar2,lVar3,lVar4);
    _objc_release(lVar2);
    puVar5 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10aeb3e48; end: 10aeb3e53; -[SCLensMetadataTransformer .cxx_destruct] */

void FUN_10aeb3e48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeb3e54; end: 10aeb3ef7; -[SCLensScheduleNamespaceDataLensExtensionSerializer dataFromLensExtensions:error:] */

void FUN_10aeb3e54(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uStack_38 = 0;
    puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,param_3,0,&uStack_38);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uStack_38;
    _objc_retain(uStack_38);
    if (param_4 != (undefined8 *)0x0) {
      _objc_retainAutorelease(uVar1);
      *param_4 = uVar1;
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10aeb3ef8; end: 10aeb3f0f;  */

void FUN_10aeb3ef8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10aeb3f10; end: 10aeb4033;  */

void FUN_10aeb3f10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b0cb8;
  _objc_alloc();
  uVar4 = param_2;
  func_0x00010bf63640(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008360();
  _objc_retain(0);
  _objc_release(uVar4);
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126de5a0;
    _objc_alloc(PTR_PTR_1126de5a0);
    uVar4 = param_2;
    func_0x00010bf38a80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffe040(puVar2);
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126de598;
    func_0x00010bf5cde0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined **)(lVar5 + 0x28) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(0);
  _objc_release(param_2);
  return;
}



/* Entry: 10aeb4034; end: 10aeb40df;  */

void FUN_10aeb4034(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_2);
  func_0x00010c0d53e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0950c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar1);
  if (lVar3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126de598;
    func_0x00010c098140(PTR_PTR_1126de598);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aeb40e0; end: 10aeb4487; -[SCLensScheduleNamespaceDataModelTransformer namespaceDataFromNamespaceDataModel:] */

void FUN_10aeb40e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0d53e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c0ed720();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      _objc_retain(lVar1);
      _objc_release(lVar2);
      lVar2 = lVar1;
    }
    puVar4 = PTR_PTR_1126b6868;
    _objc_alloc();
    func_0x00010c02dda0();
    if (puVar4 == (undefined *)0x0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      lVar3 = param_3;
      func_0x00010bef0bc0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_10aeb4488;
      puStack_90 = &UNK_110c8f148;
      uStack_88 = param_1;
      _objc_retain(lVar2);
      lVar5 = lVar3;
      lStack_80 = lVar2;
      func_0x00010bf43280(lVar3,param_2,&puStack_a8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      lVar3 = param_3;
      func_0x00010c105c60();
      _objc_retainAutoreleasedReturnValue();
      puStack_d8 = puVar13;
      uStack_d0 = 0xc2000000;
      uStack_c8 = 0x10aeb449c;
      puStack_c0 = &UNK_110c8f148;
      uStack_b8 = param_1;
      _objc_retain(lVar2);
      lVar6 = lVar3;
      lStack_b0 = lVar2;
      func_0x00010bf43280(lVar3,param_2,&puStack_d8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      lVar3 = param_3;
      func_0x00010c0da7c0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar3;
      func_0x00010bf43280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      puVar8 = PTR_PTR_1126de318;
      func_0x00010c095120(PTR_PTR_1126de318,param_2,lVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126de690;
      func_0x00010be91500(PTR_PTR_1126de690,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126de690;
      func_0x00010be60be0(PTR_PTR_1126de690,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR_PTR_1126de338;
      _objc_alloc();
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar3 = param_3;
      func_0x00010c27d100(param_3);
      func_0x00010c0df880(puVar11,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010c08a700(param_3);
      func_0x00010bf655e0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010bfa81c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be4f720(param_1,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c041c20(puVar13,param_2,puVar4,lVar5,lVar6,puVar8,puVar11,puVar12,lVar7,0,puVar10,
                          param_1,puVar9);
      _objc_release(param_1);
      _objc_release(lVar3);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lStack_b0);
      _objc_release(lVar5);
      _objc_release(lStack_80);
    }
    _objc_release(puVar4);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 10aeb4488; end: 10aeb44c7;  */

void FUN_10aeb4488(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0950d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_lensMetadataFromLensMetadataMode_112602e40,param_2,
             *(undefined8 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 10aeb44c8; end: 10aeb45ab; -[SCLensScheduleNamespaceDataModelTransformer _geoFenceWithGeofenceModel:] */

void FUN_10aeb44c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar3 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bfc14a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0b8620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126de5f8;
    _objc_alloc(PTR_PTR_1126de5f8);
    lVar1 = param_3;
    func_0x00010bfc1580(param_3);
    _objc_release(param_3);
    func_0x00010c0178c0(puVar3,param_2,lVar1,lVar2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10aeb45ac; end: 10aeb45b7;  */

void FUN_10aeb45ac(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1c6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__geoCoordinateFromGeoCoordinateM_112564b50,
             param_2);
  return;
}


