/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109029470; end: 10902953b; -[SCUcoDataStoreImpl initWithStudySettingsProvider:bundledLensProvider:effectContentPathCache:] */

undefined1 *
FUN_109029470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ffed8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10902953c; end: 109029697; -[SCUcoDataStoreImpl postCaptureColorLensForFilterName:] */

void FUN_10902953c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be161e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010bf529e0();
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar6 = 0;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x00010bf24da0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      if (lVar6 == 0) {
        lVar3 = *(long *)(param_1 + 0x18);
        func_0x00010c269d40(lVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar3;
        func_0x00010bf24da0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
      }
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      lVar3 = lVar6;
      func_0x00010bf4cf00(lVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar6;
      func_0x00010c094540(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf26500(uVar5,param_2,lVar3,lVar4);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 109029698; end: 10902969f; -[SCUcoDataStoreImpl isUcoLensExportable:] */

undefined8 FUN_109029698(void)

{
  return 1;
}



/* Entry: 1090296a0; end: 1090296ab; -[SCUcoDataStoreImpl _filterNameToBundledLensCodeMap] */

void FUN_1090296a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde1f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126dcf88,PTR_s__colorBundledLensSocialCodeMap_112556160);
  return;
}



/* Entry: 1090296ac; end: 1090296ff; +[SCUcoDataStoreImpl _colorBundledLensSocialCodeMap] */

void FUN_1090296ac(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113730708 != -1) {
    func_0x000107c27d9c(0x113730708,&PTR___NSConcreteGlobalBlock_110ad55d0);
  }
  uVar1 = uRam0000000113730700;
  _objc_retain(uRam0000000113730700);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109029700; end: 1090297e7;  */

void FUN_109029700(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110f27538;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110f27518;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110f778b8;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110f778f8;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110f27558;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f27618;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110f778d8;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110f77898;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_38,&ppuStack_58,4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113730700;
  puRam0000000113730700 = puVar2;
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  if (lRam0000000113730718 != -1) {
    func_0x000107c27d9c(0x113730718,&PTR___NSConcreteGlobalBlock_110ad55f0);
  }
  uVar1 = uRam0000000113730710;
  _objc_retain(uRam0000000113730710);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090297e8; end: 109029897; +[SCUcoDataStoreImpl _colorLensesCodes] */

void FUN_1090297e8(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113730718 != -1) {
    func_0x000107c27d9c(0x113730718,&PTR___NSConcreteGlobalBlock_110ad55f0);
  }
  uVar1 = uRam0000000113730710;
  _objc_retain(uRam0000000113730710);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109029898; end: 1090298d3; -[SCUcoDataStoreImpl .cxx_destruct] */

void FUN_109029898(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090298d4; end: 109029a97; -[SCUcoLensDataStore initWithLazyStoreTuple:lensDataFetcherFactory:lensDownloadTracker:grapheneRegistry:effectContentPathCache:redownloadLogger:] */

undefined1 *
FUN_1090298d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ffee0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109029a98; end: 109029abf; -[SCUcoLensDataStore fetchedUCOObservable] */

void FUN_109029a98(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109029ac0; end: 109029acf; -[SCUcoLensDataStore fetchUcoWithFilterId:completion:completionPerformer:] */

void FUN_109029ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfab0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_fetchUcoWithFilterId_requestTimi_1125c85e0,param_3,6,param_4,param_5);
  return;
}



/* Entry: 109029ad0; end: 109029adf; -[SCUcoLensDataStore fetchUcoWithFilterId:requestTiming:completion:completionPerformer:] */

void FUN_109029ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010be151b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__fetchUcoWithFilterId_requestTim_112562e08,param_3,param_4,0,param_5,
             param_6);
  return;
}



/* Entry: 109029ae0; end: 109029af3; -[SCUcoLensDataStore fetchUcoIconWithFilterId:completion:completionPerformer:] */

void FUN_109029ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be151b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__fetchUcoWithFilterId_requestTim_112562e08,param_3,6,1,param_4,param_5);
  return;
}



/* Entry: 109029af4; end: 109029c3b; -[SCUcoLensDataStore _fetchUcoWithFilterId:requestTiming:justIcon:completion:completionPerformer:] */

void FUN_109029af4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_copyWeak(auStack_70,auStack_58);
  _objc_retain(param_3);
  uStack_68 = param_4;
  uStack_60 = param_5;
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 109029c3c; end: 109029cc3;  */

