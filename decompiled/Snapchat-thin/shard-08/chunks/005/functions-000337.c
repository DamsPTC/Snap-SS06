/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1061cf42c; end: 1061cf433; -[SCFeatureLensCollectionsCarouselImpl lensDataProvider:didRemoveAllLensesWithError:] */

void FUN_1061cf42c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be64630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyCollectionError__112576b28,param_4);
  return;
}



/* Entry: 1061cf434; end: 1061cf697; -[SCFeatureLensCollectionsCarouselImpl _presentLensCollection:selectedLensId:showLensesOnlyUI:saveRestoreState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cf434(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bea5400(param_1,param_2,1,param_5);
  lVar9 = (long)_DAT_112742574;
  uVar1 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c092520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c092560(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010c097a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar2;
  func_0x00010c269d40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar8);
  uVar4 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c090560(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c094e60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010c096ca0();
  _objc_release(lVar8);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112742560);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c281140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1799c0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  lVar8 = param_1;
  func_0x00010c0926e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c287180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar8);
  if (param_6 != 0) {
    *(long *)(param_1 + _DAT_112742580) = lVar2;
    lVar8 = (long)_DAT_112742584;
    _objc_retain(lVar9);
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    *(long *)(param_1 + lVar8) = lVar9;
    _objc_release(uVar6);
    uVar5 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c159a40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + _DAT_112742588);
    *(undefined8 *)(param_1 + _DAT_112742588) = uVar6;
    _objc_release(uVar7);
    _objc_release(uVar5);
  }
  lVar8 = param_1 + _DAT_112742578;
  _objc_loadWeakRetained(lVar8);
  func_0x00010bf721c0();
  _objc_release(lVar8);
  *(undefined1 *)(param_1 + _DAT_112742570) = 1;
  func_0x00010bec88e0(param_1);
  _objc_release(lVar9);
  _objc_release(uVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061cf698; end: 1061cf7b3; -[SCFeatureLensCollectionsCarouselImpl _subscrideOnCarouselResetEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cf698(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274255c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08edc0();
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



/* Entry: 1061cf7b4; end: 1061cf7e3;  */

void FUN_1061cf7b4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdf8260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061cf7e4; end: 1061cf867; -[SCFeatureLensCollectionsCarouselImpl _setLensCollectionBarVisible:toggleLensesOnlyUI:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cf7e4(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    lVar1 = param_1 + _DAT_112742558;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c136e00();
    _objc_release(lVar1);
    param_1 = param_1 + _DAT_11274258c;
    _objc_loadWeakRetained(param_1);
    func_0x00010c136e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1061cf868; end: 1061cf8a7; -[SCFeatureLensCollectionsCarouselImpl _resetRestoreState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cf868(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742588);
  *(undefined8 *)(param_1 + _DAT_112742588) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742584);
  *(undefined8 *)(param_1 + _DAT_112742584) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061cf8a8; end: 1061cf8b7; -[SCFeatureLensCollectionsCarouselImpl _notifyCollectionError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cf8a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112742568),PTR_s_next__112614028);
  return;
}



/* Entry: 1061cf8b8; end: 1061cf8bb; -[SCFeatureLensCollectionsCarouselImpl setCameraUIVisible:animated:arbitrator:] */

void FUN_1061cf8b8(void)

{
  return;
}



/* Entry: 1061cf8bc; end: 1061cf8db; -[SCFeatureLensCollectionsCarouselImpl lensDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cf8bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112742590);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061cf8dc; end: 1061cf8ef; -[SCFeatureLensCollectionsCarouselImpl setLensDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cf8dc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112742590,param_3);
  return;
}



/* Entry: 1061cf8f0; end: 1061cf8ff; -[SCFeatureLensCollectionsCarouselImpl activated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1061cf8f0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112742570);
}



/* Entry: 1061cf900; end: 1061cf90f; -[SCFeatureLensCollectionsCarouselImpl lensCollectionsCarouselErrors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061cf900(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112742568);
}



/* Entry: 1061cf910; end: 1061cf92f; -[SCFeatureLensCollectionsCarouselImpl cameraBottomUIArbitrator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cf910(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274258c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061cf930; end: 1061cf943; -[SCFeatureLensCollectionsCarouselImpl setCameraBottomUIArbitrator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cf930(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274258c,param_3);
  return;
}



/* Entry: 1061cf944; end: 1061cfa63; -[SCFeatureLensCollectionsCarouselImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cf944(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274258c);
  _objc_destroyWeak(param_1 + _DAT_112742590);
  _objc_storeStrong(param_1 + _DAT_112742588,0);
  _objc_storeStrong(param_1 + _DAT_112742584,0);
  _objc_storeStrong(param_1 + _DAT_11274257c,0);
  _objc_storeStrong(param_1 + _DAT_112742568,0);
  _objc_storeStrong(param_1 + _DAT_11274256c,0);
  _objc_storeStrong(param_1 + _DAT_112742594,0);
  _objc_storeStrong(param_1 + _DAT_112742574,0);
  _objc_destroyWeak(param_1 + _DAT_112742578);
  _objc_storeStrong(param_1 + _DAT_112742564,0);
  _objc_storeStrong(param_1 + _DAT_11274255c,0);
  _objc_destroyWeak(param_1 + _DAT_112742558);
  _objc_storeStrong(param_1 + _DAT_112742560,0);
  _objc_storeStrong(param_1 + _DAT_112742554,0);
  _objc_storeStrong(param_1 + _DAT_112742550,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274254c,0);
  return;
}



/* Entry: 1061cfa64; end: 1061cfb97; -[SCLensCollectionsCarouselManagerImpl initWithCollectionId:lensToPreselect:dataProvider:lensLogger:] */

