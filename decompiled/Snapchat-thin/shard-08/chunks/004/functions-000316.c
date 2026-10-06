/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10617991c; end: 106179a47; -[SCFeatureLevelerModeImpl detailedCameraModeLogInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617991c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar5 = param_1 + _DAT_112740eac;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112740ea4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010bfecd60(lVar5,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(lVar5);
  if (lVar3 != 0x7fffffffffffffff) {
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110e42758);
    _objc_release(puVar4);
  }
  lVar5 = *(long *)(param_1 + _DAT_112740ebc);
  if (lVar5 == 0) {
    func_0x00010c1d0560(puVar1,param_2,&PTR____CFConstantStringClassReference_110daafd8,
                        &PTR____CFConstantStringClassReference_110db16f8);
  }
  else {
    func_0x0001061a7e54();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar1,param_2,lVar5,&PTR____CFConstantStringClassReference_110db16f8);
    _objc_release(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106179a48; end: 106179c53; -[SCFeatureLevelerModeImpl _createAndSetupWithContainerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106179a48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106179c54;
  puStack_78 = &UNK_110911b30;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112740ec0);
  *(undefined **)(param_1 + _DAT_112740ec0) = puVar1;
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126b6ae8;
  func_0x00010c22ba80(PTR_PTR_1126b6ae8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae960;
  puVar3 = PTR_PTR_1126c82e8;
  func_0x00010bfce2e0(PTR_PTR_1126c82e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf28e80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae970;
  func_0x00010c0c7320(PTR_PTR_1126ae970);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010c2a14e0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 106179c54; end: 106179d13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106179c54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  
  param_5 = param_5 + 0x20;
  _objc_loadWeakRetained();
  if (param_5 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    if (*(char *)(param_5 + _DAT_112740e8c) == '\x01') {
      param_1 = *(undefined8 *)PTR__CGRectZero_110347608;
      param_2 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
      param_3 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
      param_4 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    }
    else {
      func_0x00010be4a220(param_5);
    }
    puVar1 = PTR_PTR_1126c8658;
    _objc_alloc(PTR_PTR_1126c8658);
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    func_0x00010c21caa0();
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106179d14; end: 106179d63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106179d14(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = (long)_DAT_112740ec0;
    uVar1 = *(ulong *)(param_1 + lVar2);
    func_0x00010c06f880();
    if ((uVar1 & 1) == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar2));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106179d64; end: 10617a053; -[SCFeatureLevelerModeImpl _createToolbarItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106179d64(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar1 = PTR_PTR_1126c7918;
  _objc_alloc(PTR_PTR_1126c7918);
  func_0x00010c037be0();
  func_0x00010c1cdb60();
  puVar2 = puVar1;
  func_0x00010c1fb140(puVar1);
  func_0x00010b0aebac();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cdba0(puVar1);
  _objc_release(puVar2);
  func_0x00010b0aebc4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb640(puVar1);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c160fc0(puVar1);
  func_0x00010b0aebac();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(puVar1);
  _objc_release(puVar2);
  func_0x0001008b0f58();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1610c0(puVar1);
  _objc_release(puVar2);
  func_0x0001008b0f70();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1610e0(puVar1);
  _objc_release(puVar2);
  func_0x00010c2237a0(puVar1);
  func_0x00010c200900(puVar1);
  func_0x00010c177460(puVar1);
  _objc_initWeak(auStack_68,param_1);
  _objc_initWeak(auStack_70,puVar1);
  puVar2 = puVar1;
  func_0x00010bf735a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10617a054;
  puStack_88 = &UNK_110911b60;
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_copyWeak(auStack_78,auStack_70);
  puVar3 = puVar2;
  func_0x00010c25ff60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bf7ca60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_68);
  puVar3 = puVar2;
  func_0x00010c25ff60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10617a054; end: 10617a1bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617a054(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + _DAT_112740ea0);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010c07d660(param_1);
      func_0x00010c172fe0(uVar2,param_2,lVar5,&PTR____CFConstantStringClassReference_110e43198);
      _objc_release(uVar2);
      lVar5 = (long)_DAT_112740ea4;
      uVar3 = *(undefined8 *)(lVar1 + lVar5);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c07d660();
      _objc_release(uVar3);
      if ((int)uVar2 == 0) {
        func_0x00010bdf81e0(lVar1);
      }
      else {
        func_0x00010bdc4860();
        lVar4 = *(long *)(lVar1 + lVar5);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c104260();
        _objc_release(lVar4);
        if (lVar5 == 2) {
          *(undefined8 *)(lVar1 + _DAT_112740ebc) = 4;
        }
      }
      lVar5 = (long)_DAT_112740e80;
      uVar2 = *(undefined8 *)(lVar1 + lVar5);
      func_0x00010bfa1820(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2b760();
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(lVar1 + lVar5);
      func_0x00010bfa1820(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2b740();
      _objc_release(uVar2);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10617a1bc; end: 10617a25b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617a1bc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010c273a00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c104260();
    _objc_release(lVar1);
    if (lVar2 == 2) {
      *(long *)(param_1 + _DAT_112740eb8) = *(long *)(param_1 + _DAT_112740eb8) + 1;
    }
    *(long *)(param_1 + _DAT_112740eb4) = *(long *)(param_1 + _DAT_112740eb4) + 1;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10617a25c; end: 10617a25f; -[SCFeatureLevelerModeImpl _appWillEnterForeground] */

void FUN_10617a25c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddd3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__checkAndStartRendering_112554e88);
  return;
}



/* Entry: 10617a260; end: 10617a263; -[SCFeatureLevelerModeImpl _appDidEnterBackground] */

void FUN_10617a260(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddd3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__checkAndStopRendering_112554e90);
  return;
}



/* Entry: 10617a264; end: 10617a267; -[SCFeatureLevelerModeImpl _viewWillAppear] */

void FUN_10617a264(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddd3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__checkAndStartRendering_112554e88);
  return;
}



/* Entry: 10617a268; end: 10617a26b; -[SCFeatureLevelerModeImpl _viewWillDisappear] */

void FUN_10617a268(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddd3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__checkAndStopRendering_112554e90);
  return;
}



/* Entry: 10617a26c; end: 10617a33f; -[SCFeatureLevelerModeImpl _didToggleMultiCam:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617a26c(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 == 0) {
    lVar2 = param_1 + _DAT_112740eac;
    _objc_loadWeakRetained(lVar2);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112740ea4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23a840(lVar2,param_2,uVar1,0);
  }
  else {
    lVar3 = (long)_DAT_112740ea4;
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b4280();
    _objc_release(uVar1);
    lVar2 = param_1 + _DAT_112740eac;
    _objc_loadWeakRetained(lVar2);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe2c00(lVar2,param_2,uVar1,0);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10617a340; end: 10617a553; -[SCFeatureLevelerModeImpl _activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617a340(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = (long)_DAT_112740e9c;
  uVar2 = *(undefined8 *)(param_2 + lVar5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beec960();
  *(undefined8 *)(param_2 + _DAT_112740ec4) = param_1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + lVar5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112740e98;
  func_0x00010bf46e20(1.0 / *(double *)(param_2 + lVar6));
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126c82a8;
  func_0x00010bf85b60(PTR_PTR_1126c82a8,param_3,param_2,PTR_s__updateAnimatedLeveler_11252f768);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112740ec8;
  uVar2 = *(undefined8 *)(param_2 + lVar5);
  *(undefined **)(param_2 + lVar5) = puVar3;
  _objc_release(uVar2);
  func_0x00010c1dffe0(*(undefined8 *)(param_2 + lVar5),param_3,(long)*(double *)(param_2 + lVar6));
  uVar2 = *(undefined8 *)(param_2 + lVar5);
  puVar3 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010bf5fe80(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc2c0(uVar2,param_3,puVar3,*(undefined8 *)PTR__NSDefaultRunLoopMode_11034aa38);
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(param_2 + _DAT_112740ec0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112740ea8;
  lVar5 = param_2 + lVar6;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c066fc0();
  _objc_release(lVar5);
  if (*(char *)(param_2 + _DAT_112740e8c) == '\x01') {
    lVar7 = (long)_DAT_112740ecc;
    lVar5 = *(long *)(param_2 + lVar7);
    if (lVar5 == 0) {
      puVar3 = PTR_PTR_1126c8660;
      _objc_alloc();
      lVar6 = param_2 + lVar6;
      _objc_loadWeakRetained(lVar6);
      _objc_retain();
      lVar5 = lVar6;
      func_0x00010bf2bb60(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c026080(puVar3,param_3,uVar2,lVar6,lVar5);
      uVar4 = *(undefined8 *)(param_2 + lVar7);
      *(undefined **)(param_2 + lVar7) = puVar3;
      _objc_release(uVar4);
      _objc_release(lVar5);
      _objc_release(lVar6);
      _objc_release(lVar6);
      lVar5 = *(long *)(param_2 + lVar7);
    }
    puVar1 = (undefined8 *)(param_2 + _DAT_112740e90);
    func_0x00010bef00a0(*puVar1,puVar1[1],puVar1[2],puVar1[3],lVar5);
    func_0x00010be57f60(param_2);
  }
  *(undefined1 *)(param_2 + _DAT_112740e94) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10617a554; end: 10617a5fb; -[SCFeatureLevelerModeImpl _deactivate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617a554(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740e9c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf46e20(*(undefined8 *)(param_1 + _DAT_112740ec4));
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112740ec8;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  func_0x00010bf65b20(*(undefined8 *)(param_1 + _DAT_112740ecc));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740ec0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + _DAT_112740e94) = 0;
  return;
}



/* Entry: 10617a5fc; end: 10617a73f; -[SCFeatureLevelerModeImpl _updateAnimatedLeveler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617a5fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  
  lVar2 = (long)_DAT_112740e9c;
  uVar1 = *(undefined8 *)(param_4 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf70ce0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_4 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beec920();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_4 + _DAT_112740ec0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf897a0(param_1,param_2,param_3);
  _objc_release(uVar1);
  dVar3 = *(double *)(param_4 + _DAT_112740e98);
  dVar4 = 1.0 / dVar3;
  uVar1 = *(undefined8 *)(param_4 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beec960();
  _objc_release(uVar1);
  if (dVar4 < dVar3) {
    uVar1 = *(undefined8 *)(param_4 + lVar2);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf46e20(dVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10617a740; end: 10617a83f; -[SCFeatureLevelerModeImpl _renderRegionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617a740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  puVar1 = (undefined8 *)(param_5 + _DAT_112740e90);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  if (*(char *)(param_5 + _DAT_112740e94) == '\x01') {
    iVar2 = (int)*(undefined8 *)(param_5 + _DAT_112740ec0);
    func_0x00010c06f880();
    if (iVar2 != 0) {
      puVar3 = auStack_28;
      _objc_initWeak(puVar3,param_5);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_30,auStack_28);
      func_0x00010c0f7fc0(puVar3);
      _objc_release(puVar3);
      _objc_destroyWeak(auStack_30);
      _objc_destroyWeak(auStack_28);
    }
  }
  return;
}



/* Entry: 10617a840; end: 10617a90f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617a840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  param_5 = param_5 + 0x20;
  _objc_loadWeakRetained();
  if (param_5 != 0) {
    if (*(char *)(param_5 + _DAT_112740e8c) == '\x01') {
      puVar1 = (undefined8 *)(param_5 + _DAT_112740e90);
      func_0x00010c289260(*puVar1,puVar1[1],puVar1[2],puVar1[3],
                          *(undefined8 *)(param_5 + _DAT_112740ecc));
      func_0x00010be57f60(param_5);
    }
    else {
      func_0x00010be4a220(param_5);
      uVar2 = *(undefined8 *)(param_5 + _DAT_112740ec0);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10617a910; end: 10617aa97; -[SCFeatureLevelerModeImpl _legacyViewFrameForLevelerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10617a910(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  double *pdVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  
  lVar2 = param_5 + _DAT_112740ea8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf20c00();
  dVar9 = param_1;
  uVar6 = param_2;
  uVar7 = param_3;
  uVar8 = param_4;
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b9e78;
  func_0x00010c072be0();
  if ((int)puVar3 != 0) {
    puVar3 = PTR_PTR_1126b9e78;
    func_0x00010c0c2600();
    param_2 = uVar6;
    param_1 = dVar9;
    param_3 = uVar7;
    param_4 = uVar8;
  }
  pdVar1 = (double *)(param_5 + _DAT_112740e90);
  _CGRectEqualToRect(*pdVar1,pdVar1[1],pdVar1[2],pdVar1[3],*(undefined8 *)PTR__CGRectZero_110347608,
                     *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                     *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                     *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  dVar9 = param_1;
  if (((ulong)puVar3 & 1) == 0) {
    dVar4 = param_1;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    _CGRectGetWidth(*pdVar1,pdVar1[1],pdVar1[2],pdVar1[3]);
    _CGRectGetHeight(*pdVar1,pdVar1[1],pdVar1[2],pdVar1[3]);
    _CGRectGetMinX(param_1,param_2,param_3,param_4);
    dVar5 = *pdVar1;
    _CGRectGetMinX(dVar5,pdVar1[1],pdVar1[2],pdVar1[3]);
    dVar9 = dVar9 + dVar5 * dVar4;
    _CGRectGetMinY(param_1,param_2,param_3,param_4);
    _CGRectGetMinY(*pdVar1,pdVar1[1],pdVar1[2],pdVar1[3]);
  }
  return dVar9;
}



/* Entry: 10617aa98; end: 10617aacb; -[SCFeatureLevelerModeImpl _logRuntimeGeometry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617aa98(long param_1)

{
  param_1 = param_1 + _DAT_112740ea8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10617aacc; end: 10617aba3; -[SCFeatureLevelerModeImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617aacc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112740ecc,0);
  _objc_storeStrong(param_1 + _DAT_112740eb0,0);
  _objc_storeStrong(param_1 + _DAT_112740e88,0);
  _objc_storeStrong(param_1 + _DAT_112740ea0,0);
  _objc_storeStrong(param_1 + _DAT_112740e9c,0);
  _objc_storeStrong(param_1 + _DAT_112740ec8,0);
  _objc_destroyWeak(param_1 + _DAT_112740eac);
  _objc_storeStrong(param_1 + _DAT_112740ea4,0);
  _objc_destroyWeak(param_1 + _DAT_112740ea8);
  _objc_storeStrong(param_1 + _DAT_112740e84,0);
  _objc_storeStrong(param_1 + _DAT_112740ec0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112740e80,0);
  return;
}



/* Entry: 10617aba4; end: 10617ac5f; -[SCFeatureLevelerModeLayoutController initWithLevelerView:containerView:viewfinderLayoutGuide:] */

undefined1 *
FUN_10617aba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126eff20;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10617ac60; end: 10617adf7; -[SCFeatureLevelerModeLayoutController dealloc] */

void FUN_10617ac60(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar4);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar6);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10617adf8;
  puStack_80 = &UNK_1108475b0;
  uStack_78 = uVar4;
  uStack_70 = uVar3;
  lStack_68 = lVar1;
  uStack_60 = uVar5;
  uStack_58 = uVar6;
  _objc_retain(uVar6);
  _objc_retain(uVar5);
  _objc_retain(lVar1);
  _objc_retain(uVar3);
  _objc_retain(uVar4);
  func_0x00010c0f88c0(uVar2);
  _objc_release(uVar2);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(lStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puStack_a0 = PTR_PTR_1126eff20;
  lStack_a8 = param_1;
  _objc_msgSendSuper2(&lStack_a8,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10617adf8; end: 10617ae0b;  */

void FUN_10617adf8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar5);
  _objc_retain(uVar3);
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  func_0x00010bf65be0(puVar4);
  func_0x00010617b72c(uVar2,uVar3,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c219b60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10617ae0c; end: 10617aeb3;  */

void FUN_10617ae0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x00010bf65be0(puVar1);
  func_0x00010617b72c(param_3,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c219b60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10617aeb4; end: 10617aec7; -[SCFeatureLevelerModeLayoutController activateWithRenderRegion:] */

void FUN_10617aeb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined1 *)(param_5 + 0x58) = 1;
  *(undefined8 *)(param_5 + 0x38) = param_1;
  *(undefined8 *)(param_5 + 0x40) = param_2;
  *(undefined8 *)(param_5 + 0x48) = param_3;
  *(undefined8 *)(param_5 + 0x50) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010be3cc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s__installConstraints_11256ccb0);
  return;
}



/* Entry: 10617aec8; end: 10617af4f; -[SCFeatureLevelerModeLayoutController updateRenderRegion:] */

void FUN_10617aec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  
  uVar1 = param_5;
  _CGRectEqualToRect(*(undefined8 *)(param_5 + 0x38),*(undefined8 *)(param_5 + 0x40),
                     *(undefined8 *)(param_5 + 0x48),*(undefined8 *)(param_5 + 0x50),param_1,param_2
                     ,param_3,param_4);
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)(param_5 + 0x38) = param_1;
    *(undefined8 *)(param_5 + 0x40) = param_2;
    *(undefined8 *)(param_5 + 0x48) = param_3;
    *(undefined8 *)(param_5 + 0x50) = param_4;
    if (*(char *)(param_5 + 0x58) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be3cc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s__installConstraints_11256ccb0);
      return;
    }
  }
  return;
}