void FUN_109029c3c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126dcf90;
    func_0x00010bdd1460(PTR_PTR_1126dcf90,param_2,*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be3dc80(PTR_PTR_1126dcf90,param_2,puVar2);
    _objc_release(puVar2);
  }
  else {
    func_0x00010be15180(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),0,
                        *(undefined8 *)(param_1 + 0x40),*(undefined1 *)(param_1 + 0x48),
                        *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 109029cc4; end: 109029df3; -[SCUcoLensDataStore fetchUcoWithLens:completion:completionPerformer:] */

void FUN_109029cc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 109029df4; end: 109029e8f;  */

void FUN_109029df4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126dcf90;
    func_0x00010bdd1460(PTR_PTR_1126dcf90,param_2,*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be3dc80(PTR_PTR_1126dcf90,param_2,puVar2);
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x20);
    func_0x00010c094540(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be15180(lVar1,param_2,puVar2,*(undefined8 *)(param_1 + 0x20),6,0,
                        *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 109029e90; end: 109029edf; -[SCUcoLensDataStore startUpdatingWithMode:] */

void FUN_109029e90(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27e820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c251660();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109029ee0; end: 109029f2b; -[SCUcoLensDataStore stopUpdating] */

void FUN_109029ee0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27e820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c256d40();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109029f2c; end: 10902a1b7; -[SCUcoLensDataStore _lensByFilterId:lens:error:] */

void FUN_109029f2c(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    lVar5 = 0;
  }
  else {
    puStack_98 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_10902a1b8;
    uStack_80 = 0x10902a1c8;
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = puStack_98[5];
    uStack_78 = uVar1;
    if (lVar5 == 0) {
      lVar2 = *(long *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c097b20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 == 0) {
        lVar5 = 0;
      }
      else {
        _dispatch_group_create();
        puVar4 = PTR_PTR_1126b1be0;
        if (param_4 == 0) {
          _objc_alloc(PTR_PTR_1126b1be0);
          func_0x00010c024280();
        }
        else {
          _objc_alloc(PTR_PTR_1126b1be0);
          func_0x00010c024dc0();
        }
        puStack_c8 = &uStack_d0;
        uStack_d0 = 0;
        uStack_c0 = 0x3032000000;
        pcStack_b8 = FUN_10902a1b8;
        uStack_b0 = 0x10902a1c8;
        uStack_a8 = 0;
        _dispatch_group_enter(lVar2);
        _objc_retain(lVar2);
        uVar1 = 0x19;
        func_0x000107c312b8(0x19,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f8060(lVar3);
        _objc_release(uVar1);
        _dispatch_group_wait(lVar2,0xffffffffffffffff);
        if (param_5 != (undefined8 *)0x0) {
          uVar1 = puStack_c8[5];
          _objc_retainAutorelease();
          *param_5 = uVar1;
        }
        lVar5 = puStack_98[5];
        _objc_retain(lVar5);
        _objc_release(lVar2);
        __Block_object_dispose(&uStack_d0,8);
        _objc_release(uStack_a8);
        _objc_release(puVar4);
        _objc_release(lVar2);
      }
      _objc_release(lVar3);
    }
    else {
      _objc_retain(lVar5);
    }
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(uStack_78);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 10902a1b8; end: 10902a1cf;  */

void FUN_10902a1b8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10902a1d0; end: 10902a25b;  */

void FUN_10902a1d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_2;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10902a25c; end: 10902a3fb; +[SCUcoLensDataStore _augmentCompletion:withPerformer:] */

void FUN_10902a25c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10902a30c;
  puStack_48 = &UNK_110ad5640;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_60);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10902a3fc; end: 10902a40f;  */

void FUN_10902a3fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010902a40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10902a410; end: 10902a5bf; -[SCUcoLensDataStore _fetchUcoWithFilterId:lens:requestTiming:justIcon:completion:completionPerformer:] */

void FUN_10902a410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126dcf90;
  func_0x00010bdd1460();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(puVar1);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_78 = param_5;
  uStack_70 = param_6;
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010bea96c0(param_1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10902a5c0; end: 10902a713;  */

/* WARNING: Removing unreachable block (ram,0x00010902a624) */

void FUN_10902a5c0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    func_0x00010be3dc80(PTR_PTR_1126dcf90);
  }
  else {
    if ((*(byte *)(lVar1 + 0x30) & 1) == 0) {
      lVar4 = *(long *)(param_1 + 0x38);
      puVar3 = PTR_PTR_1126dcf90;
      func_0x00010bed0fc0(PTR_PTR_1126dcf90);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))(lVar4,0,puVar3);
    }
    else {
      lVar4 = lVar1;
      func_0x00010be4a4c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = (undefined *)0x0;
      _objc_retain(0);
      if (lVar4 == 0) {
        puVar2 = PTR_PTR_1126dcf90;
        func_0x00010be0af00(PTR_PTR_1126dcf90);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,puVar2);
        _objc_release(puVar2);
      }
      else {
        func_0x00010be151c0(lVar1);
      }
      _objc_release(lVar4);
    }
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10902a714; end: 10902a86f; -[SCUcoLensDataStore _setUpMetadataStoreIfNeededWithCompletion:] */

void FUN_10902a714(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar3);
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c27e800();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar3);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010bf085c0(uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10902a870; end: 10902a91b;  */

void FUN_10902a870(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10902a91c; end: 10902a95f;  */

void FUN_10902a91c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be17280(lVar1);
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10902a960; end: 10902aa2f; -[SCUcoLensDataStore _finishSetUpMetadataStore] */

void FUN_10902a960(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c27e820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010c266b80(lVar2);
    lVar1 = lVar2;
    func_0x00010c098240(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedb1e0(param_1,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c0987c0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedb1e0(param_1,param_2,lVar1);
    _objc_release(lVar1);
    func_0x00010bef9980(lVar2,param_2,param_1);
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10902aa30; end: 10902ab27; -[SCUcoLensDataStore _updateMapFromLenses:] */

void FUN_10902aa30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be4a340();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(lVar1);
  func_0x00010c0f88c0(uVar2);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10902ab28; end: 10902ab63;  */

void FUN_10902ab28(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bef7f60(*(undefined8 *)(lVar1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10902ab64; end: 10902acc3; -[SCUcoLensDataStore _lensArrayToDict:] */

void FUN_10902ab64(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined1 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined1 uStack_1a8;
  undefined1 auStack_1a0 [16];
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  uVar7 = 0x10;
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_110;
    do {
      lVar10 = 0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        lVar8 = *(long *)(lStack_118 + lVar10 * 8);
        lVar3 = lVar8;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 != 0) {
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1);
          _objc_release(lVar8);
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      uVar7 = 0x10;
      lVar2 = param_3;
      puVar6 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126dcf98;
  _objc_alloc(PTR_PTR_1126dcf98);
  func_0x00010c023b40();
  puVar4 = PTR_PTR_1126dcfa0;
  _objc_alloc();
  func_0x00010c022800();
  _objc_initWeak(auStack_1a0,param_3);
  puStack_1f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1e8 = 0xc2000000;
  pcStack_1e0 = FUN_10902af08;
  puStack_1d8 = &UNK_110ad56a0;
  _objc_copyWeak(auStack_1b0,auStack_1a0);
  _objc_retain(puVar4);
  uStack_1a8 = (undefined1)uVar7;
  puStack_1d0 = puVar4;
  _objc_retain(puVar6);
  puStack_1c8 = (undefined1 *)puVar6;
  _objc_retain(param_6);
  uStack_1b8 = param_6;
  _objc_retain(param_7);
  ppuVar5 = &puStack_1f0;
  uStack_1c0 = param_7;
  _objc_retainBlock();
  if ((uVar7 & 1) == 0) {
    _objc_retain(puVar6);
    _objc_retain(ppuVar5);
    func_0x00010c0f89e0(puVar4);
    _objc_release(ppuVar5);
    _objc_release(puVar6);
  }
  else {
    func_0x00010c0f88a0(puVar4);
  }
  _objc_release(ppuVar5);
  _objc_release(uStack_1c0);
  _objc_release(uStack_1b8);
  _objc_release(puStack_1c8);
  _objc_release(puStack_1d0);
  _objc_destroyWeak(auStack_1b0);
  _objc_destroyWeak(auStack_1a0);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(puVar6);
  return;
}



/* Entry: 10902acc4; end: 10902af07; -[SCUcoLensDataStore _fetchUcoWithLens:requestTiming:justIcon:completion:completionPerformer:] */

void FUN_10902acc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  byte param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  byte bStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126dcf98;
  _objc_alloc(PTR_PTR_1126dcf98);
  func_0x00010c023b40();
  puVar2 = PTR_PTR_1126dcfa0;
  _objc_alloc();
  func_0x00010c022800();
  _objc_initWeak(auStack_80,param_1);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_10902af08;
  puStack_b8 = &UNK_110ad56a0;
  _objc_copyWeak(auStack_90,auStack_80);
  _objc_retain(puVar2);
  puStack_b0 = puVar2;
  bStack_88 = param_5;
  _objc_retain(param_3);
  uStack_a8 = param_3;
  _objc_retain(param_6);
  uStack_98 = param_6;
  _objc_retain(param_7);
  ppuVar3 = &puStack_d0;
  uStack_a0 = param_7;
  _objc_retainBlock();
  if ((param_5 & 1) == 0) {
    _objc_retain(param_3);
    _objc_retain(ppuVar3);
    func_0x00010c0f89e0(puVar2);
    _objc_release(ppuVar3);
    _objc_release(param_3);
  }
  else {
    func_0x00010c0f88a0(puVar2);
  }
  _objc_release(ppuVar3);
  _objc_release(uStack_a0);
  _objc_release(uStack_98);
  _objc_release(uStack_a8);
  _objc_release(puStack_b0);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 10902af08; end: 10902b09f;  */

void FUN_10902af08(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    lVar4 = param_3;
    func_0x00010bf529e0();
    if (lVar4 == 0) {
      func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x58),param_2,*(undefined8 *)(param_1 + 0x28));
    }
    lVar4 = param_3;
    func_0x00010bf529e0();
    if (lVar4 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
    }
    else {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    lVar4 = param_3;
    func_0x00010bf529e0();
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = param_3;
      func_0x00010bfb1920(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bdd8b60(lVar1,param_2,*(undefined8 *)(param_1 + 0x38),uVar3,lVar4,
                        *(undefined8 *)(param_1 + 0x30));
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10902b0a0; end: 10902b1b7; -[SCUcoLensDataStore _callCompletion:fetchedLens:error:completionPerformer:] */

void FUN_10902b0a0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != 0) {
    lVar1 = param_6;
    if (param_6 == 0) {
      lVar1 = *(long *)(param_1 + 0x40);
    }
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10902b1b8;
    puStack_60 = &UNK_11084a9e8;
    _objc_retain(param_3);
    lStack_48 = param_3;
    _objc_retain(param_4);
    uStack_58 = param_4;
    _objc_retain(param_5);
    uStack_50 = param_5;
    _objc_retain(lVar1);
    _objc_retain(param_6);
    func_0x00010c0f88c0(lVar1,param_2,&puStack_78);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_release(lStack_48);
    _objc_release(lVar1);
    _objc_release(param_6);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10902b1b8; end: 10902b1cb;  */

void FUN_10902b1b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010902b1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10902b1cc; end: 10902b22f; +[SCUcoLensDataStore _invokeCompletionWithStoreDeallocatedError:] */

void FUN_10902b1cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010bec3f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,0,param_1);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10902b230; end: 10902b29f; +[SCUcoLensDataStore _errorForNotFoundLensForId:] */

void FUN_10902b230(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f1c398);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0b260(param_1,param_2,0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10902b2a0; end: 10902b2af; +[SCUcoLensDataStore _storeDeallocatedError] */

void FUN_10902b2a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0b270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__errorWithCode_description__112560638,1,
             &PTR____CFConstantStringClassReference_110f1c3b8);
  return;
}



/* Entry: 10902b2b0; end: 10902b2bf; +[SCUcoLensDataStore _underlyingStoreIsNilError] */

void FUN_10902b2b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0b270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__errorWithCode_description__112560638,1,
             &PTR____CFConstantStringClassReference_110f1c3d8);
  return;
}



/* Entry: 10902b2c0; end: 10902b3ab; +[SCUcoLensDataStore _errorWithCode:description:] */

void FUN_10902b2c0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_x3;
  long lVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(in_x3);
  func_0x00010bf72080(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bedb1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10902b3ac; end: 10902b3af; -[SCUcoLensDataStore didUpdateLenses:lensMetadataStore:] */

void FUN_10902b3ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedb1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateMapFromLenses__112594620);
  return;
}



/* Entry: 10902b3b0; end: 10902b3b3; -[SCUcoLensDataStore didUpdateLensesToPrefetch:lensMetadataStore:] */

void FUN_10902b3b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedb1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateMapFromLenses__112594620);
  return;
}



/* Entry: 10902b3b4; end: 10902b443; -[SCUcoLensDataStore .cxx_destruct] */

void FUN_10902b3b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 10902b444; end: 10902b4eb; -[SCUcoLensMetadataProviderSettingManagerImpl initWithScheduleLensMetadataStore:lensRemovalManager:] */

undefined1 *
FUN_10902b444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ffee8;
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
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10902b4ec; end: 10902b563; -[SCUcoLensMetadataProviderSettingManagerImpl applySettingsWithNamespaceFilter:] */

void FUN_10902b4ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar2);
  _os_unfair_lock_unlock(param_1 + 0x20);
  func_0x00010bf085c0(param_1,param_2,&PTR___NSConcreteGlobalBlock_110ad56d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10902b564; end: 10902b567;  */

void FUN_10902b564(void)

{
  return;
}



/* Entry: 10902b568; end: 10902b63b; -[SCUcoLensMetadataProviderSettingManagerImpl applyLatestSettingsToMetadataStoreWithCompletion:] */

void FUN_10902b568(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bdf0180(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10902b63c; end: 10902b6a3;  */

void FUN_10902b63c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf08700(*(undefined8 *)(lVar1 + 8));
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10902b6a4; end: 10902b91b; -[SCUcoLensMetadataProviderSettingManagerImpl _createMetadataProviderSettingsWithCompletion:] */

void FUN_10902b6a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puStack_80 = PTR_PTR_1133c92a8;
  puStack_78 = PTR_PTR_1133c92c8;
  puStack_70 = PTR_PTR_1133c92f0;
  puStack_68 = PTR_PTR_1133c92d8;
  puStack_60 = PTR_PTR_1133c9310;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126dcfa8;
  func_0x00010bf04940();
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_1 + 0x20);
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar9);
  _os_unfair_lock_unlock(param_1 + 0x20);
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_10902b91c;
  uStack_90 = 0x10902b92c;
  uStack_88 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c12f420();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(uVar9);
  _objc_retain(puVar1);
  uVar6 = uVar5;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = puStack_a8[5];
  puStack_a8[5] = uVar6;
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  lVar7 = 8;
  __Block_object_dispose(&uStack_b0);
  _objc_release(uStack_88);
  _objc_release(param_3);
  _objc_release(uVar9);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = 0;
  return;
}



/* Entry: 10902b91c; end: 10902b933;  */

void FUN_10902b91c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10902b934; end: 10902b9c7;  */

void FUN_10902b934(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
  _objc_retain(param_2);
  func_0x00010bf86d40(uVar3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126dcfb0;
  _objc_alloc(PTR_PTR_1126dcfb0);
  func_0x00010bffb8a0();
  _objc_release(param_2);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10902b9c8; end: 10902ba03; -[SCUcoLensMetadataProviderSettingManagerImpl .cxx_destruct] */

void FUN_10902b9c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10902ba04; end: 10902bacf; -[SCUcoLensMetadataStoreTuple initWithUcoLensMetadataStore:ucoLensMetadataSettingManager:lensUnlocker:] */

undefined1 *
FUN_10902ba04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ffef0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10902bad0; end: 10902bad7; -[SCUcoLensMetadataStoreTuple ucoLensMetadataStore] */

undefined8 FUN_10902bad0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10902bad8; end: 10902badf; -[SCUcoLensMetadataStoreTuple ucoLensMetadataSettingManager] */

undefined8 FUN_10902bad8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10902bae0; end: 10902bae7; -[SCUcoLensMetadataStoreTuple lensUnlocker] */

undefined8 FUN_10902bae0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10902bae8; end: 10902bb23; -[SCUcoLensMetadataStoreTuple .cxx_destruct] */

void FUN_10902bae8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10902bb24; end: 10902bbf3; -[SCUcoScheduleIntegrationToolboxImp initWithLensRemovalManager:testLensMetadataStore:filterConfiguration:] */

undefined1 *
FUN_10902bb24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ffef8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x28) = 0;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10902bbf4; end: 10902bbf7; -[SCUcoScheduleIntegrationToolboxImp enableUCOEffectOnlyForUITests] */

void FUN_10902bbf4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be60d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__mockedLensesEnabledForUITesting_112575ce8);
  return;
}



/* Entry: 10902bbf8; end: 10902bbff; -[SCUcoScheduleIntegrationToolboxImp uiTestUcoEffectLenses] */

void FUN_10902bbf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c098250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_lenses_112603aa0);
  return;
}