undefined1 *
FUN_1061cfa64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f0380;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061cfb98; end: 1061cfb9f; -[SCLensCollectionsCarouselManagerImpl dataProvider] */

void FUN_1061cfb98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_target_112678178);
  return;
}



/* Entry: 1061cfba0; end: 1061cfba7; -[SCLensCollectionsCarouselManagerImpl lensLogger] */

void FUN_1061cfba0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 1061cfba8; end: 1061cfbcf; -[SCLensCollectionsCarouselManagerImpl collectionsCarouselLenses] */

void FUN_1061cfba8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061cfbd0; end: 1061cfbdb; -[SCLensCollectionsCarouselManagerImpl lensDataProviderConfiguration] */

void FUN_1061cfbd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf46730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b1bc0,PTR_s_configurationForLensCollection_1125af370);
  return;
}



/* Entry: 1061cfbdc; end: 1061cfbff; -[SCLensCollectionsCarouselManagerImpl lensCameraUpdatingStrategy] */

void FUN_1061cfbdc(void)

{
  _objc_alloc(PTR_PTR_1126c89f0);
  func_0x00010c0258e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061cfc00; end: 1061cfc27; -[SCLensCollectionsCarouselManagerImpl lensToPreselect] */

void FUN_1061cfc00(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061cfc28; end: 1061cfdc7; -[SCLensCollectionsCarouselManagerImpl willActivateCollectionCarousel:] */

void FUN_1061cfc28(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x30);
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if ((uVar1 != 0) &&
     (func_0x00010c077cc0(), puVar2 = PTR____NSArray0__struct_11034ab48, (uVar1 & 1) == 0)) {
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = param_1;
  func_0x00010bf64080(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c098580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_initWeak(auStack_58,param_1);
  puVar5 = auStack_58;
  _objc_copyWeak(auStack_60,puVar5);
  lVar3 = lVar4;
  func_0x00010c25ff60(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    __Unwind_Resume();
    _objc_retain(puVar5);
    param_3 = param_3 + 0x20;
    _objc_loadWeakRetained();
    if (param_3 != 0) {
      func_0x00010be27340(param_3);
    }
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return;
  }
  return;
}



/* Entry: 1061cfdc8; end: 1061cfe17;  */

void FUN_1061cfdc8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be27340(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061cfe18; end: 1061cfe67; -[SCLensCollectionsCarouselManagerImpl didActivateCollectionCarousel:] */

void FUN_1061cfe18(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c094e60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0974c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf324e0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061cfe68; end: 1061cfe6b; -[SCLensCollectionsCarouselManagerImpl willDeactivateCollectionCarousel:] */

void FUN_1061cfe68(void)

{
  return;
}



/* Entry: 1061cfe6c; end: 1061cfe73; -[SCLensCollectionsCarouselManagerImpl didDeactivateCollectionCarousel:] */

void FUN_1061cfe6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 1061cfe74; end: 1061cff7b; -[SCLensCollectionsCarouselManagerImpl _handleCollectionLensesResult:] */

void FUN_1061cfe74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1061cff7c;
  puStack_58 = &UNK_110842c58;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c0c0800(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1061cff7c; end: 1061d0117;  */

void FUN_1061cff7c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    if (*(long *)(param_1 + 0x30) == 0) {
      _objc_retain(param_2);
    }
    else {
      func_0x00010c0b8600(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar3 = *(undefined8 *)(param_1 + 8);
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061d0118; end: 1061d0197;  */

void FUN_1061d0118(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061d0198; end: 1061d01f7; -[SCLensCollectionsCarouselManagerImpl .cxx_destruct] */

void FUN_1061d0198(long param_1)

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



/* Entry: 1061d01f8; end: 1061d035b; -[SCFeatureLensExplorerButtonImpl initWithLensFeedFeature:lensExplorerBadgeUsageTracking:layoutStrategy:controlStyle:ringFlashInfoProvider:lensCarouselManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1061d01f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f0388;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127425b0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127425b4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127425b8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127425bc) = param_6;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127425c0) = 0;
    lVar3 = (long)_DAT_1127425c4;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127425c8;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061d035c; end: 1061d0477; -[SCFeatureLensExplorerButtonImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d035c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f0388;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_configureWithView__1125af8f0,param_3);
  func_0x00010bf47d20(*(undefined8 *)(param_1 + _DAT_1127425b4));
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127425cc);
  *(undefined **)(param_1 + _DAT_1127425cc) = puVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1061d0478; end: 1061d0517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d0478(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c89f8;
    _objc_alloc(PTR_PTR_1126c89f8);
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127425b8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c023c40(puVar2,param_2,uVar1,*(undefined8 *)(param_1 + _DAT_1127425b4),
                        *(undefined8 *)(param_1 + _DAT_1127425bc),param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061d0518; end: 1061d0577; -[SCFeatureLensExplorerButtonImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d0518(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0388;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_activate_112599760);
  if (*(long *)(param_1 + _DAT_1127425c0) == 0) {
    func_0x00010bec0940(param_1);
    func_0x00010bec0c60(param_1);
  }
  return;
}



/* Entry: 1061d0578; end: 1061d05bb; -[SCFeatureLensExplorerButtonImpl dealloc] */

void FUN_1061d0578(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c256420();
  puStack_28 = PTR_PTR_1126f0388;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1061d05bc; end: 1061d070f; -[SCFeatureLensExplorerButtonImpl _startObserveLensesEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d05bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127425c8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef1060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar5 = uVar4;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127425d4);
  *(undefined8 *)(param_1 + _DAT_1127425d4) = uVar5;
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1061d0710; end: 1061d077f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d0710(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010bf1f3c0();
    *(char *)(param_1 + _DAT_1127425d0) = (char)uVar1;
    func_0x00010bf1f3c0(param_2);
    func_0x00010bed7f20(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061d0780; end: 1061d07fb; -[SCFeatureLensExplorerButtonImpl shouldBlockTouchAtPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061d0780(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_3 + _DAT_1127425d0) == '\x01') {
    uVar1 = *(undefined8 *)(param_3 + _DAT_1127425cc);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c102c20(param_1,param_2);
    _objc_release(uVar1);
    return uVar2;
  }
  return 0;
}



/* Entry: 1061d07fc; end: 1061d086f; -[SCFeatureLensExplorerButtonImpl setCameraUIVisible:animated:arbitrator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d07fc(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + _DAT_1127425d4));
  uVar1 = 1;
  if (param_3 == 0) {
    uVar1 = 2;
  }
  *(undefined8 *)(param_1 + _DAT_1127425c0) = uVar1;
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec0950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startObserveLensesEvents_11258dbf8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed7f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateFeatureStateVisible_anima_112593970,0,param_4);
  return;
}



/* Entry: 1061d0870; end: 1061d093b; -[SCFeatureLensExplorerButtonImpl didPressLensExplorerButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d0870(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b1b50;
  func_0x00010bf6a8e0(PTR_PTR_1126b1b50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1b58;
  _objc_alloc(PTR_PTR_1126b1b58);
  func_0x00010c04a5a0();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127425b0);
  func_0x00010bfa1820(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e93a0();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127425cc);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c138280();
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1061d093c; end: 1061d0a5b; -[SCFeatureLensExplorerButtonImpl _startObservingRingFlashSelectionInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d093c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar5 = (long)_DAT_1127425d8;
  if (*(long *)(param_1 + lVar5) == 0) {
    lVar4 = (long)_DAT_1127425c4;
    if (*(long *)(param_1 + lVar4) != 0) {
      _objc_initWeak(auStack_38,param_1);
      uVar1 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c1410e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      _objc_copyWeak(auStack_40,auStack_38);
      uVar1 = uVar2;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      *(undefined8 *)(param_1 + lVar5) = uVar1;
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_40);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_38);
    }
  }
  return;
}



/* Entry: 1061d0a5c; end: 1061d0abb;  */

void FUN_1061d0a5c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c141120(param_2);
  _objc_release(param_2);
  func_0x00010bdfca80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061d0abc; end: 1061d0aef; -[SCFeatureLensExplorerButtonImpl stopObservingCapturerStateUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d0abc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127425d8;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061d0af0; end: 1061d0bab; -[SCFeatureLensExplorerButtonImpl _didChangeRingFlashActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d0af0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((param_3 & 0xfffffffffffffffe) == 2) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127425c4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c141080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127425cc);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d79c0();
    _objc_release(uVar1);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127425cc);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d79c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1061d0bac; end: 1061d0bff; -[SCFeatureLensExplorerButtonImpl _updateFeatureStateVisible:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d0bac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127425cc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061d0c00; end: 1061d0d4f; -[SCFeatureLensExplorerButtonImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d0c00(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127425c8,0);
  _objc_storeStrong(param_1 + _DAT_1127425d8,0);
  _objc_storeStrong(param_1 + _DAT_1127425d4,0);
  _objc_storeStrong(param_1 + _DAT_1127425c4,0);
  _objc_storeStrong(param_1 + _DAT_1127425b8,0);
  _objc_storeStrong(param_1 + _DAT_1127425cc,0);
  _objc_storeStrong(param_1 + _DAT_1127425b4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127425b0,0);
  return;
}



/* Entry: 1061d0d50; end: 1061d0d67; -[SCFeatureLensExplorerSwipeUpImpl isPanUpGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1061d0d50(long param_1,undefined8 param_2,long param_3)

{
  return param_3 == *(long *)(param_1 + _DAT_112742618);
}



/* Entry: 1061d0d68; end: 1061d0e07; -[SCFeatureLensExplorerSwipeUpImpl setCameraUIVisible:animated:arbitrator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d0d68(long param_1,undefined8 param_2,int param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bf2b4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(lVar1);
  if (lVar1 != param_5) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274261c);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010bfe2c20();
  }
  else {
    func_0x00010c23a860();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1061d0e08; end: 1061d102b; -[SCFeatureLensExplorerSwipeUpImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d0e08(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar8 = (long)_DAT_112742624;
  if (*(long *)(param_1 + lVar8) == 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127425e4);
    if (*(char *)(param_1 + _DAT_112742608) == '\x01') {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bef0b80();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0e0ec0();
      _objc_retainAutoreleasedReturnValue();
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_1061d102c;
      puStack_68 = &UNK_11084eff0;
      puVar7 = auStack_60;
      _objc_copyWeak(puVar7,auStack_58);
      uVar5 = uVar4;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bef1060();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0e0ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = auStack_88;
      _objc_copyWeak(puVar7,auStack_58);
      uVar5 = uVar4;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    *(undefined8 *)(param_1 + lVar8) = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(puVar7);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 1061d102c; end: 1061d10eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d102c(long param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      if ((*(byte *)(param_1 + _DAT_11274260c) & 1) == 0) {
        lVar1 = param_2;
        func_0x00010c079580();
        bVar2 = (byte)lVar1 ^ 1;
      }
      else {
        bVar2 = 1;
      }
      func_0x00010c079580(param_2);
      func_0x00010beccf60(param_1);
      *(byte *)(param_1 + _DAT_112742628) = bVar2;
      func_0x00010bdc4ce0(param_1);
      func_0x00010c079580(param_2);
      func_0x00010beccf60(param_1);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061d10ec; end: 1061d1163;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d10ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010bf1f3c0();
    *(char *)(param_1 + _DAT_112742628) = (char)uVar1;
    func_0x00010bdc4ce0(param_1);
    func_0x00010bf1f3c0(param_2);
    func_0x00010beccf60(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061d1164; end: 1061d119f; -[SCFeatureLensExplorerSwipeUpImpl _toggleTooltipStrictBit:enabled:] */

void FUN_1061d1164(ulong param_1,undefined8 param_2,ulong param_3,int param_4)

{
  ulong uVar1;
  
  if (param_4 == 0) {
    uVar1 = param_1;
    func_0x00010c274000();
    uVar1 = uVar1 & (param_3 ^ 0xffffffffffffffff);
  }
  else {
    uVar1 = param_1;
    func_0x00010c274000();
    uVar1 = uVar1 | param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c217250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setTooltipStrict__1126636b8,uVar1);
  return;
}



/* Entry: 1061d11a0; end: 1061d121b; -[SCFeatureLensExplorerSwipeUpImpl setTooltipStrict:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d11a0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lVar1 = *(long *)(param_1 + _DAT_112742604);
  if ((lVar1 != param_3) &&
     ((*(long *)(param_1 + _DAT_112742604) = param_3, param_3 == 0 || (lVar1 == 0)))) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_1061d121c;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_38);
    return;
  }
  return;
}



/* Entry: 1061d121c; end: 1061d12f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d121c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar2 = *(long *)(param_1 + 0x20) + (long)_DAT_112742620;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126c85a8;
  _objc_opt_class(PTR_PTR_1126c85a8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010c06de20(uVar1);
  func_0x00010c0769a0(uVar1);
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf2b4c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c136e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1061d12f4; end: 1061d1447; -[SCFeatureLensExplorerSwipeUpImpl _activateIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d12f4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if ((*(byte *)(param_1 + _DAT_11274262c) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_11274262c) = 1;
    lVar1 = param_1 + _DAT_112742620;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_1;
    func_0x00010c0f36c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040(lVar1);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0f36c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195460();
    _objc_release(lVar1);
    _objc_initWeak(auStack_38,param_1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_11274261c);
    *(undefined **)(param_1 + _DAT_11274261c) = puVar3;
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 1061d1448; end: 1061d1487;  */

void FUN_1061d1448(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf4d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1061d1488; end: 1061d1577; -[SCFeatureLensExplorerSwipeUpImpl _createToolTipManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d1488(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126c8a00;
  _objc_alloc(PTR_PTR_1126c8a00);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127425f4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127425f0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c025ca0(puVar1,param_2,uVar2,uVar3,*(undefined8 *)(param_1 + _DAT_1127425f8),
                      *(undefined8 *)(param_1 + _DAT_1127425ec));
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126c8a08;
  _objc_alloc(PTR_PTR_1126c8a08);
  param_1 = param_1 + _DAT_112742620;
  _objc_loadWeakRetained(param_1);
  func_0x00010c033ee0(puVar4,param_2,param_1,puVar1);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1061d1578; end: 1061d1777; -[SCFeatureLensExplorerSwipeUpImpl _pan:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d1578(undefined8 param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27adc0(param_5,param_4,lVar1);
  dVar5 = param_2;
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297a00(param_5,param_4,lVar1);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c252440();
  lVar2 = param_3;
  if (lVar1 - 3U < 3) {
    lVar1 = param_3 + _DAT_1127425dc;
    _objc_loadWeakRetained(lVar1);
    _objc_opt_class(param_3);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c280da0(lVar1,param_4,lVar2);
  }
  else {
    if (lVar1 == 2) {
      if (40.0 < ABS(param_2)) {
        uVar3 = *(undefined8 *)(param_3 + _DAT_11274261c);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c265280();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0bb360();
        _objc_release(uVar4);
        _objc_release(uVar3);
        func_0x00010beccf60(param_3,param_4,8,1);
      }
      goto LAB_1061d169c;
    }
    if (lVar1 != 1) goto LAB_1061d169c;
    lVar1 = param_3 + _DAT_1127425dc;
    _objc_loadWeakRetained(lVar1);
    _objc_opt_class(param_3);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09fde0(lVar1,param_4,lVar2);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_1061d169c:
  uVar3 = *(undefined8 *)(param_3 + _DAT_1127425e0);
  func_0x00010bfa1820(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c093820();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_5;
  func_0x00010c252440(param_5);
  func_0x00010c093840(param_2,dVar5,uVar4,param_4,param_3,lVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1061d1778; end: 1061d1877; -[SCFeatureLensExplorerSwipeUpImpl gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1061d1778(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_5);
  lVar4 = param_3;
  func_0x00010bec93e0();
  if ((int)lVar4 != 0) {
    uVar1 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297a00(param_5);
    _objc_release(uVar1);
    if ((param_2 < 0.0) && (ABS(param_1) < ABS(param_2))) {
      lVar4 = (long)_DAT_112742630;
      uVar2 = param_3 + lVar4;
      _objc_loadWeakRetained();
      uVar3 = uVar2;
      _objc_opt_respondsToSelector();
      _objc_release(uVar2);
      if ((uVar3 & 1) == 0) {
        lVar4 = 1;
      }
      else {
        param_3 = param_3 + lVar4;
        _objc_loadWeakRetained(param_3);
        lVar4 = param_3;
        func_0x00010bfc1bc0();
        _objc_release(param_3);
      }
      goto LAB_1061d184c;
    }
  }
  lVar4 = 0;
LAB_1061d184c:
  _objc_release(param_5);
  return lVar4;
}



/* Entry: 1061d1878; end: 1061d192b; -[SCFeatureLensExplorerSwipeUpImpl gestureRecognizer:shouldReceiveTouch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1061d1878(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = (long)_DAT_112742630;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 1;
  }
  else {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010bfc1ac0();
    _objc_release(param_1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1061d192c; end: 1061d1933; -[SCFeatureLensExplorerSwipeUpImpl gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_1061d192c(void)

{
  return 0;
}



/* Entry: 1061d1934; end: 1061d19e7; -[SCFeatureLensExplorerSwipeUpImpl gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1061d1934(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = (long)_DAT_112742630;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010bfc1b00();
    _objc_release(param_1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1061d19e8; end: 1061d1a9b; -[SCFeatureLensExplorerSwipeUpImpl gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1061d19e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = (long)_DAT_112742630;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010bfc1aa0();
    _objc_release(param_1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1061d1a9c; end: 1061d1b43;  */

void FUN_1061d1a9c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0be6c0(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061d1b44; end: 1061d1b47;  */

void FUN_1061d1b44(void)

{
  return;
}



/* Entry: 1061d1b48; end: 1061d1bb7;  */

void FUN_1061d1b48(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0f36c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061d1bb8; end: 1061d1c43; -[SCFeatureLensExplorerSwipeUpImpl _didStartRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d1bb8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010beccf60(param_1,param_2,4,1);
  lVar1 = param_1;
  func_0x00010c0f36c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112742620;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0f36c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c9c0(lVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1061d1c44; end: 1061d1cfb; -[SCFeatureLensExplorerSwipeUpImpl _didEndRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d1c44(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010beccf60(param_1,param_2,4,0);
  if (*(char *)(param_1 + _DAT_11274262c) == '\x01') {
    lVar1 = param_1 + _DAT_112742620;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_1;
    func_0x00010c0f36c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040(lVar1,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c0f36c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1061d1cfc; end: 1061d1d7b; -[SCFeatureLensExplorerSwipeUpImpl _swipeUpPresentationEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1061d1cfc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + _DAT_112742628) == '\x01') {
    if (*(char *)(param_1 + _DAT_112742610) == '\x01') {
      uVar1 = *(undefined8 *)(param_1 + _DAT_1127425e8);
      func_0x00010bfa1820(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bef0100();
      uVar3 = (uint)uVar2 ^ 1;
      _objc_release(uVar1);
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 1061d1d7c; end: 1061d1d9b; -[SCFeatureLensExplorerSwipeUpImpl gestureRecognizersDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d1d7c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112742630);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061d1d9c; end: 1061d1dbb; -[SCFeatureLensExplorerSwipeUpImpl cameraTooltipArbitrator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d1d9c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112742634);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061d1dbc; end: 1061d1dcb; -[SCFeatureLensExplorerSwipeUpImpl tooltipStrict] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061d1dbc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112742604);
}



/* Entry: 1061d1dcc; end: 1061d1ee7; -[SCFeatureLensExplorerSwipeUpImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d1dcc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112742634);
  _objc_destroyWeak(param_1 + _DAT_112742630);
  _objc_storeStrong(param_1 + _DAT_112742614,0);
  _objc_storeStrong(param_1 + _DAT_112742624,0);
  _objc_destroyWeak(param_1 + _DAT_1127425dc);
  _objc_destroyWeak(param_1 + _DAT_112742620);
  _objc_destroyWeak(param_1 + _DAT_112742600);
  _objc_storeStrong(param_1 + _DAT_1127425fc,0);
  _objc_storeStrong(param_1 + _DAT_1127425f8,0);
  _objc_storeStrong(param_1 + _DAT_1127425f0,0);
  _objc_storeStrong(param_1 + _DAT_1127425f4,0);
  _objc_storeStrong(param_1 + _DAT_11274261c,0);
  _objc_storeStrong(param_1 + _DAT_112742618,0);
  _objc_storeStrong(param_1 + _DAT_1127425ec,0);
  _objc_storeStrong(param_1 + _DAT_1127425e8,0);
  _objc_storeStrong(param_1 + _DAT_1127425e4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127425e0,0);
  return;
}



/* Entry: 1061d1ee8; end: 1061d209b; -[SCFeatureLensExplorerTabBarButtonImp initWithLensFeedFeature:lensExplorerBadgeUsageTracking:mainCameraViewControllerLifecycleEvents:userInfoServices:tabBarItemActionObservable:tabBarItem:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1061d1ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f0398;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112742638;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11274263c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112742640;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112742644;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112742648) = 1;
    lVar3 = (long)_DAT_11274264c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112742650),param_8);
    lVar3 = (long)_DAT_112742654;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    func_0x00010bde5c80(puVar1);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061d209c; end: 1061d20eb; -[SCFeatureLensExplorerTabBarButtonImp activate] */

void FUN_1061d209c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0398;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_activate_112599760);
  func_0x00010beadfc0(param_1);
  func_0x00010bead9a0(param_1);
  return;
}



/* Entry: 1061d20ec; end: 1061d211f; -[SCFeatureLensExplorerTabBarButtonImp _configureTabBarItem] */

void FUN_1061d20ec(undefined8 param_1)

{
  func_0x00010be9a0a0();
  func_0x00010bead9a0(param_1);
  func_0x00010beb04e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010beadfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupMainCameraVCEventsIfNeeded_112589198);
  return;
}



/* Entry: 1061d2120; end: 1061d228f; -[SCFeatureLensExplorerTabBarButtonImp _setupLensExplorerButtonImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d2120(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_112742650;
  lVar1 = param_1 + lVar8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    return;
  }
  uVar2 = param_1 + lVar8;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126c56e0;
  _objc_opt_class(PTR_PTR_1126c56e0);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar2 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  lVar1 = param_1;
  if ((*(byte *)(param_1 + _DAT_112742648) & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_11274263c);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c22f3e0();
    _objc_release(uVar6);
    if ((int)uVar7 != 0) {
      func_0x00010bdd2840(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = 1;
      goto LAB_1061d221c;
    }
  }
  func_0x00010bdf94a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0;
LAB_1061d221c:
  func_0x00010c1a8720(uVar2);
  _objc_release(lVar1);
  *(undefined8 *)(param_1 + _DAT_112742658) = uVar7;
  param_1 = param_1 + lVar8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c201720();
  _objc_release(param_1);
  func_0x00010c1a8820(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1061d2290; end: 1061d2387; -[SCFeatureLensExplorerTabBarButtonImp _setupLensExplorerTabBarItemProperties] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d2290(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010be9a0a0();
  uVar1 = param_1;
  func_0x00010beb33a0();
  if ((uVar1 & 1) == 0) {
    lVar4 = (long)_DAT_112742650;
    lVar2 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c216240();
  }
  else {
    lVar2 = *(long *)(param_1 + (long)_DAT_112742654);
    func_0x0001091a2ac4();
    if ((int)lVar2 == 0) {
      func_0x00010b0af374();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x0001061e09c0();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar4 = (long)_DAT_112742650;
    lVar3 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c216240();
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  lVar2 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c161020();
  _objc_release(lVar2);
  lVar4 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c160fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1061d2388; end: 1061d2427; -[SCFeatureLensExplorerTabBarButtonImp _restoreTabBarItemProperties] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d2388(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112742650;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c216240();
  _objc_release(lVar1);
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c161020();
  _objc_release(lVar1);
  param_1 = param_1 + lVar2;
  _objc_loadWeakRetained(param_1);
  func_0x00010c160fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061d2428; end: 1061d24ef; -[SCFeatureLensExplorerTabBarButtonImp _saveTabBarItemProperties] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d2428(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112742650;
  lVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274265c);
  *(long *)(param_1 + _DAT_11274265c) = lVar2;
  _objc_release(uVar3);
  _objc_release(lVar1);
  lVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010beecf00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112742660);
  *(long *)(param_1 + _DAT_112742660) = lVar2;
  _objc_release(uVar3);
  _objc_release(lVar1);
  lVar4 = param_1 + lVar4;
  _objc_loadWeakRetained();
  lVar1 = lVar4;
  func_0x00010beecec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112742664);
  *(long *)(param_1 + _DAT_112742664) = lVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1061d24f0; end: 1061d24f3; -[SCFeatureLensExplorerTabBarButtonImp _defaultImage] */

void FUN_1061d24f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR_PTR_1126ddef8;
  _objc_opt_class(PTR_PTR_1126ddef8);
  func_0x00010bf249e0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar3,param_2,&PTR____CFConstantStringClassReference_110f2d038,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1061d24f4; end: 1061d2567; -[SCFeatureLensExplorerTabBarButtonImp _badgedImage] */

void FUN_1061d24f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_opt_class();
  func_0x00010bf249e0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar2,param_2,&PTR____CFConstantStringClassReference_110e446d8,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061d2568; end: 1061d261b; -[SCFeatureLensExplorerTabBarButtonImp updateLenseExplorerIconWithOverrideColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d2568(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112742650;
  lVar1 = param_1 + lVar6;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = param_1 + lVar6;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126c56e0;
    _objc_opt_class(PTR_PTR_1126c56e0);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    func_0x00010c1a9d40(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1061d261c; end: 1061d271b; -[SCFeatureLensExplorerTabBarButtonImp _didTapTabBarItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d261c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (*(char *)(param_1 + _DAT_112742668) == '\x01')) {
    puVar1 = PTR_PTR_1126b1b50;
    func_0x00010bf6a8e0(PTR_PTR_1126b1b50);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b1b58;
    _objc_alloc(PTR_PTR_1126b1b58);
    func_0x00010c04a5a0();
    uVar3 = *(undefined8 *)(param_1 + _DAT_11274263c);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb660();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112742638);
    func_0x00010bfa1820(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e93a0();
    _objc_release(uVar3);
    func_0x00010bead9a0(param_1);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061d271c; end: 1061d2843; -[SCFeatureLensExplorerTabBarButtonImp _setupMainCameraVCEventsIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d271c(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar5 = (long)_DAT_11274266c;
  if (*(long *)(param_1 + lVar5) == 0) {
    puVar1 = auStack_48;
    _objc_initWeak(puVar1,param_1);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112742640);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar2 = uVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 1061d2844; end: 1061d288b;  */

void FUN_1061d2844(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed4be0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061d288c; end: 1061d2a0b; -[SCFeatureLensExplorerTabBarButtonImp _updateCameraVisibilityFromLifecycleEvent:] */

void FUN_1061d288c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1061d2a0c;
  puStack_78 = &UNK_1108434b0;
  _objc_copyWeak(auStack_70,auStack_68);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x1061d2a3c;
  puStack_a0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_98,auStack_68);
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x1061d2a6c;
  puStack_c8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_c0,auStack_68);
  _objc_copyWeak(auStack_e8,auStack_68);
  func_0x00010c0c1540(param_3);
  _objc_destroyWeak(auStack_e8);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 1061d2a0c; end: 1061d2acb;  */

void FUN_1061d2a0c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061d2acc; end: 1061d2aeb; -[SCFeatureLensExplorerTabBarButtonImp _onMainCameraFullyVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d2acc(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_112742668) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112742668) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010beb04f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupTabBarItem_112589ae0);
  return;
}



/* Entry: 1061d2aec; end: 1061d2bef; -[SCFeatureLensExplorerTabBarButtonImp _setupTabBarItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d2aec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar3 = (long)_DAT_112742670;
  if (*(long *)(param_1 + lVar3) == 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274264c);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = uVar2;
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  if (*(char *)(param_1 + _DAT_112742668) == '\x01') {
    func_0x00010bead9c0();
  }
  else {
    func_0x00010be958c0(param_1);
  }
  return;
}



/* Entry: 1061d2bf0; end: 1061d2c9b;  */

void FUN_1061d2bf0(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c19e0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1061d2c9c; end: 1061d2c9f;  */

void FUN_1061d2c9c(void)

{
  return;
}



/* Entry: 1061d2ca0; end: 1061d2ce7;  */

void FUN_1061d2ca0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be012e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061d2ce8; end: 1061d2d9b; -[SCFeatureLensExplorerTabBarButtonImp _shouldDisplayHintLabelsForNGS] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1061d2ce8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + _DAT_112742644);
  lVar5 = lVar1;
  if (lVar1 != 0) {
    func_0x00010c127bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010beed420();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010059b874();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  return lVar5;
}



/* Entry: 1061d2d9c; end: 1061d2e77; -[SCFeatureLensExplorerTabBarButtonImp .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d2d9c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112742654,0);
  _objc_storeStrong(param_1 + _DAT_112742664,0);
  _objc_storeStrong(param_1 + _DAT_112742660,0);
  _objc_storeStrong(param_1 + _DAT_11274265c,0);
  _objc_storeStrong(param_1 + _DAT_112742670,0);
  _objc_storeStrong(param_1 + _DAT_11274266c,0);
  _objc_storeStrong(param_1 + _DAT_11274264c,0);
  _objc_destroyWeak(param_1 + _DAT_112742650);
  _objc_storeStrong(param_1 + _DAT_112742644,0);
  _objc_storeStrong(param_1 + _DAT_112742640,0);
  _objc_storeStrong(param_1 + _DAT_11274263c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112742638,0);
  return;
}



/* Entry: 1061d2e78; end: 1061d2f4b; -[SCLensExplorerButtonController initWithLensExplorerBadgeUsageTracking:layoutStrategy:controlStyle:delegate:] */

undefined1 *
FUN_1061d2e78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f03a0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_6);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061d2f4c; end: 1061d2fa7; -[SCLensExplorerButtonController setHidden:animated:] */

void FUN_1061d2f4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if ((int)param_3 == 0) {
    func_0x00010be78880(param_1);
    func_0x00010c283b20(param_1);
    func_0x00010bee22e0(param_1);
    lVar1 = *(long *)(param_1 + 8);
  }
  else {
    lVar1 = *(long *)(param_1 + 8);
    if (lVar1 == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_setHidden__1126479f8,param_3);
  return;
}



/* Entry: 1061d2fa8; end: 1061d2fff; -[SCLensExplorerButtonController setOverrideTintColor:] */

void FUN_1061d2fa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010bee22e0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061d3000; end: 1061d30ff; -[SCLensExplorerButtonController pointInsideButton:] */

undefined8 FUN_1061d3000(double param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  double dVar5;
  
  uVar1 = *(ulong *)(param_3 + 8);
  if ((uVar1 != 0) && (dVar5 = param_1, func_0x00010c074c20(), (uVar1 & 1) == 0)) {
    uVar2 = *(undefined8 *)(param_3 + 8);
    func_0x00010c262ca0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf01b40();
    if (dVar5 == 0.0) {
      _objc_release(uVar2);
    }
    else {
      uVar3 = *(ulong *)(param_3 + 8);
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010c074c20();
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((uVar1 & 1) == 0) {
        uVar4 = *(undefined8 *)(param_3 + 8);
        uVar2 = uVar4;
        func_0x00010c262ca0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf51200(param_1,param_2,uVar4);
        _objc_release(uVar2);
        uVar2 = *(undefined8 *)(param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010c102b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,param_2,uVar2,PTR_s_pointInside_withEvent__11261e4e8,0);
        return uVar2;
      }
    }
  }
  return 0;
}


