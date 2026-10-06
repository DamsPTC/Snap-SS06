/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aeb8620; end: 10aeb862f; +[SCLensUpdateMetadata updateMetadataFromUnlockableChecksumResponses:] */

void FUN_10aeb8620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_map__11260bb98,&PTR___NSConcreteGlobalBlock_110c8f640);
  return;
}



/* Entry: 10aeb8630; end: 10aeb86f7;  */

void FUN_10aeb8630(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126de878;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bfe5e40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf38a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf3cba0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c01b3a0(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aeb86f8; end: 10aeb88ef; +[SCLensUpdateMetadata _updateMetadataFromChecksumEntry:overrideTtlMinutes:lensMetadataMapper:] */

void FUN_10aeb86f8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bfdd8c0();
  if ((int)lVar1 == 0) {
    uVar6 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c278f20(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_5;
    func_0x00010c095280(param_5,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c107500();
  puVar7 = PTR_PTR_1126de878;
  if (lVar1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c1074e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4b8c0(puVar7,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  puVar2 = PTR_PTR_1126de878;
  _objc_alloc(PTR_PTR_1126de878);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_3;
  func_0x00010bfe5ea0(param_3);
  func_0x00010c0df7c0(puVar3,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf38a80(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_4 == 0) {
    lVar4 = param_3;
    func_0x00010bf26d40(param_3);
    func_0x00010c0df720((double)lVar4 / 60000.0,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b3a0(puVar2,param_2,puVar3,lVar1,puVar5,uVar6,puVar7);
    _objc_release(puVar5);
  }
  else {
    func_0x00010c01b3a0(puVar2,param_2,puVar3,lVar1,param_4,uVar6,puVar7);
  }
  _objc_release(lVar1);
  _objc_release(puVar3);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aeb88f0; end: 10aeb89b7; +[SCLensUpdateMetadata _lensPrefetchContextsFromLPPrefetchContexts:] */

void FUN_10aeb88f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_38 = FUN_10aeb89b8;
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



/* Entry: 10aeb89b8; end: 10aeb89db;  */

void FUN_10aeb89b8(long param_1,int param_2)

{
  if (param_2 - 1U < 3) {
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,
               (&PTR_PTR_110c8f660)[param_2 - 1U]);
    return;
  }
  return;
}



/* Entry: 10aeb89dc; end: 10aeb8a9b; +[SCLensScheduleMetadataStoreProvider _createScheduleServiceWithScheduleV3ServiceProvider:studySettingsProvider:namespaceName:] */

void FUN_10aeb89dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10aeb8a9c;
  puStack_48 = &UNK_110c8f6a8;
  uStack_40 = param_5;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bfb2660(param_3,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10aeb8a9c; end: 10aeb8ba3;  */

void FUN_10aeb8a9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_2;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010c02dd60();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c15f740(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126de428;
  func_0x00010be86600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    func_0x00010c15f740(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126de428;
    func_0x00010be86600(PTR_PTR_1126de428);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aeb8ba4; end: 10aeb8c03;  */

void FUN_10aeb8ba4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c15f740(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126de428;
  func_0x00010be86600(PTR_PTR_1126de428);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aeb8c04; end: 10aeb8c4b; -[SCLensScheduleNamespaceReadOnlyManager startUpdatingWithParameters:] */

void FUN_10aeb8c04(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c28d880();
  if (lVar1 == 3) {
    func_0x00010c251680(*(undefined8 *)(param_1 + 8),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aeb8c4c; end: 10aeb8c53; -[SCLensScheduleNamespaceReadOnlyManager cachedNamespaceData] */

void FUN_10aeb8c4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf273b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cachedNamespaceData_1125a7690);
  return;
}



/* Entry: 10aeb8c54; end: 10aeb8c5b; -[SCLensScheduleNamespaceReadOnlyManager cachedNamespaceDataDictionary] */

void FUN_10aeb8c54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf273d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cachedNamespaceDataDictionary_1125a7698);
  return;
}



/* Entry: 10aeb8c5c; end: 10aeb8c67; -[SCLensScheduleNamespaceReadOnlyManager .cxx_destruct] */

void FUN_10aeb8c5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeb8c68; end: 10aeb8cdb; -[SCStaticAllLensesMetadataStore initWithMetadataStore:] */

undefined1 * FUN_10aeb8c68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112701730;
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



/* Entry: 10aeb8cdc; end: 10aeb8e4b; -[SCStaticAllLensesMetadataStore lensForId:] */

void FUN_10aeb8cdc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c266b80(*(undefined8 *)(param_1 + 8));
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
      uVar7 = 0;
LAB_10aeb8df4:
      _objc_release(lVar2);
      _objc_release(lVar2);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
      return;
    }
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar7 = *(ulong *)(lVar8 * 8);
      uVar4 = uVar7;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0720c0();
      _objc_release(uVar4);
      if ((uVar5 & 1) != 0) {
        _objc_retain(uVar7);
        goto LAB_10aeb8df4;
      }
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10aeb8e4c; end: 10aeb8e57; -[SCStaticAllLensesMetadataStore .cxx_destruct] */

void FUN_10aeb8e4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeb8e58; end: 10aeb8eb3; -[SCUnlockLensController scanUnlockedLensesFromResponse:lensesType:] */

void FUN_10aeb8e58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_10aeb8eb4;
  puStack_20 = &UNK_110c8f7c8;
  uStack_18 = param_4;
  func_0x00010c0b8600(param_3,param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aeb8eb4; end: 10aeb8f2b;  */

void FUN_10aeb8eb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b0820;
  func_0x00010c094120(PTR_PTR_1126b0820,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2bbd20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10aeb8f2c; end: 10aeb900b; -[SCUnlockLensController processUnlockedLensesResponse:] */

void FUN_10aeb8f2c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uStack_40 = 0;
    _objc_copyWeak(auStack_48,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10aeb900c; end: 10aeb916b;  */

void FUN_10aeb900c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c281740(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf51e00();
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c281740(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12adc0();
    _objc_release(lVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c281740(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c281760(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010be4c1e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    lVar6 = lVar1;
    func_0x00010c281740(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
    _objc_release(lVar6);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10aeb916c;
    puStack_50 = &UNK_110842e18;
    lStack_48 = lVar1;
    func_0x000107c312d0("APPSTORE",&puStack_68);
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10aeb916c; end: 10aeb91e7;  */

void FUN_10aeb916c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = uVar4;
  func_0x00010c281740(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c280c80(uVar1,param_2,uVar4,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aeb91e8; end: 10aeb92af; -[SCUnlockLensController _lensesByScaningAndResolvingNewGeofiltersList:cachedLenses:lensesType:checksumResponses:] */

void FUN_10aeb91e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c14f5a0(param_1,param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126de878;
  func_0x00010c287c60(PTR_PTR_1126de878,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c098360(uVar3,param_2,param_4,lVar1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10aeb92b0; end: 10aeb9343; -[SCUnlockLensController removeFromCache:] */

void FUN_10aeb92b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10aeb9344;
  puStack_50 = &UNK_110844b80;
  uStack_38 = 0;
  lStack_48 = param_1;
  uStack_40 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 10aeb9344; end: 10aeb94b7;  */

void FUN_10aeb9344(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c281740(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10aeb94b8;
  puStack_60 = &UNK_110857a38;
  puStack_58 = puVar4;
  _objc_retain();
  uVar2 = uVar3;
  func_0x00010bfaea20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21bda0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c14f580();
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x10aeb9504;
  puStack_90 = &UNK_110841f80;
  uStack_88 = *(undefined8 *)(param_1 + 0x20);
  uStack_80 = uVar6;
  _objc_retain();
  func_0x000107c312d0("APPSTORE",&puStack_a8);
  _objc_release(uStack_80);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(puStack_58);
  _objc_release(puVar4);
  _objc_release(uVar3);
  return;
}



/* Entry: 10aeb94b8; end: 10aeb953f;  */

uint FUN_10aeb94b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 10aeb9540; end: 10aeb9597; -[SCUnlockLensController clearCache] */

void FUN_10aeb9540(long param_1,undefined8 param_2)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10aeb9598;
  puStack_28 = &UNK_110848c48;
  uStack_18 = 0;
  lStack_20 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_40);
  return;
}



/* Entry: 10aeb9598; end: 10aeb95cb;  */

void FUN_10aeb9598(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c281740(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aeb95cc; end: 10aeb96cb; -[SCUnlockLensController cachedLensesFuture] */

void FUN_10aeb95cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10aeb9678;
  puStack_50 = &UNK_110844b80;
  uStack_38 = 0;
  puStack_48 = puVar1;
  lStack_40 = param_1;
  _objc_retain();
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_68);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_48);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aeb96cc; end: 10aeb97c7; -[SCUnlockLensController lensIdToChecksumMap] */

void FUN_10aeb96cc(long param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  ppuVar2 = &puStack_80;
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10aeb97c8;
  uStack_30 = 0x10aeb97d8;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10aeb97e0;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  _objc_retainBlock();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010c06fc80();
  if (iVar1 == 0) {
    func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x18));
  }
  else {
    (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
  }
  uVar3 = puStack_48[5];
  _objc_retain(uVar3);
  _objc_release(ppuVar2);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10aeb97c8; end: 10aeb97df;  */

void FUN_10aeb97c8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10aeb97e0; end: 10aeb984b;  */

void FUN_10aeb97e0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(lVar1 + 8);
  func_0x00010c281740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c094600(uVar4,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10aeb984c; end: 10aeb9853; -[SCUnlockLensController performer] */

undefined8 FUN_10aeb984c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aeb9854; end: 10aeb9883; -[SCUnlockLensController setPerformer:] */

void FUN_10aeb9854(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10aeb9884; end: 10aeb988b; -[SCUnlockLensController filteringPerformer] */

undefined8 FUN_10aeb9884(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10aeb988c; end: 10aeb98bb; -[SCUnlockLensController setFilteringPerformer:] */

void FUN_10aeb988c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10aeb98bc; end: 10aeb98eb; -[SCUnlockLensController setUnlockedLenses:] */

void FUN_10aeb98bc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10aeb98ec; end: 10aeb993b; -[SCUnlockableDataStoreBaseFilter filteringList] */

void FUN_10aeb98ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c106820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20(uVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aeb993c; end: 10aeb9a9f; -[SCUnlockableDataStoreBaseFilter addEntry:] */

void FUN_10aeb993c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  lVar1 = param_1;
  func_0x00010c2968c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    uVar7 = *(ulong *)(param_1 + 0x10);
    lVar2 = param_1;
    func_0x00010c106820(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar7,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    uVar3 = uVar7;
    func_0x00010bf4b900(uVar7,param_2,lVar1);
    if ((uVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c226ce0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      puVar5 = puVar4;
      func_0x00010bf51e00(puVar4);
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      lVar2 = param_1;
      func_0x00010c106820(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar8,param_2,puVar5,lVar2);
      _objc_release(lVar2);
      _objc_release(puVar5);
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010bf5e5e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x30) = uVar8;
      _objc_release(uVar6);
      _objc_release(puVar4);
    }
    _objc_release(uVar7);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10aeb9aa0; end: 10aeb9c03; -[SCUnlockableDataStoreBaseFilter removeEntry:] */

void FUN_10aeb9aa0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  lVar1 = param_1;
  func_0x00010c2968c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    uVar7 = *(ulong *)(param_1 + 0x10);
    lVar2 = param_1;
    func_0x00010c106820(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar7,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    uVar3 = uVar7;
    func_0x00010bf4b900(uVar7,param_2,lVar1);
    if ((uVar3 & 1) != 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c226ce0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360();
      puVar5 = puVar4;
      func_0x00010bf51e00(puVar4);
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      lVar2 = param_1;
      func_0x00010c106820(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar8,param_2,puVar5,lVar2);
      _objc_release(lVar2);
      _objc_release(puVar5);
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010bf5e5e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x30) = uVar8;
      _objc_release(uVar6);
      _objc_release(puVar4);
    }
    _objc_release(uVar7);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10aeb9c04; end: 10aeb9c9f; -[SCUnlockableDataStoreBaseFilter clear] */

void FUN_10aeb9c04(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = param_1;
  func_0x00010c106820(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cd660(uVar3,param_2,lVar1);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf5e5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10aeb9ca0; end: 10aeb9cff; -[SCUnlockableDataStoreBaseFilter validateEntry:] */

void FUN_10aeb9ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  lVar4 = *(long *)(puVar1 + 0x20);
  if (lVar4 == 0) {
    puVar2 = puVar1;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(puVar1 + 0x20);
    *(undefined **)(puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    lVar4 = *(long *)(puVar1 + 0x20);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10aeb9d00; end: 10aeb9d53; -[SCUnlockableDataStoreBaseFilter preferencesKey] */

void FUN_10aeb9d00(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
    lVar2 = param_1;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar2;
    _objc_release(uVar1);
    lVar2 = *(long *)(param_1 + 0x20);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10aeb9d54; end: 10aeb9d5b; -[SCUnlockableDataStoreBaseFilter lastUpdateDate] */

undefined8 FUN_10aeb9d54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10aeb9d5c; end: 10aeb9dbb; -[SCUnlockableDataStoreBaseFilter .cxx_destruct] */

void FUN_10aeb9d5c(long param_1)

{
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



/* Entry: 10aeb9dbc; end: 10aeb9eab; -[SCUnlockableLensDataStoreCreatorsBlacklistFilter validateEntry:] */

void FUN_10aeb9dbc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ae6a8;
  _objc_opt_class(PTR_PTR_1126ae6a8);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_3;
    func_0x00010bf43020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bf0ea80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar3;
    func_0x00010c08fa60();
    if (uVar5 == 0) {
      uVar5 = 0;
    }
    else {
      uVar4 = param_3;
      func_0x00010bf43020(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf0ea80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
    }
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10aeb9eac; end: 10aeb9f17; -[SCLensMemoryMapStorage init] */

undefined1 * FUN_10aeb9eac(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112701748;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10aeb9f18; end: 10aeb9f1f; -[SCLensMemoryMapStorage keysCount] */

void FUN_10aeb9f18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10aeb9f20; end: 10aeb9f27; -[SCLensMemoryMapStorage clear] */

void FUN_10aeb9f20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10aeb9f28; end: 10aeb9f93; -[SCLensMemoryMapStorage setLenses:forKey:] */

void FUN_10aeb9f28(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    if (param_3 == 0) {
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + 8),param_2,param_4);
    }
    else {
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aeb9f94; end: 10aeb9fef; -[SCLensMemoryMapStorage lensesForKey:] */

void FUN_10aeb9f94(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar1 = *(undefined **)(param_1 + 8);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR____NSArray0__struct_11034ab48;
    if (puVar1 != (undefined *)0x0) {
      puVar2 = puVar1;
    }
    _objc_retain(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aeb9ff0; end: 10aeba11b; -[SCLensMemoryMapStorage allLenses] */

void FUN_10aeb9ff0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      func_0x00010befa160(puVar2);
      lVar7 = lVar7 + 1;
    } while (lVar4 != lVar7);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  puVar5 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar2 + 8,0);
  return;
}



/* Entry: 10aeba11c; end: 10aeba127; -[SCLensMemoryMapStorage .cxx_destruct] */

void FUN_10aeba11c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeba128; end: 10aeba1a7; -[SCUnlockableLensDataStoreRemovedLensesFilter validateEntry:] */

void FUN_10aeba128(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    _objc_retain(param_3);
    uVar3 = param_3;
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10aeba1a8; end: 10aeba20f; -[SCLensUITestUnlockableDataStore init] */

undefined1 * FUN_10aeba1a8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112701750;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10aeba210; end: 10aeba297; +[SCLensUITestUnlockableDataStore sharedInstance] */

void FUN_10aeba210(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_10aeba298;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001137edc30 != -1) {
    func_0x000107c27d9c(0x1137edc30,&puStack_48);
  }
  uVar1 = uRam00000001137edc28;
  _objc_retain(uRam00000001137edc28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aeba298; end: 10aeba2bf;  */

void FUN_10aeba298(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = uRam00000001137edc28;
  uRam00000001137edc28 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aeba2c0; end: 10aeba30f; -[SCLensUITestUnlockableDataStore unlockedLenses] */

void FUN_10aeba2c0(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf51e00(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aeba310; end: 10aeba363; -[SCLensUITestUnlockableDataStore unlockedLensesFuture] */

void FUN_10aeba310(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae558;
  func_0x00010c281740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aeba364; end: 10aeba367; -[SCLensUITestUnlockableDataStore updateDataIfNecessary] */

void FUN_10aeba364(void)

{
  return;
}



/* Entry: 10aeba368; end: 10aeba36b; -[SCLensUITestUnlockableDataStore updateData] */

void FUN_10aeba368(void)

{
  return;
}



/* Entry: 10aeba36c; end: 10aeba377; -[SCLensUITestUnlockableDataStore unlockLensUpdatedNotificationName] */

undefined ** FUN_10aeba36c(void)

{
  return &PTR____CFConstantStringClassReference_110f2f798;
}



/* Entry: 10aeba378; end: 10aeba383; -[SCLensUITestUnlockableDataStore unlockLensUpdatedNotificationKey] */

undefined ** FUN_10aeba378(void)

{
  return &PTR____CFConstantStringClassReference_110f2f798;
}



/* Entry: 10aeba384; end: 10aeba387; -[SCLensUITestUnlockableDataStore removeUnlockedLens:] */

void FUN_10aeba384(void)

{
  return;
}



/* Entry: 10aeba388; end: 10aeba38b; -[SCLensUITestUnlockableDataStore updateDataStoresWithUnlockedLens:] */

void FUN_10aeba388(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc7390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__addLens__11254f680);
  return;
}



/* Entry: 10aeba38c; end: 10aeba38f; -[SCLensUITestUnlockableDataStore updateDataStoresWithRemovedLensId:] */

void FUN_10aeba38c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8c690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeLensWithId__112580b40);
  return;
}



/* Entry: 10aeba390; end: 10aeba393; -[SCLensUITestUnlockableDataStore updateLiveReplyDataStores] */

void FUN_10aeba390(void)

{
  return;
}



/* Entry: 10aeba394; end: 10aeba397; -[SCLensUITestUnlockableDataStore addUnlockedLens:] */

void FUN_10aeba394(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc7390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__addLens__11254f680);
  return;
}



/* Entry: 10aeba398; end: 10aeba3c7; -[SCLensUITestUnlockableDataStore setCentralizedLensMetadataRetrieverLazy:] */

void FUN_10aeba398(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10aeba3c8; end: 10aeba5e3; -[SCLensUITestUnlockableDataStore addLensData:] */

void FUN_10aeba3c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc();
  uStack_68 = 0;
  func_0x00010bfeea60();
  uVar1 = uStack_68;
  _objc_retain(uStack_68);
  if (puVar2 != (undefined *)0x0) {
    func_0x00010c1ec620(puVar2);
    puVar3 = puVar2;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae6a8;
    _objc_opt_class(PTR_PTR_1126ae6a8);
    puVar5 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar4);
    if (((ulong)puVar5 & 1) != 0) {
      puVar4 = puVar3;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = *(long *)(param_1 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc7380(param_1);
      puVar5 = puVar4;
      func_0x00010c08fa60();
      if (puVar5 != (undefined *)0x0 && lVar6 != 0) {
        _objc_initWeak(auStack_70,param_1);
        lVar7 = lVar6;
        func_0x00010c0952c0(lVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_78,auStack_70);
        puVar5 = puVar3;
        _objc_retain(puVar3);
        func_0x000107c30a80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c297260(lVar7);
        _objc_release(puVar5);
        _objc_release(lVar7);
        _objc_release(puVar3);
        _objc_destroyWeak(auStack_78);
        _objc_destroyWeak(auStack_70);
      }
      _objc_release(lVar6);
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10aeba5e4; end: 10aeba6a3;  */

void FUN_10aeba5e4(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (((lVar1 != 0) && (param_2 != 0)) && (param_3 == 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c0c0760(param_2);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10aeba6a4; end: 10aeba6e7;  */

void FUN_10aeba6a4(long param_1,undefined8 param_2)

{
  func_0x00010c090340(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8ecc0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10aeba6e8; end: 10aeba6ef;  */

void FUN_10aeba6e8(void)

{
  return;
}



/* Entry: 10aeba6f0; end: 10aeba747; -[SCLensUITestUnlockableDataStore _addLens:] */

void FUN_10aeba6f0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    _objc_retain(param_3);
    _os_unfair_lock_lock(param_1 + 0x10);
    func_0x00010befa120(*(undefined8 *)(param_1 + 8));
    _objc_release(param_3);
    _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010be64710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyDataStoreUpdated_112576b60);
    return;
  }
  return;
}



/* Entry: 10aeba748; end: 10aeba7e7; -[SCLensUITestUnlockableDataStore _replaceStubLens:withMergedLens:] */

void FUN_10aeba748(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_retain(param_3);
    _os_unfair_lock_lock(param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfece20(lVar1,param_2,param_3);
    _objc_release(param_3);
    if (lVar1 == 0x7fffffffffffffff) {
      _os_unfair_lock_unlock(param_1 + 0x10);
    }
    else {
      func_0x00010c130f40(*(undefined8 *)(param_1 + 8),param_2,lVar1,param_4);
      _os_unfair_lock_unlock(param_1 + 0x10);
      func_0x00010be64700(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10aeba7e8; end: 10aeba8af; -[SCLensUITestUnlockableDataStore _removeLensWithId:] */

void FUN_10aeba7e8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _os_unfair_lock_lock(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10aeba8b0;
    puStack_40 = &UNK_110857a38;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010bfaea20(uVar1,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16a300(*(undefined8 *)(param_1 + 8),param_2,uVar1);
    _os_unfair_lock_unlock(param_1 + 0x10);
    func_0x00010be64700(param_1);
    _objc_release(uVar1);
    _objc_release(lStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aeba8b0; end: 10aeba8f7;  */

uint FUN_10aeba8b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 10aeba8f8; end: 10aeba9c3; -[SCLensUITestUnlockableDataStore _notifyDataStoreUpdated] */

void FUN_10aeba8f8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1049a0(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 10aeba9c4; end: 10aeba9f3; -[SCLensUITestUnlockableDataStore .cxx_destruct] */

void FUN_10aeba9c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeba9f4; end: 10aeba9ff; +[SCUnlockableDataStore removeSavedStateWithArchiveUtils:] */

void FUN_10aeba9f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12e150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126de890,PTR_s_removeSavedStateUsingArchiveUtil_112629270);
  return;
}



/* Entry: 10aebaa00; end: 10aebaa57; -[SCUnlockableDataStore _saveState] */

void FUN_10aebaa00(long param_1,undefined8 param_2)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10aebaa58;
  puStack_28 = &UNK_110848c48;
  uStack_18 = 0;
  lStack_20 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x58),param_2,&puStack_40);
  return;
}



/* Entry: 10aebaa58; end: 10aebaa5f;  */

void FUN_10aebaa58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be99cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__saveStateSafely_1125840d8);
  return;
}



/* Entry: 10aebaa60; end: 10aebac23; -[SCUnlockableDataStore _saveStateSafely] */

void FUN_10aebaa60(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar5);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c08a700();
  _objc_retainAutoreleasedReturnValue();
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_10aebac24;
  uStack_70 = 0x10aebac34;
  uStack_68 = 0;
  uVar3 = uVar2;
  puStack_88 = &uStack_90;
  _dispatch_group_create();
  _dispatch_group_enter();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf27300(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10aebac3c;
  puStack_a8 = &UNK_110860220;
  puStack_98 = &uStack_90;
  _objc_retain(uVar3);
  uStack_a0 = uVar3;
  func_0x00010c297260(uVar4);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_10aebac98;
  puStack_e0 = &UNK_11084fa08;
  puStack_c8 = &uStack_90;
  uStack_d8 = uVar2;
  uStack_d0 = uVar5;
  _objc_retain(uVar5);
  _objc_retain(uVar2);
  func_0x000107c27d98(uVar3,uVar4,&puStack_f8);
  _objc_release(uVar4);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_a0);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(uVar2);
  _objc_release(uVar5);
  return;
}



/* Entry: 10aebac24; end: 10aebac3b;  */

void FUN_10aebac24(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10aebac3c; end: 10aebac97;  */

void FUN_10aebac3c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10aebac98; end: 10aebace3;  */

void FUN_10aebac98(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126de890;
  _objc_alloc(PTR_PTR_1126de890);
  func_0x00010c0593c0();
  func_0x00010c14b620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10aebace4; end: 10aebad87;  */

void FUN_10aebace4(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bfce0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10aebad88; end: 10aebadbb;  */

void FUN_10aebad88(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be99cc0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10aebadbc; end: 10aebae13; -[SCUnlockableDataStore clear] */

void FUN_10aebadbc(long param_1,undefined8 param_2)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10aebae14;
  puStack_28 = &UNK_110848c48;
  uStack_18 = 0;
  lStack_20 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x58),param_2,&puStack_40);
  return;
}



/* Entry: 10aebae14; end: 10aebae67;  */

void FUN_10aebae14(long param_1)

{
  undefined8 uVar1;
  
  _objc_opt_class(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c12e160();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 8) = 0;
  _objc_release(uVar1);
  func_0x00010bf3ab80(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bf3a670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),PTR_s_clear_1125ac340);
  return;
}



/* Entry: 10aebae68; end: 10aebaf13;  */

void FUN_10aebae68(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bdd40(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10aebaf14; end: 10aebaf63;  */

void FUN_10aebaf14(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdfdda0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10aebaf64; end: 10aebaf67;  */

void FUN_10aebaf64(void)

{
  return;
}



/* Entry: 10aebaf68; end: 10aebafe3; -[SCUnlockableDataStore updateDataIfNecessary] */

void FUN_10aebaf68(long param_1,undefined8 param_2)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  uStack_30 = 0x10aebafc0;
  puStack_28 = &UNK_110848c48;
  uStack_18 = 0;
  lStack_20 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x58),param_2,&puStack_40);
  return;
}



/* Entry: 10aebafe4; end: 10aebb03b; -[SCUnlockableDataStore updateData] */

void FUN_10aebafe4(long param_1,undefined8 param_2)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10aebb03c;
  puStack_28 = &UNK_110848c48;
  uStack_18 = 0;
  lStack_20 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x58),param_2,&puStack_40);
  return;
}



/* Entry: 10aebb03c; end: 10aebb047;  */

void FUN_10aebb03c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa6250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),PTR_s_fetchData_1125c7238);
  return;
}



/* Entry: 10aebb048; end: 10aebb0db; -[SCUnlockableDataStore addUnlockedLens:] */

void FUN_10aebb048(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10aebb0dc;
  puStack_50 = &UNK_110844b80;
  uStack_38 = 0;
  lStack_48 = param_1;
  uStack_40 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 10aebb0dc; end: 10aebb0e7;  */

void FUN_10aebb0dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc8e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__addUnlockedLens__11254fd30,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10aebb0e8; end: 10aebb17b; -[SCUnlockableDataStore updateDataStoresWithRemovedLensId:] */

void FUN_10aebb0e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10aebb17c;
  puStack_50 = &UNK_110844b80;
  uStack_38 = 0;
  lStack_48 = param_1;
  uStack_40 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 10aebb17c; end: 10aebb187;  */

void FUN_10aebb17c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8dc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__removeUnlockedLensWithId__1125810b8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10aebb188; end: 10aebb1ab; -[SCUnlockableDataStore updateDataStoresWithUnlockedLens:] */

void FUN_10aebb188(undefined8 param_1)

{
  func_0x00010befc740();
                    /* WARNING: Could not recover jumptable at 0x00010c284e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateData_11267edc0);
  return;
}



/* Entry: 10aebb1ac; end: 10aebb1af; -[SCUnlockableDataStore updateLiveReplyDataStores] */

void FUN_10aebb1ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c284e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateData_11267edc0);
  return;
}