/* Entry: 10902bc00; end: 10902bc6b; -[SCUcoScheduleIntegrationToolboxImp isLensCompatible:forMediaType:] */

uint FUN_10902bc00(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  uint uVar2;
  
  _objc_retain(param_3);
  if ((param_4 == 2) && (uVar1 = param_3, func_0x00010c074540(), (uVar1 & 1) != 0)) {
    uVar2 = 0;
  }
  else {
    func_0x00010be43320(param_1,param_2,param_3);
    uVar2 = (uint)param_1 ^ 1;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10902bc6c; end: 10902bc6f; -[SCUcoScheduleIntegrationToolboxImp activate] */

void FUN_10902bc6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec6f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__subscribeOnRemovalIfNeeded_11258f588);
  return;
}



/* Entry: 10902bc70; end: 10902bcaf; -[SCUcoScheduleIntegrationToolboxImp _mockedLensesEnabledForUITesting] */

undefined8 FUN_10902bc70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cf8c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10902bcb0; end: 10902bdb7; -[SCUcoScheduleIntegrationToolboxImp _subscribeOnRemovalIfNeeded] */

void FUN_10902bcb0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 0x20) == 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c12f420();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    uVar3 = uVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 10902bdb8; end: 10902bdff;  */

void FUN_10902bdb8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bede7a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10902be00; end: 10902be3f; -[SCUcoScheduleIntegrationToolboxImp _updateRemovedLenses:] */

