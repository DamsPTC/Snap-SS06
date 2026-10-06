/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1091db508; end: 1091db583; -[SCLensUITestMetadataStore init] */

undefined1 * FUN_1091db508(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700d80;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = 0;
    puVar2 = PTR_PTR_1126ddc80;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1091db584; end: 1091db5b3; -[SCLensUITestMetadataStore setCentralizedLensMetadataRetrieverLazy:] */

void FUN_1091db584(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1091db5b4; end: 1091db5b7; -[SCLensUITestMetadataStore warmUp] */

void FUN_1091db5b4(void)

{
  return;
}



/* Entry: 1091db5b8; end: 1091db7ab; -[SCLensUITestMetadataStore addLensData:] */

void FUN_1091db5b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc();
  func_0x00010bfeea60();
  func_0x00010c1ec620();
  puVar2 = puVar1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae6a8;
  _objc_opt_class(PTR_PTR_1126ae6a8);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar3);
  if (((ulong)puVar4 & 1) != 0) {
    puVar3 = puVar2;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be3ca20(param_1);
    puVar4 = puVar3;
    func_0x00010c08fa60();
    if (puVar4 != (undefined *)0x0 && lVar5 != 0) {
      _objc_initWeak(auStack_58,param_1);
      lVar6 = lVar5;
      func_0x00010c0952c0(lVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_60,auStack_58);
      puVar4 = puVar2;
      _objc_retain(puVar2);
      func_0x000107c30a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(lVar6);
      _objc_release(puVar4);
      _objc_release(lVar6);
      _objc_release(puVar2);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
    _objc_release(lVar5);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1091db7ac; end: 1091db86b;  */

void FUN_1091db7ac(long param_1,long param_2,long param_3)

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



/* Entry: 1091db86c; end: 1091db8af;  */

void FUN_1091db86c(long param_1,undefined8 param_2)

{
  func_0x00010c090340(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8ecc0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091db8b0; end: 1091db8b7;  */

void FUN_1091db8b0(void)

{
  return;
}



/* Entry: 1091db8b8; end: 1091db973; -[SCLensUITestMetadataStore _insertTestLensAtFront:] */

void FUN_1091db8b8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _os_unfair_lock_lock(param_1 + 8);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
    puVar2 = puVar1;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar2;
    _objc_release(uVar3);
    func_0x00010bf7e340(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x18),
                        param_1);
    _objc_release(puVar1);
    _os_unfair_lock_unlock(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091db974; end: 1091dba87; -[SCLensUITestMetadataStore _replaceStubLens:withMergedLens:] */

void FUN_1091db974(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    _os_unfair_lock_lock(param_1 + 8);
    puVar1 = *(undefined **)(param_1 + 0x18);
    func_0x00010c0d3c80();
    if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar1);
      puVar2 = puVar1;
    }
    _objc_release(puVar1);
    puVar1 = puVar2;
    func_0x00010bfece20(puVar2,param_2,param_3);
    if (puVar1 != (undefined *)0x7fffffffffffffff) {
      func_0x00010c130f40(puVar2,param_2,puVar1,param_4);
      puVar1 = puVar2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      *(undefined **)(param_1 + 0x18) = puVar1;
      _objc_release(uVar3);
      func_0x00010bf7e340(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x18),
                          param_1);
    }
    _objc_release(puVar2);
    _os_unfair_lock_unlock(param_1 + 8);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091dba88; end: 1091dbb2f; -[SCLensUITestMetadataStore lenses] */

void FUN_1091dba88(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _os_unfair_lock_lock(param_1 + 8);
  puVar2 = PTR____NSArray0__struct_11034ab48;
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (*(undefined **)(param_1 + 0x18) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_1 + 0x18);
  }
  _objc_retain(puVar1);
  puVar3 = puVar1;
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bfaea40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  if (puVar3 != (undefined *)0x0) {
    puVar2 = puVar3;
  }
  _objc_retain(puVar2);
  _objc_release(puVar3);
  _os_unfair_lock_unlock(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091dbb30; end: 1091dbb3b; -[SCLensUITestMetadataStore lensesToPrefetch] */

undefined * FUN_1091dbb30(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 1091dbb3c; end: 1091dbb47; -[SCLensUITestMetadataStore supportsFilteringForAttribute:] */

bool FUN_1091dbb3c(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 0;
}



/* Entry: 1091dbb48; end: 1091dbb9f; -[SCLensUITestMetadataStore startUpdatingWithMode:] */

void FUN_1091dbb48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _os_unfair_lock_lock(param_1 + 8);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (*(undefined **)(param_1 + 0x18) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_1 + 0x18);
  }
  func_0x00010bf7e340(*(undefined8 *)(param_1 + 0x10),param_2,puVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 8);
  return;
}



/* Entry: 1091dbba0; end: 1091dbba3; -[SCLensUITestMetadataStore stopUpdating] */

void FUN_1091dbba0(void)

{
  return;
}



/* Entry: 1091dbba4; end: 1091dbba7; -[SCLensUITestMetadataStore synchronize] */

void FUN_1091dbba4(void)

{
  return;
}



/* Entry: 1091dbba8; end: 1091dbbaf; -[SCLensUITestMetadataStore addListener:] */

void FUN_1091dbba8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1091dbbb0; end: 1091dbbb7; -[SCLensUITestMetadataStore removeListener:] */

void FUN_1091dbbb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1091dbbb8; end: 1091dbbbf; -[SCLensUITestMetadataStore hasMoreLensesToLoad] */

undefined8 FUN_1091dbbb8(void)

{
  return 0;
}



/* Entry: 1091dbbc0; end: 1091dbbc7; -[SCLensUITestMetadataStore loadMoreTriggerDistance] */

undefined8 FUN_1091dbbc0(void)

{
  return 0;
}



/* Entry: 1091dbbc8; end: 1091dbc3b; -[SCLensUITestMetadataStore applyMetadataProviderSettings:] */

void FUN_1091dbbc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 8);
  lVar1 = param_1;
  func_0x00010be16680(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = lVar1;
  _objc_release(uVar2);
  _os_unfair_lock_unlock(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091dbc3c; end: 1091dbd3f; -[SCLensUITestMetadataStore _filteringPredicateWithSettings:] */

void FUN_1091dbc3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010bf2a2c0(param_3);
  uVar3 = param_1;
  func_0x00010be16640(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa140(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  uVar2 = param_3;
  func_0x00010c12f420(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010be16660(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa140(puVar1,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar2);
  puVar4 = puVar1;
  func_0x00010bf529e0();
  if (puVar4 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
    func_0x00010bf02a20(PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1091dbd40; end: 1091dbe47; -[SCLensUITestMetadataStore _filteringPredicateForCameraPosition:] */

void FUN_1091dbd40(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (param_3 == -1) {
    puVar2 = (undefined *)0x0;
  }
  else {
    ppuVar1 = &PTR_PTR_1133c9290;
    if (param_3 != 0) {
      ppuVar1 = &PTR_PTR_1133c9298;
    }
    puVar3 = *ppuVar1;
    _objc_retain(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x1091dbe00;
    puStack_30 = &UNK_110ae0418;
    puStack_28 = puVar3;
    _objc_retain(puVar3);
    func_0x00010c1063a0(puVar2,param_2,&puStack_48);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_28);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091dbe48; end: 1091dbf3f; -[SCLensUITestMetadataStore _filteringPredicateForRemovedLensIds:] */

void FUN_1091dbe48(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x1091dbef4;
    puStack_30 = &UNK_110ae0418;
    _objc_retain(param_3);
    lStack_28 = param_3;
    func_0x00010c1063a0(puVar2,param_2,&puStack_48);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_28);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091dbf40; end: 1091dbf87; -[SCLensUITestMetadataStore .cxx_destruct] */

void FUN_1091dbf40(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1091dbf88; end: 1091dbfbb; -[SCLensUITestMetadataStoreProvider init] */

void FUN_1091dbf88(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112700d88;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1091dbfbc; end: 1091dbfc7; -[SCLensUITestMetadataStoreProvider lensMetadataStore] */

void FUN_1091dbfbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ddc88,PTR_s_sharedInstance_1126688c8);
  return;
}



/* Entry: 1091dbfc8; end: 1091dbfd3; -[SCLensUITestMetadataStoreProvider ucoLensMetadataStore] */

void FUN_1091dbfc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27e7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ddc88,PTR_s_ucoInstance_11267d410);
  return;
}



/* Entry: 1091dbfd4; end: 1091dc05b; -[SCPerformanceAutomationBundledLensProvider initWithBundle:] */

undefined1 * FUN_1091dbfd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700d90;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126bb968;
    func_0x00010c0f96c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091dc05c; end: 1091dc067; -[SCPerformanceAutomationBundledLensProvider bundledLensWithCode:] */

void FUN_1091dc05c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_bundledLensWithCode_bundle__1125a6d10,param_3,3);
  return;
}



/* Entry: 1091dc068; end: 1091dc06f; -[SCPerformanceAutomationBundledLensProvider bundledLensWithCode:bundle:] */

void FUN_1091dc068(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_bundledLensWithCode_bundle__1125a6d10);
  return;
}



/* Entry: 1091dc070; end: 1091dc077; -[SCPerformanceAutomationBundledLensProvider bundledLensIconWithCode:] */

void FUN_1091dc070(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_bundledLensIconWithCode__1125a6ce0);
  return;
}



/* Entry: 1091dc078; end: 1091dc07f; -[SCPerformanceAutomationBundledLensProvider bundledLensIconWithKey:] */

void FUN_1091dc078(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_bundledLensIconWithKey__1125a6ce8);
  return;
}



/* Entry: 1091dc080; end: 1091dc087; -[SCPerformanceAutomationBundledLensProvider tagForLensWithId:] */

void FUN_1091dc080(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c268210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_tagForLensWithId__112677aa8);
  return;
}



/* Entry: 1091dc088; end: 1091dc08f; -[SCPerformanceAutomationBundledLensProvider lensIdsForTag:] */

void FUN_1091dc088(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0946d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_lensIdsForTag__112602bc0);
  return;
}



/* Entry: 1091dc090; end: 1091dc097; -[SCPerformanceAutomationBundledLensProvider clearInMemoryCache] */

void FUN_1091dc090(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3b570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_clearInMemoryCache_1125ac700);
  return;
}



/* Entry: 1091dc098; end: 1091dc09f; -[SCPerformanceAutomationBundledLensProvider lensMetadatas] */

void FUN_1091dc098(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c095350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_lensMetadatas_112602ee0)
  ;
  return;
}



/* Entry: 1091dc0a0; end: 1091dc0ab; -[SCPerformanceAutomationBundledLensProvider .cxx_destruct] */

void FUN_1091dc0a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091dc0ac; end: 1091dc1ab; -[_SCSingleLensFromProcessInfoMetadataProviderSortStrategy executeWithLenses:cameraPosition:parameters:] */

undefined **
FUN_1091dc0ac(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             long param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c0ed600();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    _objc_retain(param_3);
    puVar2 = param_3;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_40 = param_5;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  ppuVar1 = (undefined **)PTR_PTR_1126ddca0;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x00010c025d20();
  _objc_release(puVar2);
  _objc_release(param_5);
  puVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
    return ppuVar1;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_1091dc1ac;
  ppuStack_70 = ppuVar1;
  puStack_68 = puVar2;
  lStack_60 = param_5;
  puStack_58 = param_3;
  puStack_50 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  puStack_78 = PTR_PTR_112700d98;
  ppuVar1 = &puStack_80;
  puStack_80 = puVar4;
  _objc_msgSendSuper2(ppuVar1,PTR_s_init_1125d9248);
  if (ppuVar1 != (undefined **)0x0) {
    _objc_retain(puVar3);
    puVar2 = ppuVar1[1];
    ppuVar1[1] = puVar3;
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ae720;
    _objc_retain(puVar3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = ppuVar1[2];
    ppuVar1[2] = puVar2;
    _objc_release(puVar4);
    ppuVar1[3] = (undefined *)0x3;
    _objc_release(puVar3);
  }
  _objc_release(puVar3);
  return ppuVar1;
}



/* Entry: 1091dc1ac; end: 1091dc29b; -[SCLensInjectionDataProviderAssistant initWithLensInjectionServices:] */

undefined8 * FUN_1091dc1ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112700d98;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    puVar1[3] = 3;
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1091dc29c; end: 1091dc397;  */

void FUN_1091dc29c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c094b80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c065240();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar6 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
  puVar7 = PTR_PTR_1126ddc98;
  _objc_alloc(PTR_PTR_1126ddc98);
  func_0x00010c025fc0();
  _objc_release(puVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1091dc398; end: 1091dc407;  */

void FUN_1091dc398(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_2;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091dc408; end: 1091dc487; -[SCLensInjectionDataProviderAssistant lensDataProvider:didAddLens:] */

void FUN_1091dc408(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ddca8;
  func_0x00010c093fa0(PTR_PTR_1126ddca8,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c093f20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c093fc0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1091dc488; end: 1091dc50b; -[SCLensInjectionDataProviderAssistant lensDataProvider:didRemoveLens:withError:] */

void FUN_1091dc488(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ddca8;
  func_0x00010c093f00(PTR_PTR_1126ddca8,param_2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c093f20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c093fc0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1091dc50c; end: 1091dc58b; -[SCLensInjectionDataProviderAssistant lensDataProvider:didRemoveAllLensesWithError:] */

void FUN_1091dc50c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ddca8;
  func_0x00010bf003e0(PTR_PTR_1126ddca8,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c093f20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c093fc0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1091dc58c; end: 1091dc5b3; -[SCLensInjectionDataProviderAssistant prepareConfiguration:] */

void FUN_1091dc58c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1091dc5b4; end: 1091dc5db; -[SCLensInjectionDataProviderAssistant prepareMetadataStore:] */

void FUN_1091dc5b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1091dc5dc; end: 1091dc603; -[SCLensInjectionDataProviderAssistant preparePrefetchMetadataStore:] */

void FUN_1091dc5dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1091dc604; end: 1091dc717; -[SCLensInjectionDataProviderAssistant prepareSortStaregy:] */

void FUN_1091dc604(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c094b80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b1b80;
  _objc_alloc(PTR_PTR_1126b1b80);
  func_0x00010bff7000();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091dc718; end: 1091dc71f; -[SCLensInjectionDataProviderAssistant injectedLensesMetadataStore] */

undefined8 FUN_1091dc718(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1091dc720; end: 1091dc727; -[SCLensInjectionDataProviderAssistant injectedLensesPrefetchCapacity] */

undefined8 FUN_1091dc720(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1091dc728; end: 1091dc757; -[SCLensInjectionDataProviderAssistant .cxx_destruct] */

void FUN_1091dc728(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091dc758; end: 1091dc863; -[SCLensDataProviderContextRegistryImpl registerDataProviderWithContextId:contextConfig:] */

void FUN_1091dc758(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = *(long *)(param_1 + 0x38);
  func_0x00010c0e00e0(lVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 == 0) {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1091dc864;
    puStack_68 = &UNK_1108529c0;
    lStack_60 = param_1;
    _objc_retain(param_3);
    puStack_b0 = puVar1;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x1091dc874;
    puStack_98 = &UNK_110ae04e8;
    lStack_90 = param_1;
    uStack_58 = param_3;
    _objc_retain(param_3);
    uStack_88 = param_3;
    func_0x00010c0bf4e0(param_4,param_2,&puStack_80,&puStack_b0);
    _objc_release(uStack_88);
    _objc_release(uStack_58);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091dc864; end: 1091dc88b;  */

void FUN_1091dc864(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be89cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__registerPredefinedDataProviderW_1125800d0,
             *(undefined8 *)(param_1 + 0x28),param_2);
  return;
}



/* Entry: 1091dc88c; end: 1091dc8db; -[SCLensDataProviderContextRegistryImpl deregisterDataProviderWithContextId:] */

void FUN_1091dc88c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c12d3e0(uVar1,param_2,param_3);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091dc8dc; end: 1091dc8e3; -[SCLensDataProviderContextRegistryImpl contextConfigWithContextId:] */

void FUN_1091dc8dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 1091dc8e4; end: 1091dc8eb; -[SCLensDataProviderContextRegistryImpl registeredContextIds] */

void FUN_1091dc8e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf002f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_allKeys_11259da60);
  return;
}



/* Entry: 1091dc8ec; end: 1091dc99f; -[SCLensDataProviderContextRegistryImpl _registerPredefinedDataProviderWithContextId:carouselType:] */

void FUN_1091dc8ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c106240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126ddcb0;
    func_0x00010c1062e0(PTR_PTR_1126ddcb0,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea3460(param_1,param_2,param_3,lVar2,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091dc9a0; end: 1091dcccb; -[SCLensDataProviderContextRegistryImpl _registerDataProviderWithContextId:activationSource:lensesObservable:contextUpdater:] */

void FUN_1091dc9a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ddcb8;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf34a80(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf34a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126ddcc0;
  func_0x00010bf27320(PTR_PTR_1126ddcc0,param_2,param_5,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar5 = PTR_PTR_1126ddc98;
  _objc_alloc();
  puVar6 = puVar5;
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c025f40(puVar5,param_2,puVar4,puVar6);
  _objc_release(puVar6);
  puVar6 = puVar5;
  if (param_6 != 0) {
    puVar6 = PTR_PTR_1126b1b98;
    _objc_alloc();
    func_0x00010bff6e20();
    _objc_release(puVar5);
  }
  puVar7 = PTR_PTR_1126ddcc8;
  _objc_alloc();
  func_0x00010c046000();
  puVar8 = PTR_PTR_1126ddcb8;
  func_0x00010bf64100(PTR_PTR_1126ddcb8,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar9;
  func_0x00010bf55b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1091dcccc;
  puStack_70 = &UNK_110ae04b8;
  puStack_68 = puVar6;
  _objc_retain(puVar6);
  func_0x00010bf11fe0(puVar5,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126ddcb8;
  func_0x00010bfa18e0(PTR_PTR_1126ddcb8,param_2,param_4);
  uVar9 = uVar10;
  func_0x00010c097a80(uVar10,param_2,uVar2,puVar5,10,0,0,puVar1,puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar10);
  puVar5 = PTR_PTR_1126ddcb0;
  func_0x00010bf62be0(PTR_PTR_1126ddcb0,param_2,param_4,puVar4,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea3460(param_1,param_2,param_3,uVar9,puVar5);
  _objc_release(param_3);
  _objc_release(puVar5);
  _objc_release(uVar9);
  _objc_release(puStack_68);
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_6);
  return;
}



/* Entry: 1091dcccc; end: 1091dccf3;  */

void FUN_1091dcccc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091dccf4; end: 1091dcd87; -[SCLensDataProviderContextRegistryImpl .cxx_destruct] */

void FUN_1091dccf4(long param_1)

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



/* Entry: 1091dcd88; end: 1091dcdcb; -[SCLensDataProviderRegistry dealloc] */

void FUN_1091dcd88(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bde0720();
  puStack_28 = PTR_PTR_112700da8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1091dcdcc; end: 1091dce0f; -[SCLensDataProviderRegistry updateLensDataProviderWithCameraType:activationConfiguration:] */

void FUN_1091dcdcc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_3;
  lVar1 = param_1;
  func_0x00010be4aa40(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed4b20(param_1,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1091dce10; end: 1091dd06f; -[SCLensDataProviderRegistry updateLensDataProviderWithLensesObservable:activationConfiguration:] */

void FUN_1091dce10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puVar2 = PTR_PTR_1126ddcc0;
  uVar9 = *(undefined8 *)(param_1 + 0x98);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar9;
  func_0x00010bf68fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf27320(puVar2,param_2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar9);
  puVar3 = PTR_PTR_1126ddc98;
  _objc_alloc();
  puVar4 = puVar3;
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c025f40(puVar3,param_2,puVar2,puVar4);
  _objc_release(puVar4);
  puVar5 = PTR_PTR_1126ddcc8;
  _objc_opt_new(PTR_PTR_1126ddcc8);
  lVar6 = param_1;
  func_0x00010be4aa40(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar9;
  func_0x00010bf55b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1091dd070;
  puStack_70 = &UNK_1108a6dc8;
  puStack_68 = puVar3;
  _objc_retain(puVar3);
  func_0x00010bf11fe0(puVar4,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010c097a40(uVar7,param_2,uVar1,puVar4,0);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(puVar4);
  _objc_release(uVar7);
  func_0x00010c287140(param_1,param_2,uVar8);
  _objc_release(uVar8);
  _objc_release(puStack_68);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(lVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  return;
}



/* Entry: 1091dd070; end: 1091dd097;  */

void FUN_1091dd070(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091dd098; end: 1091dd09f; -[SCLensDataProviderRegistry contextConfigWithContextId:] */

void FUN_1091dd098(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4e470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xb8),PTR_s_contextConfigWithContextId__1125b12c0);
  return;
}



/* Entry: 1091dd0a0; end: 1091dd0a7; -[SCLensDataProviderRegistry registerDataProviderWithContextId:contextConfig:] */

void FUN_1091dd0a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1262b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xb8),PTR_s_registerDataProviderWithContextI_1126272c8);
  return;
}



/* Entry: 1091dd0a8; end: 1091dd15b; -[SCLensDataProviderRegistry predefinedDataProviderWithCarouselType:] */

void FUN_1091dd0a8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if ((param_3 != 0) || (uVar3 = *(ulong *)(param_1 + 8), 0xd < uVar3))
  goto _objc_autoreleaseReturnValue;
  if ((1L << (uVar3 & 0x3f) & 0x3806U) == 0) {
    if (uVar3 == 0) {
      func_0x00010bdecd20(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto _objc_autoreleaseReturnValue;
    }
    if (uVar3 != 8) goto _objc_autoreleaseReturnValue;
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c27ff80();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) goto _objc_autoreleaseReturnValue;
  }
  func_0x00010bdecd60(param_1);
  _objc_retainAutoreleasedReturnValue();
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091dd15c; end: 1091dd26f; -[SCLensDataProviderRegistry _createDefaultReplyCameraDataProvider] */

void FUN_1091dd15c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = *(undefined **)(param_1 + 0xb8);
  func_0x00010bf641c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f2beb8);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_initWeak(auStack_38,param_1);
    puVar1 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf11fe0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1262c0(*(undefined8 *)(param_1 + 0xb8));
    _objc_retain(puVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  else {
    _objc_retain();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091dd270; end: 1091dd33f;  */

void FUN_1091dd270(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126b1bc0;
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf467c0(puVar2,param_2,uVar1,*(undefined1 *)(param_1 + 0xa0),
                        *(undefined1 *)(param_1 + 0xa0),*(undefined1 *)(param_1 + 0xb0));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126ddce0;
    _objc_alloc(PTR_PTR_1126ddce0);
    func_0x00010c024c20();
    lVar4 = param_1;
    func_0x00010bdf2620(param_1,param_2,puVar2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1091dd340; end: 1091dd41f; -[SCLensDataProviderRegistry _createDefaultModularCameraDataProvider] */

void FUN_1091dd340(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = *(undefined **)(param_1 + 0xb8);
  func_0x00010bf641c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f2bed8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 == (undefined *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1091dd420;
    puStack_40 = &UNK_110ae0548;
    uStack_38 = uVar3;
    _objc_retain(uVar3);
    func_0x00010bf11fe0(puVar2,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1262c0(*(undefined8 *)(param_1 + 0xb8),param_2,
                        &PTR____CFConstantStringClassReference_110f2bed8,puVar2);
    _objc_retain(puVar2);
    _objc_release(uVar3);
  }
  else {
    _objc_retain();
    puVar2 = puVar1;
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091dd420; end: 1091dd447;  */

void FUN_1091dd420(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091dd448; end: 1091dd4a7; -[SCLensDataProviderRegistry activateDataProviderWithContextId:] */

void FUN_1091dd448(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010bf641c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c287140(param_1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091dd4a8; end: 1091dd4af; -[SCLensDataProviderRegistry deregisterDataProviderWithContextId:] */

void FUN_1091dd4a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6e1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xb8),PTR_s_deregisterDataProviderWithContex_1125b9218);
  return;
}



/* Entry: 1091dd4b0; end: 1091dd54b; -[SCLensDataProviderRegistry canDeregisterDataProviderWithContextId:] */

bool FUN_1091dd4b0(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0xb8);
  func_0x00010bf641c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = lVar2;
    func_0x00010c06f880();
    if ((int)lVar3 == 0) {
      bVar1 = true;
    }
    else {
      func_0x00010bf5f180(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c269d40(lVar2);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = param_1 != lVar3;
      _objc_release();
      _objc_release(param_1);
    }
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 1091dd54c; end: 1091dd653; -[SCLensDataProviderRegistry _lensDataproviderConfigForLensCarouselActivationConfig:] */

void FUN_1091dd54c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126ddce8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010bf07500(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a8640(puVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf24dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010bf24d80(uVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b5100(puVar1,param_2,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  puVar5 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1091dd654; end: 1091dd65b; -[SCLensDataProviderRegistry cameraViewType] */

undefined8 FUN_1091dd654(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091dd65c; end: 1091dd663; -[SCLensDataProviderRegistry addUpdateListener:] */

void FUN_1091dd65c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1091dd664; end: 1091dd66b; -[SCLensDataProviderRegistry removeUpdateListener:] */

void FUN_1091dd664(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1091dd66c; end: 1091dd6a7; -[SCLensDataProviderRegistry _updateCameraNoViewDataProviderWithConfiguration:] */

void FUN_1091dd66c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bdefc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c287140(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091dd6a8; end: 1091dd8c3; -[SCLensDataProviderRegistry _createReplyDataProviderWithConfig:lensDataAssistant:] */

void FUN_1091dd6a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  lVar7 = *(long *)(param_1 + 0x50);
  _objc_retain(param_3);
  func_0x00010c131b80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    lVar1 = *(long *)(param_1 + 0x50);
    func_0x00010c09a7e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar7);
    lVar1 = lVar7;
  }
  _objc_release(lVar7);
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1091dd8c4;
  puStack_68 = &UNK_110ae0578;
  lStack_60 = param_1;
  uStack_58 = param_4;
  _objc_retain(param_4);
  func_0x00010bf11fe0(puVar2,param_2,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010be5b360(param_1,param_2,param_3,lVar1,puVar2,0,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0651e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c065200(param_4);
  uVar6 = uVar3;
  func_0x00010c097a80(uVar3,param_2,lVar7,uVar4,uVar5,param_4,1,0,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c097a40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(lVar7);
  _objc_release(puVar2);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1091dd8c4; end: 1091dd9a3;  */

void FUN_1091dd8c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0651e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126ddcf0;
  _objc_alloc(PTR_PTR_1126ddcf0);
  puVar5 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c02ba20(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1091dd9a4; end: 1091dda2f; -[SCLensDataProviderRegistry _updateCameraReplyDataProviderWithConfiguration:] */

void FUN_1091dd9a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ddce0;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c024c20();
  lVar2 = param_1;
  func_0x00010bdf2620(param_1,param_2,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c287140(param_1,param_2,lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1091dda30; end: 1091ddc03; -[SCLensDataProviderRegistry _updateDirectorModeDataProviderWithConfiguration:] */

void FUN_1091dda30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1091ddc04;
  puStack_70 = &UNK_1108a6dc8;
  lStack_68 = param_1;
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110ae05c8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x68);
  uVar3 = param_3;
  func_0x00010c095c40(param_3);
  lVar4 = param_1;
  func_0x00010be5b3e0(param_1,param_2,uVar8,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ddcf8;
  _objc_alloc(PTR_PTR_1126ddcf8);
  func_0x00010c001ba0();
  _objc_release(param_3);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010bf55b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010c097a40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar6);
  func_0x00010c287140(param_1,param_2,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 1091ddc04; end: 1091ddd2f;  */

void FUN_1091ddc04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010bf7f4c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf56200(uVar3,param_2,uVar2,9,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar2 = uVar4;
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126ddcf0;
  _objc_alloc(PTR_PTR_1126ddcf0);
  puVar6 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c02ba20(puVar5,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1091ddd30; end: 1091ddd3b;  */

void FUN_1091ddd30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ddc88,PTR_s_sharedInstance_1126688c8);
  return;
}



/* Entry: 1091ddd3c; end: 1091ddf87; -[SCLensDataProviderRegistry _updateCameraRollDataProviderWithConfiguration:] */

void FUN_1091ddd3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  uVar10 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(param_3);
  func_0x00010bf2aa20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae720;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1091ddf88;
  puStack_88 = &UNK_110ae0578;
  lStack_80 = param_1;
  uStack_78 = uVar10;
  _objc_retain();
  func_0x00010bf11fe0(puVar1,param_2,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110ae05e8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1b70;
  _objc_alloc();
  func_0x00010c023f00();
  puVar4 = PTR_PTR_1126ae720;
  puStack_d0 = puVar5;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1091de0a4;
  puStack_b8 = &UNK_110966950;
  puStack_b0 = puVar3;
  lStack_a8 = param_1;
  _objc_retain();
  func_0x00010bf11fe0(puVar4,param_2,&puStack_d0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ddcf8;
  _objc_alloc(PTR_PTR_1126ddcf8);
  func_0x00010c001ba0();
  _objc_release(param_3);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf55b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar8;
  func_0x00010c097a40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar8);
  func_0x00010c287140(param_1,param_2,uVar9);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puStack_b0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_78);
  _objc_release(uVar10);
  return;
}



/* Entry: 1091ddf88; end: 1091de097;  */

void FUN_1091ddf88(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf56200(uVar5,param_2,uVar2,10,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar5;
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126ddcf0;
  _objc_alloc(PTR_PTR_1126ddcf0);
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c02ba20(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1091de098; end: 1091de0a3;  */

void FUN_1091de098(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ddc88,PTR_s_sharedInstance_1126688c8);
  return;
}



/* Entry: 1091de0a4; end: 1091de127;  */

void FUN_1091de0a4(void)

{
  _objc_alloc(PTR_PTR_1126ddd00);
  func_0x00010c012240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091de128; end: 1091de1af; -[SCLensDataProviderRegistry _isSameDataProviderWithContiguration:] */

undefined8 FUN_1091de128(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf07500(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5f180(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf07500();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1091de1b0; end: 1091de1df; -[SCLensDataProviderRegistry _clearLensDataProvider] */

void FUN_1091de1b0(undefined8 param_1)

{
  func_0x00010bde0740();
  func_0x00010c1bb5c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be651d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyUpdateListeners_112576e10);
  return;
}



/* Entry: 1091de1e0; end: 1091de2e3; -[SCLensDataProviderRegistry .cxx_destruct] */

void FUN_1091de1e0(long param_1)

{
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_destroyWeak(param_1 + 0x78);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1091de2e4; end: 1091de317; +[SCLensDataProviderRegistryHelpers centralizedStoreNamespaceForActivationSource:] */

void FUN_1091de2e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0xc) {
    func_0x00010bf09000(PTR_PTR_1126c8c48);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091de318; end: 1091de353; +[SCLensDataProviderRegistryHelpers dataProviderConfigurationForActivationSource:] */

void FUN_1091de318(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0xc) {
    func_0x00010bf466a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf695e0(PTR_PTR_1126b1bc0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091de354; end: 1091de35b; +[SCLensDataProviderRegistryHelpers featureAttributionForActivationSource:] */

undefined8 FUN_1091de354(void)

{
  return 2;
}



/* Entry: 1091de35c; end: 1091de3a3; -[SCLensPredefinedDataProviderFactoryWeakAdapter predefinedDataProviderWithCarouselType:] */

void FUN_1091de35c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c106240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1091de3a4; end: 1091de3ab; -[SCLensPredefinedDataProviderFactoryWeakAdapter .cxx_destruct] */

void FUN_1091de3a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1091de3ac; end: 1091de4db; -[SCAdsCameraLensDataProvider initWithLensDataFetcher:lensDataPrefetcher:lensThumbnailLogger:] */

undefined8 *
FUN_1091de3ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_112700db8;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = puVar1[1];
    puVar1[1] = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ddd10;
    _objc_alloc();
    puVar4 = PTR_PTR_1126b6ae8;
    func_0x00010c22ba80(PTR_PTR_1126b6ae8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0237e0();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ddd18;
    _objc_opt_new();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1091de4dc; end: 1091de4df; -[SCAdsCameraLensDataProvider warmUp] */

void FUN_1091de4dc(void)

{
  return;
}



/* Entry: 1091de4e0; end: 1091de507; -[SCAdsCameraLensDataProvider lenses] */

void FUN_1091de4e0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