/* Entry: 10617af50; end: 10617b023; -[SCFeatureLevelerModeLayoutController deactivate] */

void FUN_10617af50(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *(undefined1 *)(param_1 + 0x58) = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar5);
  _objc_retain(uVar4);
  lVar3 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar6);
  FUN_10617ae0c(uVar5,uVar4,lVar3,uVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10617b024; end: 10617b6ab; -[SCFeatureLevelerModeLayoutController _installConstraints] */

void FUN_10617b024(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(param_1 + 0x20));
  func_0x00010be8d480(param_1);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar2 = param_1 + 0x18;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _CGRectEqualToRect(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                     *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                     *(undefined8 *)PTR__CGRectZero_110347608,
                     *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                     *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                     *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  if ((uVar3 & 1) == 0) {
    dVar17 = *(double *)(param_1 + 0x38);
    uVar18 = *(undefined8 *)(param_1 + 0x40);
    uVar16 = *(undefined8 *)(param_1 + 0x48);
    uVar19 = *(undefined8 *)(param_1 + 0x50);
  }
  else {
    uVar16 = 0x3ff0000000000000;
    dVar17 = 0.0;
    uVar18 = 0;
    uVar19 = 0x3ff0000000000000;
  }
  func_0x00010c219b60(*(undefined8 *)(param_1 + 8));
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2a5060(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _CGRectGetWidth(dVar17,uVar18,uVar16,uVar19);
  uVar12 = uVar4;
  func_0x00010bf493e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bfe0660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _CGRectGetHeight(dVar17,uVar18,uVar16,uVar19);
  uVar13 = uVar5;
  func_0x00010bf493e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar13);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar12);
  _objc_release(uVar3);
  _objc_release(uVar4);
  dVar15 = dVar17;
  _CGRectGetMinX(dVar17,uVar18,uVar16,uVar19);
  uVar3 = uVar2;
  if (dVar15 == 0.0) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c08e400(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08e400(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar5;
    func_0x00010bf493a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar8);
  }
  else {
    puVar7 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    _objc_opt_new();
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar7;
    _objc_release(uVar12);
    func_0x00010c1a99e0(*(undefined8 *)(param_1 + 0x28));
    func_0x00010bef9680(lVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08e400(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar9;
    func_0x00010bf493e0(dVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 8);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c1408a0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar4);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar13);
    _objc_release(uVar6);
    _objc_release(uVar9);
  }
  _objc_release(uVar12);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _CGRectGetMinY(dVar17,uVar18,uVar16,uVar19);
  uVar3 = uVar2;
  if (dVar17 == 0.0) {
    uVar12 = *(undefined8 *)(param_1 + 8);
    func_0x00010c274200(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c274200(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar12;
    func_0x00010bf493a0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar8);
  }
  else {
    puVar7 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    _objc_opt_new();
    uVar16 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar7;
    _objc_release(uVar16);
    func_0x00010c1a99e0(*(undefined8 *)(param_1 + 0x30));
    func_0x00010bef9680(lVar1);
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c274200(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar13;
    func_0x00010bf493e0(dVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf1ff80(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar19);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar18);
    _objc_release(uVar6);
    _objc_release(uVar13);
  }
  _objc_release(uVar16);
  _objc_release(uVar3);
  _objc_release(uVar12);
  uVar16 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar8;
  _objc_retain(puVar8);
  _objc_release(uVar16);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release(puVar8);
  func_0x00010c1cbe20(lVar1);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  lVar14 = lVar1 + 0x10;
  _objc_loadWeakRetained(lVar14);
  uVar16 = *(undefined8 *)(lVar1 + 0x28);
  uVar18 = *(undefined8 *)(lVar1 + 0x30);
  *(undefined8 *)(lVar1 + 0x28) = 0;
  _objc_retain(uVar18);
  _objc_retain(uVar16);
  _objc_release(uVar16);
  uVar19 = *(undefined8 *)(lVar1 + 0x30);
  *(undefined8 *)(lVar1 + 0x30) = 0;
  _objc_release(uVar19);
  func_0x00010617b72c(lVar14,uVar16,uVar18);
  _objc_release(uVar18);
  _objc_release(uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar14);
  return;
}



/* Entry: 10617b6ac; end: 10617b7d7; -[SCFeatureLevelerModeLayoutController _removeSpacerGuides] */

void FUN_10617b6ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar4);
  func_0x00010617b72c(lVar3,uVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10617b7d8; end: 10617b82f; -[SCFeatureLevelerModeLayoutController .cxx_destruct] */

void FUN_10617b7d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10617b830; end: 10617ba9b; -[SCFeatureLevelerModeView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10617b830(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126eff28;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c21e900(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010bed3180(puVar1);
    puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    _objc_alloc_init();
    lVar6 = (long)_DAT_112740ef4;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    _objc_alloc_init();
    lVar7 = (long)_DAT_112740ef8;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar5);
    func_0x00010c1bdd00(0x3ff0000000000000,*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf414e0(0x3fdccccccccccccd);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c20e8e0(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010c1733a0(0x3fe0000000000000,*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf414e0(0x3fbeb851eb851eb8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c173280(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010c1bdd00(0x3ff0000000000000,*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c1733a0(0x3fe0000000000000,*(undefined8 *)((long)puVar1 + lVar7));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf414e0(0x3fbeb851eb851eb8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c173280(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066f40();
    _objc_release(puVar4);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066f40();
    _objc_release(puVar4);
    func_0x00010be06840(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10617ba9c; end: 10617bbcb; -[SCFeatureLevelerModeView _drawStaticLeveler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617ba9c(double param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  double dVar4;
  
  dVar4 = 1.0;
  lVar2 = param_2;
  _CGPathCreateMutable();
  bVar1 = true;
  do {
    bVar3 = bVar1;
    func_0x00010bfb68e0(param_2);
    _CGRectGetWidth();
    dVar4 = (dVar4 * param_1) / 3.0 + -0.5;
    param_1 = dVar4 + -0.5;
    func_0x00010bfb68e0(param_2);
    _CGRectGetHeight();
    _CGPathMoveToPoint(param_1,0,lVar2,0);
    _CGPathAddLineToPoint(param_1,dVar4,lVar2,0);
    dVar4 = 2.0;
    bVar1 = false;
  } while (bVar3);
  dVar4 = 1.0;
  bVar1 = true;
  do {
    bVar3 = bVar1;
    func_0x00010bfb68e0(param_2);
    _CGRectGetHeight();
    param_1 = dVar4 * param_1;
    dVar4 = param_1 / 3.0;
    func_0x00010bfb68e0(param_2);
    _CGRectGetWidth();
    _CGPathMoveToPoint(0,dVar4,lVar2,0);
    _CGPathAddLineToPoint(param_1,dVar4,lVar2,0);
    dVar4 = 2.0;
    bVar1 = false;
  } while (bVar3);
  func_0x00010c1d9820(*(undefined8 *)(param_2 + _DAT_112740ef4));
                    /* WARNING: Could not recover jumptable at 0x00010bdbb378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGPathRelease_110347530)(lVar2);
  return;
}



/* Entry: 10617bbcc; end: 10617bc2f; -[SCFeatureLevelerModeView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617bbcc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126eff28;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  if (*(char *)(param_1 + _DAT_112740ef0) == '\x01') {
    func_0x00010bed3180(param_1);
  }
  func_0x00010be06840(param_1);
  return;
}



/* Entry: 10617bc30; end: 10617bc8f; -[SCFeatureLevelerModeView _updateAnimatedLevelerGeometry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617bc30(double param_1,long param_2)

{
  func_0x00010bf20c00();
  _CGRectGetWidth();
  param_1 = param_1 * 0.07866666666666666;
  *(double *)(param_2 + _DAT_112740efc) = param_1;
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  *(double *)(param_2 + _DAT_112740f00) = param_1 * 0.14533333333333334;
  return;
}



/* Entry: 10617bc90; end: 10617bf37; -[SCFeatureLevelerModeView drawAnimatedLevelerWithDeviceOrientation:acceleration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617bc90(double param_1,double param_2,double param_3,ulong param_4,undefined8 param_5,
                  long param_6)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  
  uVar4 = param_4;
  _CGPathCreateMutable();
  param_3 = ABS(param_3);
  _acos();
  dVar13 = (param_3 * 180.0) / 3.141592653589793;
  lVar10 = (long)_DAT_112740f04;
  bVar1 = 44.0 < dVar13;
  if (*(char *)(param_4 + lVar10) == '\0') {
    bVar1 = 48.0 < dVar13;
  }
  if (bVar1) {
    dVar13 = SQRT(param_2 * param_2 + param_1 * param_1);
    param_1 = param_1 / dVar13;
    param_2 = param_2 / dVar13;
    lVar11 = (long)_DAT_112740efc;
    lVar3 = (long)_DAT_112740f00;
    dVar17 = param_2 * *(double *)(param_4 + lVar11);
    dVar18 = param_1 * *(double *)(param_4 + lVar11);
    param_2 = param_2 * *(double *)(param_4 + lVar3);
    param_1 = param_1 * *(double *)(param_4 + lVar3);
    dVar13 = dVar18;
    dVar14 = dVar17;
    dVar15 = param_1;
    dVar16 = param_2;
    if (param_6 - 1U < 2) {
      dVar13 = dVar17;
      dVar14 = dVar18;
      dVar15 = param_2;
      dVar16 = param_1;
    }
    uVar5 = param_4;
    func_0x00010be4c380(dVar13,dVar14,dVar15,dVar16);
    bVar2 = (uVar5 & 1) == 0;
    if (bVar2) {
      uVar19 = 0x3ff0000000000000;
      uVar9 = 0xa1;
    }
    else {
      uVar19 = 0x3fdccccccccccccd;
      uVar9 = 0xd5;
    }
    bVar2 = !bVar2;
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_5,uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf414e0(uVar19);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    lVar12 = (long)_DAT_112740ef8;
    func_0x00010c20e8e0(*(undefined8 *)(param_4 + lVar12),param_5,puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    func_0x00010be06660(dVar17,dVar18,param_2,param_1,*(undefined8 *)(param_4 + lVar11),
                        *(undefined8 *)(param_4 + lVar3),param_4,param_5,uVar4,param_6,bVar2);
    func_0x00010be06660(-dVar17,-dVar18,-param_2,-param_1,-*(double *)(param_4 + lVar11),
                        -*(double *)(param_4 + lVar3),param_4,param_5,uVar4,param_6,bVar2);
    lVar11 = (long)_DAT_112740f08;
    if ((!bVar2) && ((*(byte *)(param_4 + lVar11) & 1) != 0)) {
      puVar6 = PTR_PTR_1126affa8;
      func_0x00010c22bc20(PTR_PTR_1126affa8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f8760();
      _objc_release(puVar6);
    }
    *(bool *)(param_4 + lVar11) = bVar2;
  }
  else {
    lVar12 = (long)_DAT_112740ef8;
  }
  *(bool *)(param_4 + lVar10) = bVar1;
  func_0x00010c1d9820(*(undefined8 *)(param_4 + lVar12),param_5,uVar4);
  _CGPathRelease(uVar4);
  func_0x00010c08c0e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbd40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10617bf38; end: 10617bfa3; -[SCFeatureLevelerModeView _levelingWithStart:end:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10617bf38(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  double dVar1;
  double dVar2;
  
  dVar1 = ABS((param_2 - param_4) / (param_1 - param_3));
  _atan();
  dVar2 = 1.0;
  if (*(char *)(param_5 + _DAT_112740f08) == '\0') {
    dVar2 = 3.0;
  }
  return dVar2 < (dVar1 * 180.0) / 3.141592653589793;
}



/* Entry: 10617bfa4; end: 10617c0ab; -[SCFeatureLevelerModeView _drawLineOnPath:withDeviceOrientation:Leveling:start:end:innerRadius:outterRadius:] */

void FUN_10617bfa4(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  long param_10,int param_11)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_1;
  func_0x00010bf20c00();
  _CGRectGetMidX();
  dVar2 = dVar1;
  func_0x00010bf20c00(param_7);
  _CGRectGetMidY();
  if (param_11 == 0) {
    if (param_10 - 1U < 2) {
      _CGPathMoveToPoint(param_5 + dVar1,dVar2,param_9,0);
      dVar1 = param_6 + dVar1;
    }
    else {
      _CGPathMoveToPoint(dVar1,param_5 + dVar2,param_9,0);
      dVar2 = param_6 + dVar2;
    }
  }
  else {
    _CGPathMoveToPoint(param_1 + dVar1,param_2 + dVar2,param_9,0);
    dVar1 = param_3 + dVar1;
    dVar2 = param_4 + dVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbb27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGPathAddLineToPoint_110347488)(dVar1,dVar2,param_9,0);
  return;
}



/* Entry: 10617c0ac; end: 10617c0bb; -[SCFeatureLevelerModeView updatesAnimatedLevelerGeometryOnLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10617c0ac(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112740ef0);
}



/* Entry: 10617c0bc; end: 10617c0cb; -[SCFeatureLevelerModeView setUpdatesAnimatedLevelerGeometryOnLayout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617c0bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112740ef0) = param_3;
  return;
}



/* Entry: 10617c0cc; end: 10617c10b; -[SCFeatureLevelerModeView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617c0cc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112740ef4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112740ef8,0);
  return;
}



/* Entry: 10617c10c; end: 10617c597; -[SCFeatureMicNotificationImpl initWithNotificationManager:applicationLifecycleEvents:viewControllerLifecycleEvents:mainCameraViewControllerLifecycleEvents:audioSession:userSession:cameraViewType:callStateProvider:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10617c10c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_80 = PTR_PTR_1126eff30;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112740f0c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112740f10;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112740f14;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112740f18,param_10);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112740f1c) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112740f20) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112740f24) = 0;
    lVar5 = (long)_DAT_112740f28;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_11;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112740f2c);
    *(undefined **)((long)puVar1 + (long)_DAT_112740f2c) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112740f30);
    *(undefined **)((long)puVar1 + (long)_DAT_112740f30) = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    uVar2 = param_4;
    func_0x00010bf72840(param_4);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10617c598;
    puStack_a0 = &UNK_110846510;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar4 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf75dc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x10617c5d0;
    puStack_c8 = &UNK_110846510;
    _objc_copyWeak(auStack_c0,auStack_90);
    uVar4 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    if (param_9 == 0) {
      puVar3 = PTR_PTR_1126ae810;
      _objc_opt_new();
      uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112740f34);
      *(undefined **)((long)puVar1 + (long)_DAT_112740f34) = puVar3;
      _objc_release(uVar2);
      puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_100 = 0xc2000000;
      pcStack_f8 = FUN_10617c608;
      puStack_f0 = &UNK_11090b470;
      puVar6 = auStack_e8;
      _objc_copyWeak(puVar6,auStack_90);
      uVar2 = param_6;
      func_0x00010c25ff60(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
    }
    else {
      puVar3 = PTR_PTR_1126ae810;
      _objc_opt_new();
      uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112740f38);
      *(undefined **)((long)puVar1 + (long)_DAT_112740f38) = puVar3;
      _objc_release(uVar2);
      puVar6 = auStack_110;
      _objc_copyWeak(puVar6,auStack_90);
      uVar2 = param_5;
      func_0x00010c25ff60(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
    }
    _objc_release(uVar2);
    _objc_destroyWeak(puVar6);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10617c598; end: 10617c607;  */

void FUN_10617c598(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdcc9c0(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10617c608; end: 10617c703;  */

void FUN_10617c608(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10617c704;
  puStack_60 = &UNK_1108434b0;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0c1540(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 10617c704; end: 10617c783;  */

void FUN_10617c704(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bee9400(param_1);
    func_0x00010beae1e0(param_1);
    func_0x00010bed49a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10617c784; end: 10617c78b;  */

void FUN_10617c784(void)

{
  return;
}



/* Entry: 10617c78c; end: 10617c88f;  */

void FUN_10617c78c(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10617c898;
  puStack_60 = &UNK_110849200;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0c15c0(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 10617c890; end: 10617c897;  */

void FUN_10617c890(void)

{
  return;
}



/* Entry: 10617c898; end: 10617c8db;  */

void FUN_10617c898(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bee9400(param_1);
    func_0x00010beae1e0(param_1);
    func_0x00010bed49a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10617c8dc; end: 10617c8df;  */

void FUN_10617c8dc(void)

{
  return;
}



/* Entry: 10617c8e0; end: 10617c91b;  */

void FUN_10617c8e0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bee9480(param_1);
    func_0x00010be35a20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10617c91c; end: 10617c973; -[SCFeatureMicNotificationImpl dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617c91c(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c18b640(*(undefined8 *)(param_1 + _DAT_112740f3c),param_2,0,0);
  puStack_28 = PTR_PTR_1126eff30;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10617c974; end: 10617c977; -[SCFeatureMicNotificationImpl configureWithView:] */

void FUN_10617c974(void)

{
  return;
}



/* Entry: 10617c978; end: 10617c987; -[SCFeatureMicNotificationImpl isPhoneCallActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10617c978(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112740f1c);
}



/* Entry: 10617c988; end: 10617c997; -[SCFeatureMicNotificationImpl hasShownMicInUseNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10617c988(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112740f24);
}



/* Entry: 10617c998; end: 10617ca3f; -[SCFeatureMicNotificationImpl isSnapchatCallActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10617c998(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112740f18;
  uVar1 = param_1 + lVar5;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd41e0();
  if ((uVar3 & 1) == 0) {
    param_1 = param_1 + lVar5;
    _objc_loadWeakRetained(param_1);
    lVar5 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010bfd4f40();
    _objc_release(lVar5);
    _objc_release(param_1);
  }
  else {
    lVar4 = 1;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return lVar4;
}



/* Entry: 10617ca40; end: 10617ca53; -[SCFeatureMicNotificationImpl _viewDidAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617ca40(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112740f20) = 1;
  return;
}



/* Entry: 10617ca54; end: 10617ca63; -[SCFeatureMicNotificationImpl _viewDidDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617ca54(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112740f20) = 0;
  return;
}



/* Entry: 10617ca64; end: 10617caab; -[SCFeatureMicNotificationImpl _hideMicInUseWarning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617ca64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740f40;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c1a7f60(*(long *)(param_1 + lVar2),param_2,1);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10617caac; end: 10617caff; -[SCFeatureMicNotificationImpl _shouldShowMicInUseWarning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10617caac(ulong param_1)

{
  ulong uVar1;
  byte bVar2;
  
  uVar1 = param_1;
  func_0x00010c07ed20();
  if (((uVar1 & 1) == 0) && (*(char *)(param_1 + (long)_DAT_112740f20) == '\x01')) {
    bVar2 = *(byte *)(param_1 + (long)_DAT_112740f24) ^ 1;
  }
  else {
    bVar2 = 0;
  }
  return bVar2 & 1;
}



/* Entry: 10617cb00; end: 10617ccb3; -[SCFeatureMicNotificationImpl _showMicInUseWarningIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617cb00(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar4 = param_1;
  func_0x00010beb6260();
  if (((int)lVar4 != 0) && (lVar4 = (long)_DAT_112740f40, *(long *)(param_1 + lVar4) == 0)) {
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf07b60();
    _objc_release(puVar1);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126afca8;
      _objc_alloc();
      func_0x00010c02cc60();
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      *(undefined **)(param_1 + lVar4) = puVar1;
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(uVar3);
      _objc_release(puVar1);
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(uVar3);
      _objc_release(puVar1);
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010619f724();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(uVar3);
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
      _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
      func_0x00010c050900();
      func_0x00010bef9040(*(undefined8 *)(param_1 + lVar4));
      _objc_release(puVar1);
    }
    if (*(long *)(param_1 + lVar4) != 0) {
      *(undefined1 *)(param_1 + _DAT_112740f24) = 1;
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_10617ccb4;
      puStack_50 = &UNK_110842e18;
      lStack_48 = param_1;
      func_0x000100162d98("APPSTORE",&puStack_68);
    }
  }
  return;
}



/* Entry: 10617ccb4; end: 10617cccf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617ccb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c235d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4014000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112740f40),
             PTR_s_showAnimated_hideInSeconds__11266b188,1);
  return;
}



/* Entry: 10617ccd0; end: 10617cd6b; -[SCFeatureMicNotificationImpl _setupCallObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617ccd0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = (long)_DAT_112740f3c;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___CXCallObserver_1126b6e20;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + lVar3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112740f2c);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b640(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bed4990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCallStatus_112592c08);
  return;
}



/* Entry: 10617cd6c; end: 10617cf2b; -[SCFeatureMicNotificationImpl _updateCallStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617cd6c(long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 auStack_178 [5];
  undefined8 auStack_150 [5];
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(param_1 + _DAT_112740f3c);
  if (lVar3 != 0) {
    func_0x00010bf289e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_112740f1c;
    *(undefined1 *)(param_1 + lVar6) = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    _objc_retain();
    lVar4 = lVar3;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar7 = *plStack_110;
      do {
        lVar8 = 0;
        do {
          if (*plStack_110 != lVar7) {
            _objc_enumerationMutation(lVar3);
          }
          uVar5 = *(ulong *)(lStack_118 + lVar8 * 8);
          func_0x00010bfd6ae0();
          if ((uVar5 & 1) == 0) {
            *(undefined1 *)(param_1 + lVar6) = 1;
            goto LAB_10617ce5c;
          }
          lVar8 = lVar8 + 1;
        } while (lVar4 != lVar8);
        lVar4 = lVar3;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
LAB_10617ce5c:
    _objc_release(lVar3);
    _objc_initWeak(auStack_128,param_1);
    pcVar1 = (code *)0x10617cf58;
    puVar2 = auStack_178;
    if (*(char *)(param_1 + lVar6) == '\0') {
      pcVar1 = FUN_10617cf2c;
      puVar2 = auStack_150;
    }
    *puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puVar2[1] = 0xc2000000;
    puVar2[2] = pcVar1;
    puVar2[3] = &UNK_1108434b0;
    _objc_copyWeak(puVar2 + 4,auStack_128);
    func_0x000100162d98("APPSTORE",puVar2);
    _objc_destroyWeak(puVar2 + 4);
    _objc_destroyWeak(auStack_128);
    _objc_release(lVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar3 = lVar3 + 0x20;
  _objc_loadWeakRetained(lVar3);
  func_0x00010be35a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10617cf2c; end: 10617cf83;  */

void FUN_10617cf2c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be35a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10617cf84; end: 10617cf87; -[SCFeatureMicNotificationImpl callObserver:callChanged:] */

void FUN_10617cf84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed4990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCallStatus_112592c08);
  return;
}



/* Entry: 10617cf88; end: 10617d1bb; -[SCFeatureMicNotificationImpl showMicrophonePermissionNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617cf88(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112740f44;
  if (*(long *)(param_1 + lVar6) != 0) {
    func_0x00010be02dc0(param_1);
  }
  lVar1 = param_1;
  func_0x00010beb6280();
  if ((int)lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b1370;
    func_0x00010c25d500(PTR_PTR_1126b1370,param_2,0x53);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110dad058);
    _objc_release(puVar3);
    func_0x00010703cff8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110dad0b8);
    _objc_release(puVar3);
    func_0x00010703d010();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110dad858);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b0c40;
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar3,param_2,0x19c,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110f9eaf8);
    _objc_release(puVar3);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126b1370;
    _objc_alloc();
    puVar4 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010c030320(puVar3,param_2,puVar4,2);
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar4);
    puVar3 = PTR_s__dismissMicrophoneNotification_11255e510;
    func_0x00010bf2eba0(PTR__OBJC_CLASS___NSObject_1126b1300,param_2,param_1,
                        PTR_s__dismissMicrophoneNotification_11255e510,0);
    func_0x00010befa0a0(*(undefined8 *)(param_1 + _DAT_112740f0c),param_2,
                        *(undefined8 *)(param_1 + lVar6));
    uVar5 = *(undefined8 *)(param_1 + _DAT_112740f28);
    func_0x00010c067f00(uVar5,param_2,&PTR____CFConstantStringClassReference_110e43298,100,0);
    func_0x00010c0f8f40((double)(int)uVar5,param_1,param_2,puVar3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10617d1bc; end: 10617d207; -[SCFeatureMicNotificationImpl delayDismissMicrophoneNotification] */

void FUN_10617d1bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_s__dismissMicrophoneNotification_11255e510;
  func_0x00010bf2eba0(PTR__OBJC_CLASS___NSObject_1126b1300,param_2,param_1,
                      PTR_s__dismissMicrophoneNotification_11255e510,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0f8f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4014000000000000,param_1,PTR_s_performSelector_withObject_after_11261bdf0,puVar1,0);
  return;
}



/* Entry: 10617d208; end: 10617d237; -[SCFeatureMicNotificationImpl _shouldShowMicNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10617d208(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112740f10);
  func_0x00010c1238e0(lVar1);
  return lVar1 == 0x64656e79;
}



/* Entry: 10617d238; end: 10617d287; -[SCFeatureMicNotificationImpl _dismissMicrophoneNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617d238(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740f44;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c12d300(*(undefined8 *)(param_1 + _DAT_112740f0c));
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10617d288; end: 10617d433; -[SCFeatureMicNotificationImpl _setupMicInUseWarningObserverIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617d288(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126b6ae8;
  func_0x00010c22ba80(PTR_PTR_1126b6ae8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c82e8;
  puVar4 = PTR_PTR_1126ae960;
  puVar2 = PTR_PTR_1126c8668;
  func_0x00010bf281a0(PTR_PTR_1126c8668);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cd1e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf28e80(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae970;
  func_0x00010bfe2ec0(PTR_PTR_1126ae970);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112740f2c);
  func_0x00010c11de00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c2a1620(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 10617d434; end: 10617d467;  */

void FUN_10617d434(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010beab4e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10617d468; end: 10617d61b; -[SCFeatureMicNotificationImpl _updateCallStatusIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617d468(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = param_1;
  func_0x00010beb6260();
  if ((int)lVar1 != 0) {
    _objc_initWeak(auStack_58,param_1);
    puVar2 = PTR_PTR_1126b6ae8;
    func_0x00010c22ba80(PTR_PTR_1126b6ae8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c82e8;
    puVar5 = PTR_PTR_1126ae960;
    puVar3 = PTR_PTR_1126c8668;
    func_0x00010bf28340(PTR_PTR_1126c8668);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cd1e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf28e80(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126ae970;
    func_0x00010bfe2ec0(PTR_PTR_1126ae970);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + _DAT_112740f2c);
    func_0x00010c11de00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c2a1620(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 10617d61c; end: 10617d64f;  */

void FUN_10617d61c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bed4980(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10617d650; end: 10617d653; -[SCFeatureMicNotificationImpl _appDidBecomeActive:] */

void FUN_10617d650(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed49b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCallStatusIfNeeded_112592c10);
  return;
}



/* Entry: 10617d654; end: 10617d67f; -[SCFeatureMicNotificationImpl _appDidEnterBackground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617d654(long param_1)

{
  func_0x00010be35a20();
  *(undefined1 *)(param_1 + _DAT_112740f24) = 0;
  return;
}



/* Entry: 10617d680; end: 10617d787; -[SCFeatureMicNotificationImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617d680(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112740f2c,0);
  _objc_storeStrong(param_1 + _DAT_112740f28,0);
  _objc_storeStrong(param_1 + _DAT_112740f34,0);
  _objc_storeStrong(param_1 + _DAT_112740f38,0);
  _objc_storeStrong(param_1 + _DAT_112740f30,0);
  _objc_storeStrong(param_1 + _DAT_112740f3c,0);
  _objc_storeStrong(param_1 + _DAT_112740f40,0);
  _objc_destroyWeak(param_1 + _DAT_112740f18);
  _objc_storeStrong(param_1 + _DAT_112740f44,0);
  _objc_storeStrong(param_1 + _DAT_112740f14,0);
  _objc_storeStrong(param_1 + _DAT_112740f10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112740f0c,0);
  return;
}



/* Entry: 10617d788; end: 10617d78f;  */

void FUN_10617d788(void)

{
  return;
}



/* Entry: 10617d790; end: 10617d7bb;  */

void FUN_10617d790(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee9480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10617d7bc; end: 10617d7ff; -[SCFeatureNightModeImpl dealloc] */

void FUN_10617d7bc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c256420();
  puStack_28 = PTR_PTR_1126eff38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10617d800; end: 10617d89b; -[SCFeatureNightModeImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617d800(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + _DAT_112740f68;
  _objc_loadWeakRetained(lVar1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112740f58);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112740f74);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f8a0(param_1,param_2,lVar1,uVar4,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10617d89c; end: 10617da5f; -[SCFeatureNightModeImpl usageMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617d89c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010c0b7e80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be34260();
  _objc_release(lVar1);
  uVar7 = 1;
  if ((int)lVar2 != 0) {
    uVar7 = 2;
  }
  lVar1 = param_1 + _DAT_112740f64;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c071800();
  _objc_release(lVar1);
  uVar4 = 3;
  if ((int)lVar2 == 0) {
    uVar4 = uVar7;
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb00d10();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_1;
  func_0x00010c0b7e80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf70d80();
  func_0x00010be40ae0(param_1);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar1);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  puVar3 = puVar3 + 0x20;
  _objc_loadWeakRetained();
  if (puVar3 != (undefined *)0x0) {
    uVar7 = param_2;
    func_0x00010c273a00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07d660();
    func_0x00010be63d60(puVar3);
    _objc_release(uVar7);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10617da60; end: 10617dad7;  */

void FUN_10617da60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010c273a00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07d660();
    func_0x00010be63d60(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10617dad8; end: 10617db2f;  */

void FUN_10617dad8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf2c820(param_1);
    func_0x00010c200140(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10617db30; end: 10617db6f; -[SCFeatureNightModeImpl isCameraModeActivated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10617db30(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112740f64;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c071800();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 10617db70; end: 10617db77; -[SCFeatureNightModeImpl cameraModeType] */

undefined8 FUN_10617db70(void)

{
  return 3;
}



/* Entry: 10617db78; end: 10617dbd7; -[SCFeatureNightModeImpl forwardCameraOverlayTapGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617db78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (((*(byte *)(param_1 + _DAT_112740f94) & 1) == 0) &&
     (lVar1 = param_1,
     func_0x00010beb6b60(param_1,param_2,*(undefined8 *)(param_1 + _DAT_112740f58)), (int)lVar1 != 0
     )) {
    func_0x00010bea5e80(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10617dbd8; end: 10617dc17; -[SCFeatureNightModeImpl _setNightModeSelectedForRingFlash:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617dbd8(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740f98;
  uVar1 = *(undefined1 *)(param_1 + lVar2);
  *(undefined1 *)(param_1 + lVar2) = 1;
  func_0x00010be82e00();
  *(undefined1 *)(param_1 + lVar2) = uVar1;
  return;
}



/* Entry: 10617dc18; end: 10617dc53; -[SCFeatureNightModeImpl setCanEnable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617dc18(long param_1,undefined8 param_2,uint param_3)

{
  if ((*(byte *)(param_1 + _DAT_112740f4c) != param_3) &&
     (*(char *)(param_1 + _DAT_112740f4c) = (char)param_3,
     (*(byte *)(param_1 + _DAT_112740f60) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bedc2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__updateNightModeButtonWithState__112594a58,
               *(undefined8 *)(param_1 + _DAT_112740f58));
    return;
  }
  return;
}



/* Entry: 10617dc54; end: 10617dc57; -[SCFeatureNightModeImpl _appDidEnterBackground] */

void FUN_10617dc54(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be92150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reset_1125821f0);
  return;
}



/* Entry: 10617dc58; end: 10617dc5b; -[SCFeatureNightModeImpl _viewDidDisappear] */

void FUN_10617dc58(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stopObservingCapturerStateUpdate_112673330);
  return;
}



/* Entry: 10617dc5c; end: 10617dd43; -[SCFeatureNightModeImpl startObservingManagedDeviceCapacityAnalyzerEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617dc5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112740f9c;
  if (*(long *)(param_1 + lVar3) == 0) {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    uVar1 = param_3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = uVar1;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10617dd44; end: 10617ddff;  */

void FUN_10617dd44(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd4e0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10617de00; end: 10617de07;  */

void FUN_10617de00(void)

{
  return;
}



/* Entry: 10617de08; end: 10617ded3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617de08(float param_1,long param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 == 0) goto LAB_10617deb8;
  dVar2 = (double)param_1;
  lVar1 = (long)_DAT_112740fa0;
  if ((param_1 <= 0.0) || (0.0 < *(double *)(param_2 + lVar1))) {
    if (0.0 < param_1) {
      *(double *)(param_2 + lVar1) = dVar2;
      goto LAB_10617deb8;
    }
    dVar3 = *(double *)(param_2 + lVar1);
    *(double *)(param_2 + lVar1) = dVar2;
    if (dVar3 <= 0.0) goto LAB_10617deb8;
  }
  else {
    *(double *)(param_2 + lVar1) = dVar2;
  }
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10617ded4;
  puStack_40 = &UNK_110842e18;
  lStack_38 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_58);
LAB_10617deb8:
  _objc_release(param_2);
  return;
}



/* Entry: 10617ded4; end: 10617deeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617ded4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfc990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(long *)(param_1 + 0x20),PTR_s__didChangeLowLightCondition__11255cc00,
             *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112740f58));
  return;
}



/* Entry: 10617deec; end: 10617df1f; -[SCFeatureNightModeImpl stopObservingManagedDeviceCapacityAnalyzerEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617deec(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740f9c;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10617df20; end: 10617e1cb; -[SCFeatureNightModeImpl _nightModeButtonDidChangeSelection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617df20(ulong param_1,undefined8 param_2,undefined1 param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_c8 [8];
  undefined1 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  *(undefined1 *)(param_1 + (long)_DAT_112740fa4) = 0;
  *(undefined1 *)(param_1 + (long)_DAT_112740f94) = 1;
  lVar5 = (long)_DAT_112740f84;
  lVar6 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c21e900();
  _objc_release(lVar6);
  lVar5 = param_1 + lVar5;
  _objc_loadWeakRetained();
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,*(undefined8 *)(param_1 + (long)_DAT_112740f90));
  _objc_initWeak(auStack_80,param_1);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10617e1cc;
  puStack_a0 = &UNK_11086afa0;
  _objc_retain(uVar1);
  uStack_98 = uVar1;
  _objc_copyWeak(auStack_90,auStack_80);
  _objc_copyWeak(auStack_88,auStack_78);
  ppuVar2 = &puStack_b8;
  _objc_retainBlock(ppuVar2);
  lVar6 = param_1 + (long)_DAT_112740f64;
  _objc_loadWeakRetained(lVar6);
  _objc_copyWeak(auStack_c8,auStack_80);
  _objc_retain(lVar5);
  uStack_c0 = param_3;
  func_0x00010bf90fe0(lVar6);
  _objc_release(lVar6);
  if ((*(char *)(param_1 + (long)_DAT_112740f98) != '\x01') ||
     (uVar3 = param_1, func_0x00010beb27e0(), (uVar3 & 1) == 0)) {
    *(long *)(param_1 + (long)_DAT_112740f88) = *(long *)(param_1 + (long)_DAT_112740f88) + 1;
    lVar6 = (long)_DAT_112740f48;
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010bfa1820(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2b760();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010bfa1820(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2b740();
    _objc_release(uVar4);
  }
  _objc_release(lVar5);
  _objc_destroyWeak(auStack_c8);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_90);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar1);
  _objc_release(lVar5);
  return;
}



/* Entry: 10617e1cc; end: 10617e227;  */

void FUN_10617e1cc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010c1b4280();
    _objc_release(param_1);
  }
  else {
    func_0x00010be82e00(lVar1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10617e228; end: 10617e2a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617e228(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c21e900(*(undefined8 *)(param_1 + 0x20),param_2,1);
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112740f70);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 0x30)
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10617e2a8; end: 10617e2db; -[SCFeatureNightModeImpl _isAutoEnableFlashExperimentActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10617e2a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c8670;
  func_0x00010c27b800(PTR_PTR_1126c8670,param_2,*(undefined8 *)(param_1 + _DAT_112740f7c));
  return puVar1 != (undefined *)0x0;
}