void FUN_10902be00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x28);
  return;
}



/* Entry: 10902be40; end: 10902bee3; -[SCUcoScheduleIntegrationToolboxImp _isRemovedLens:] */

undefined8 FUN_10902be40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar3,param_2,uVar2);
    _objc_release(uVar2);
  }
  _os_unfair_lock_unlock(param_1 + 0x28);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10902bee4; end: 10902bf37; -[SCUcoScheduleIntegrationToolboxImp .cxx_destruct] */

void FUN_10902bee4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10902bf38; end: 10902bf3f; -[SCEmptyUcoDependencyFactory createUcoDataFetcherWithLazyStoreTuple:lensDataFetcherFactory:lensDownloadTracker:grapheneRegistry:] */

undefined8 FUN_10902bf38(void)

{
  return 0;
}



/* Entry: 10902bf40; end: 10902bf47; -[SCEmptyUcoDependencyFactory createUcoViewModelGeneratorWithLensMetadataRepository:lensIconRepository:ucoCarouselConfigProvider:] */

undefined8 FUN_10902bf40(void)

{
  return 0;
}



/* Entry: 10902bf48; end: 10902bf4f; -[SCEmptyUcoDependencyFactory ucoLogger] */

undefined8 FUN_10902bf48(void)

{
  return 0;
}



/* Entry: 10902bf50; end: 10902bf57; -[SCEmptyUcoDependencyFactory createUCODataStore] */

undefined8 FUN_10902bf50(void)

{
  return 0;
}



/* Entry: 10902bf58; end: 10902bf5f; -[SCEmptyUcoDependencyFactory studySettingsProvider] */

undefined8 FUN_10902bf58(void)

{
  return 0;
}



/* Entry: 10902bf60; end: 10902bf67; -[SCEmptyUcoDependencyFactory effectContentPathCache] */

undefined8 FUN_10902bf60(void)

{
  return 0;
}



/* Entry: 10902bf68; end: 10902bf6f; -[SCEmptyUcoDependencyFactory enableUCOFiltersForMultiMediaCases] */

undefined8 FUN_10902bf68(void)

{
  return 0;
}



/* Entry: 10902bf70; end: 10902bf77; -[SCEmptyUcoDependencyFactory scheduleIntegrationToolbox] */

undefined8 FUN_10902bf70(void)

{
  return 0;
}



/* Entry: 10902bf78; end: 10902bfa7; -[SCUcoDependencyFactory setStudySettingsProvider:] */

void FUN_10902bf78(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10902bfa8; end: 10902c17b; -[SCUcoDependencyFactory initWithStudySettingsProvider:bundledLensProvider:blizzardLogger:performanceAutomationLogger:lensMetadataRepository:testLensMetadataStore:redownloadLogger:lensRemovalManager:lensPlusServices:] */

undefined1 *
FUN_10902bfa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126fff00;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x40) = 0;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10902c17c; end: 10902c257; -[SCUcoDependencyFactory createUcoDataFetcherWithLazyStoreTuple:lensDataFetcherFactory:lensDownloadTracker:grapheneRegistry:] */

void FUN_10902c17c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dcf90;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1;
  func_0x00010bf8cd60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021f60(puVar1,param_2,param_3,param_4,param_5,param_6,lVar2,
                      *(undefined8 *)(param_1 + 0x48));
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10902c258; end: 10902c2eb; -[SCUcoDependencyFactory createUcoViewModelGeneratorWithLensMetadataRepository:lensIconRepository:ucoCarouselConfigProvider:] */

void FUN_10902c258(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dcfb8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0580e0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10902c2ec; end: 10902c373; -[SCUcoDependencyFactory ucoLogger] */

void FUN_10902c2ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar3 = PTR_PTR_1126dcfc0;
  _objc_alloc(PTR_PTR_1126dcfc0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c095e80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff89c0(puVar3,param_2,uVar1,uVar2,uVar5,uVar6,uVar4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10902c374; end: 10902c3ff; -[SCUcoDependencyFactory createUCODataStore] */

void FUN_10902c374(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126dcf88;
  _objc_alloc(PTR_PTR_1126dcf88);
  lVar2 = param_1;
  func_0x00010c25df60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf8cd60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04ea40(puVar1,param_2,lVar2,uVar3,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10902c400; end: 10902c43b; -[SCUcoDependencyFactory enableUCOFiltersForMultiMediaCases] */

undefined8 FUN_10902c400(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c25df60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf92260();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10902c43c; end: 10902c4bb; -[SCUcoDependencyFactory effectContentPathCache] */

void FUN_10902c43c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  if (*(long *)(param_1 + 0x60) == 0) {
    puVar1 = PTR_PTR_1126dcfc8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(undefined **)(param_1 + 0x60) = puVar1;
    _objc_release(uVar2);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10902c4bc; end: 10902c5cf; -[SCUcoDependencyFactory scheduleIntegrationToolbox] */

void FUN_10902c4bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _os_unfair_lock_lock(param_1 + 0x40);
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar3);
    puVar1 = PTR_PTR_1126ae720;
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10902c5d0;
    puStack_40 = &UNK_110ad5750;
    _objc_retain(uVar3);
    uStack_38 = uVar3;
    func_0x00010bf11fe0(puVar1,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010be49c60(param_1,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(long *)(param_1 + 0x38) = lVar4;
    _objc_release(uVar2);
    _objc_release(puVar1);
    lVar4 = *(long *)(param_1 + 0x38);
    _objc_retain(lVar4);
    _objc_release(uStack_38);
    _objc_release(uVar3);
  }
  else {
    _objc_retain(lVar4);
  }
  _os_unfair_lock_unlock(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10902c5d0; end: 10902c5f7;  */

void FUN_10902c5d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10902c5f8; end: 10902c6e3; -[SCUcoDependencyFactory _lazyScheduleIntegrationToolboxWithFilterConfiguration:] */

void FUN_10902c5f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10902c6e4; end: 10902c72b;  */

void FUN_10902c6e4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be9b160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10902c72c; end: 10902c78b; -[SCUcoDependencyFactory _scheduleIntegrationToolboxWithFilterConfiguration:] */

void FUN_10902c72c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dcfd0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0256c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10902c78c; end: 10902c7a7; +[SCUcoDependencyFactory defaultFactory] */

void FUN_10902c78c(void)

{
  _objc_opt_new(PTR_PTR_1126dcfd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10902c7a8; end: 10902c7af; -[SCUcoDependencyFactory studySettingsProvider] */

undefined8 FUN_10902c7a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10902c7b0; end: 10902c7df; -[SCUcoDependencyFactory setEffectContentPathCache:] */

void FUN_10902c7b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10902c7e0; end: 10902c87b; -[SCUcoDependencyFactory .cxx_destruct] */

void FUN_10902c7e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 10902c87c; end: 10902c99f; -[SCUcoLoggerImpl initWithBlizzardLogger:performanceAutomationLogger:lensMetadataRepository:ucoStudySettingsProvider:lensPlusTierService:] */

undefined1 *
FUN_10902c87c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126fff08;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10902c9a0; end: 10902cc23; -[SCUcoLoggerImpl logSwipeOrSpinForFilterId:swipeId:range:viewTime:commonLoggingParameters:] */

void FUN_10902c9a0(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010c096640();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + 8);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    _objc_retain(uVar7);
    lVar2 = param_2;
    func_0x00010bfb6720();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf5e8c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_initWeak(auStack_80,param_2);
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0952e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_8);
    _objc_retain(param_4);
    uStack_98 = param_6;
    uStack_90 = param_7;
    _objc_retain(param_5);
    uStack_88 = param_1;
    _objc_copyWeak(auStack_a0,auStack_80);
    _objc_retain(lVar1);
    _objc_retain(lVar3);
    _objc_retain(uVar7);
    _objc_retain(uVar6);
    func_0x00010c297260(uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar7);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_a0);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_8);
    _objc_destroyWeak(auStack_80);
    _objc_release(lVar3);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar1);
  }
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10902cc24; end: 10902d23b;  */

void FUN_10902cc24(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  _objc_retain(param_2);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c07f1e0();
  ppuVar1 = &PTR_PTR_1126c8bf0;
  if (iVar2 == 0) {
    ppuVar1 = &PTR_PTR_1126c8c30;
  }
  puVar3 = *ppuVar1;
  _objc_opt_new(puVar3);
  func_0x00010c19c240();
  func_0x00010c243400(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c206c40(puVar3);
  func_0x00010c0c6c20(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1c5440(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c243340(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcc00(puVar3);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c243340(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(puVar3);
  _objc_release(uVar4);
  func_0x00010bfae540(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c176040(puVar3);
  func_0x00010c116000(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1e3cc0(puVar3);
  lVar5 = *(long *)(param_1 + 0x20);
  func_0x00010bfae360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfae360(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c19c480(puVar3);
    _objc_release(uVar4);
  }
  func_0x00010c19c1a0(puVar3);
  func_0x00010c19c180(puVar3);
  func_0x00010c210680(puVar3);
  func_0x00010c19bec0(puVar3);
  dVar10 = *(double *)(param_1 + 0x78);
  func_0x00010c222d20(puVar3);
  lVar5 = param_1 + 0x60;
  _objc_loadWeakRetained(lVar5);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf327c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be76460(lVar5);
  func_0x00010c1df080(puVar3);
  _objc_release(uVar4);
  _objc_release(lVar5);
  func_0x00010c073cc0();
  func_0x00010c1bcca0(puVar3);
  lVar5 = *(long *)(param_1 + 0x38);
  if (lVar5 != 0) {
    lVar6 = param_2;
    func_0x00010c094540(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf08420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    func_0x00010c07c360(lVar5);
    func_0x00010c1b3da0(puVar3);
    func_0x00010bf07860(lVar5);
    dVar12 = 0.0;
    if (0.0 < dVar10) {
      func_0x00010bf07860(lVar5);
      dVar12 = dVar10;
      func_0x00010bf07b20(lVar5);
      dVar12 = dVar10 - dVar12;
      dVar10 = dVar12;
      func_0x00010c169c00(puVar3);
    }
    lVar6 = lVar5;
    func_0x00010c07c360();
    if (((int)lVar6 != 0) && (*(long *)(param_1 + 0x40) != 0)) {
      func_0x00010bfb6ee0();
      if (0.0 < dVar10) {
        func_0x00010bfb6ee0(*(undefined8 *)(param_1 + 0x40));
        func_0x00010c1bbb00(puVar3);
      }
      func_0x00010c24d780(*(undefined8 *)(param_1 + 0x40));
      if (0.0 < dVar10) {
        func_0x00010c24d780(*(undefined8 *)(param_1 + 0x40));
        func_0x00010c1bbb20(puVar3);
      }
      func_0x00010bfb66e0(*(undefined8 *)(param_1 + 0x40));
      if (0.0 < dVar10) {
        func_0x00010bfb66e0(*(undefined8 *)(param_1 + 0x40));
        func_0x00010c16dea0(puVar3);
      }
    }
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010bfb6ee0(*(undefined8 *)(param_1 + 0x40));
    dVar11 = dVar10;
    func_0x00010c24d780(*(undefined8 *)(param_1 + 0x40));
    func_0x00010c0a9620(dVar10,dVar11,dVar12,dVar12,uVar4);
    _objc_release(lVar5);
  }
  func_0x00010bedab00(*(undefined8 *)(param_1 + 0x50));
  lVar5 = param_2;
  func_0x00010c2813a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c11fae0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    lVar6 = param_2;
    func_0x00010c092b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar5);
    if (lVar6 == 0) goto LAB_10902d0bc;
  }
  else {
    _objc_release();
    _objc_release(lVar5);
  }
  puVar7 = PTR_PTR_1126c4718;
  _objc_opt_new(PTR_PTR_1126c4718);
  lVar5 = param_2;
  func_0x00010c2813a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c11fae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar5);
  if (lVar6 != 0) {
    lVar5 = param_2;
    func_0x00010c2813a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c11fae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e74c0(puVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    lVar5 = param_2;
    func_0x00010c2813a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c11fa40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e74e0(puVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  lVar5 = param_2;
  func_0x00010c092b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_2;
    func_0x00010c092b80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a100(puVar7);
    _objc_release(lVar5);
  }
  func_0x00010c1bb300(puVar3);
  _objc_release(puVar7);
LAB_10902d0bc:
  lVar5 = param_2;
  func_0x00010c2813a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010b70473c();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(lVar5);
  func_0x00010c208000(puVar3);
  puVar7 = PTR_PTR_1126bd498;
  func_0x00010c24ab20(param_2);
  func_0x00010c24ab60(puVar7);
  func_0x00010c208420(puVar3);
  lVar5 = param_2;
  func_0x00010c2813a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bef4d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164480(puVar3);
  _objc_release(lVar6);
  _objc_release(lVar5);
  lVar5 = param_2;
  func_0x00010c26a320(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212740(puVar3);
  _objc_release(lVar5);
  lVar5 = param_2;
  func_0x00010c0d53e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bc3e0(puVar3);
  _objc_release(lVar5);
  lVar5 = param_1 + 0x60;
  _objc_loadWeakRetained(lVar5);
  func_0x00010bea8360();
  _objc_release(lVar5);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x58));
  _objc_release(lVar9);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10902d23c; end: 10902d2cf; -[SCUcoLoggerImpl updateSwipeFunnel:forFunnelId:] */

void FUN_10902d23c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = param_3;
    func_0x00010bf51e00(param_3);
    func_0x00010c210620(param_1,param_2,uVar2);
    _objc_release(uVar2);
    lVar1 = param_4;
    func_0x00010bf51e00(param_4);
    func_0x00010c210640(param_1,param_2,lVar1);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10902d2d0; end: 10902d35f; -[SCUcoLoggerImpl hasSwipeFunnelForFunnelId:] */

long FUN_10902d2d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c264a80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010c264aa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0720c0();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return lVar2;
}


