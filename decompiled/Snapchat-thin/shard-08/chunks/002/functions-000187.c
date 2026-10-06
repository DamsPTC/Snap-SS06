/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105f4b808; end: 105f4b873; -[SCMapViewportMetadataProviderUpdate .cxx_destruct] */

void FUN_105f4b808(long param_1)

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



/* Entry: 105f4b874; end: 105f4b8eb; -[SCMapViewportLoggerBlockObserver initWithCompletion:] */

undefined1 * FUN_105f4b874(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ee238;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f4b8ec; end: 105f4b8fb; -[SCMapViewportLoggerBlockObserver onBasemapFeaturesCaptured:] */

void FUN_105f4b8ec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000105f4b8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3);
  return;
}



/* Entry: 105f4b8fc; end: 105f4b907; -[SCMapViewportLoggerBlockObserver .cxx_destruct] */

void FUN_105f4b8fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f4b908; end: 105f4bd13; -[SCMapboxInstanceView initWithFrame:maxMapZoomLevel:nativeMapSDK:configProvider:viewportMetadataProvider:mapUserPreferences:tabPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105f4b908(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uStack_a0;
  undefined *puStack_98;
  
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puVar1 = PTR_PTR_1126bc310;
  func_0x00010c277640();
  _objc_retainAutoreleasedReturnValue();
  dVar9 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  if (64.0 <= dVar9) {
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
  }
  puStack_98 = PTR_PTR_1126ee240;
  puVar2 = &uStack_a0;
  uStack_a0 = param_6;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,param_5,puVar2,
                      PTR_s_initWithFrame_maxMapZoomLevel_na_1125e2c00,param_8,param_9);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010c18b5e0(puVar2);
    *(undefined8 *)((long)puVar2 + (long)_DAT_11273af08) = param_12;
    puVar3 = PTR_PTR_1126c6478;
    _objc_alloc_init();
    uVar6 = *(undefined8 *)((long)puVar2 + (long)_DAT_11273af0c);
    *(undefined **)((long)puVar2 + (long)_DAT_11273af0c) = puVar3;
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126c6480;
    _objc_alloc_init();
    uVar6 = *(undefined8 *)((long)puVar2 + (long)_DAT_11273af10);
    *(undefined **)((long)puVar2 + (long)_DAT_11273af10) = puVar3;
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126c6488;
    _objc_alloc();
    func_0x00010c0289c0();
    uVar6 = *(undefined8 *)((long)puVar2 + (long)_DAT_11273af14);
    *(undefined **)((long)puVar2 + (long)_DAT_11273af14) = puVar3;
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126c6490;
    _objc_alloc();
    func_0x00010c0289c0();
    uVar6 = *(undefined8 *)((long)puVar2 + (long)_DAT_11273af18);
    *(undefined **)((long)puVar2 + (long)_DAT_11273af18) = puVar3;
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126c6498;
    _objc_alloc();
    func_0x00010c0289e0();
    lVar7 = (long)_DAT_11273af1c;
    _objc_retain();
    uVar6 = *(undefined8 *)((long)puVar2 + lVar7);
    *(undefined **)((long)puVar2 + lVar7) = puVar3;
    _objc_release(uVar6);
    lVar7 = (long)_DAT_11273af20;
    _objc_retain(puVar3);
    uVar6 = *(undefined8 *)((long)puVar2 + lVar7);
    *(undefined **)((long)puVar2 + lVar7) = puVar3;
    _objc_release(uVar6);
    lVar7 = (long)_DAT_11273af24;
    _objc_retain(puVar3);
    uVar6 = *(undefined8 *)((long)puVar2 + lVar7);
    *(undefined **)((long)puVar2 + lVar7) = puVar3;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)((long)puVar2 + (long)_DAT_11273af28);
    *(undefined **)((long)puVar2 + (long)_DAT_11273af28) = puVar3;
    _objc_retain(puVar3);
    _objc_release(uVar6);
    puVar4 = PTR_PTR_1126c64a0;
    _objc_alloc();
    puVar5 = puVar2;
    func_0x00010c0b9c00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c028500();
    uVar6 = *(undefined8 *)((long)puVar2 + (long)_DAT_11273af2c);
    *(undefined **)((long)puVar2 + (long)_DAT_11273af2c) = puVar4;
    _objc_release(uVar6);
    _objc_release(puVar5);
    puVar4 = PTR_PTR_1126c64a8;
    _objc_alloc();
    func_0x00010c0289c0();
    lVar7 = (long)_DAT_11273af30;
    uVar6 = *(undefined8 *)((long)puVar2 + lVar7);
    *(undefined **)((long)puVar2 + lVar7) = puVar4;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)((long)puVar2 + lVar7);
    func_0x00010c0f36c0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(uVar6);
    puVar4 = PTR_PTR_1126c64b0;
    _objc_alloc();
    func_0x00010c028a00();
    lVar7 = (long)_DAT_11273af34;
    uVar6 = *(undefined8 *)((long)puVar2 + lVar7);
    *(undefined **)((long)puVar2 + lVar7) = puVar4;
    _objc_release(uVar6);
    uVar8 = *(undefined8 *)((long)puVar2 + lVar7);
    lVar7 = (long)_DAT_11273af38;
    _objc_retain(uVar8);
    uVar6 = *(undefined8 *)((long)puVar2 + lVar7);
    *(undefined8 *)((long)puVar2 + lVar7) = uVar8;
    _objc_release(uVar6);
    func_0x00010c214800(*(undefined8 *)((long)puVar2 + lVar7));
    puVar4 = PTR_PTR_1126c64b8;
    _objc_alloc();
    puVar5 = puVar2;
    func_0x00010c0b9c00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c028560();
    uVar6 = *(undefined8 *)((long)puVar2 + (long)_DAT_11273af3c);
    *(undefined **)((long)puVar2 + (long)_DAT_11273af3c) = puVar4;
    _objc_release(uVar6);
    _objc_release(puVar5);
    puVar4 = PTR_PTR_1126c64c0;
    _objc_alloc_init();
    uVar6 = *(undefined8 *)((long)puVar2 + (long)_DAT_11273af40);
    *(undefined **)((long)puVar2 + (long)_DAT_11273af40) = puVar4;
    _objc_release(uVar6);
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  return puVar2;
}



/* Entry: 105f4bd14; end: 105f4bd17; -[SCMapboxInstanceView sdkSession] */

void FUN_105f4bd14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b9c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_mapSdkSession_11260c118);
  return;
}



/* Entry: 105f4bd18; end: 105f4bd5b; -[SCMapboxInstanceView cameraManager] */

void FUN_105f4bd18(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0b9c00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfc3540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f4bd5c; end: 105f4bd6f; -[SCMapboxInstanceView setTargetFrameRate:] */

void FUN_105f4bd5c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  param_3 = param_3 & ((long)param_3 >> 0x3f ^ 0xffffffffffffffffU);
  if (0x77 < (long)param_3) {
    param_3 = 0x78;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1dfff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setPreferredFramesPerSecond__112655a20,param_3);
  return;
}



/* Entry: 105f4bd70; end: 105f4c063; -[SCMapboxInstanceView initializeSessionWithObserver:viewportInfoObserver:isEmbedded:backgroundLoadingColor:initialLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f4bd70(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,double *param_8,
                  long param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double *pdVar4;
  undefined8 uVar5;
  
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126bc310;
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c277640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_105f4d5fc(*(undefined8 *)(param_3 + _DAT_11273af0c),1);
  puVar2 = PTR_PTR_1126b1dd0;
  _objc_alloc_init(PTR_PTR_1126b1dd0);
  puVar3 = PTR_PTR_1126b1dd8;
  _objc_alloc_init(PTR_PTR_1126b1dd8);
  func_0x00010c1c21c0(puVar2);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c0b9280(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21acc0();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c0b9280(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cafa0();
  _objc_release(puVar3);
  func_0x00010c167220(puVar2);
  puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf12300(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c294b00();
  func_0x00010c21faa0(puVar2);
  _objc_release(puVar3);
  if (param_8 != (double *)0x0) {
    puVar3 = PTR_PTR_1126c64c8;
    _objc_alloc_init(PTR_PTR_1126c64c8);
    pdVar4 = param_8;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    _CGColorGetComponents();
    func_0x00010c1e6dc0((float)*pdVar4,puVar3);
    func_0x00010c1a18e0((float)pdVar4[1],puVar3);
    func_0x00010c16e080((float)pdVar4[2],puVar3);
    param_1 = (ulong)(uint)(float)pdVar4[3];
    func_0x00010c160800(param_1,puVar3);
    func_0x00010c1c1f40(puVar2);
    _objc_release(puVar3);
  }
  if (param_9 != 0) {
    puVar3 = PTR_PTR_1126bf1b8;
    _objc_alloc_init(PTR_PTR_1126bf1b8);
    func_0x00010c18cb00(puVar2);
    _objc_release(puVar3);
    func_0x00010bf51c80(param_9);
    puVar3 = puVar2;
    func_0x00010bf709e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b9120(param_1);
    _objc_release(puVar3);
    func_0x00010bf51c80(param_9);
    puVar3 = puVar2;
    func_0x00010bf709e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1be5e0(param_2);
    _objc_release(puVar3);
  }
  uVar5 = *(undefined8 *)(param_3 + _DAT_11273af40);
  _objc_retain(uVar5);
  func_0x00010c0b9c00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c064740();
  _objc_release(uVar5);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 105f4c064; end: 105f4c12f; -[SCMapboxInstanceView gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_105f4c064(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5,
             long param_6)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  lVar2 = *(long *)(param_4 + _DAT_11273af30);
  func_0x00010c0f36c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_6 == lVar2) {
    func_0x00010c09ef00(param_6,param_5,param_4);
    if (*(long *)(param_4 + _DAT_11273af08) == 1) {
      func_0x00010bf20c00(param_4);
      if (param_3 - param_1 < 40.0) goto LAB_105f4c128;
    }
    else {
      bVar1 = false;
      if ((*(long *)(param_4 + _DAT_11273af08) == 2) && (bVar1 = false, !NAN(param_1))) {
        bVar1 = param_1 < 40.0;
      }
      if (bVar1) {
LAB_105f4c128:
        uVar3 = 0;
        goto LAB_105f4c0ec;
      }
    }
  }
  uVar3 = 1;
LAB_105f4c0ec:
  _objc_release(param_6);
  return uVar3;
}



/* Entry: 105f4c130; end: 105f4c13f; -[SCMapboxInstanceView mapView:regionWillChangeAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f4c130(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ba570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273af10),
             PTR_s_mapView_regionWillChangeAnimated_11260c370);
  return;
}



/* Entry: 105f4c140; end: 105f4c14f; -[SCMapboxInstanceView mapViewRegionIsChanging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f4c140(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ba970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273af10),PTR_s_mapViewRegionIsChanging__11260c470);
  return;
}



/* Entry: 105f4c150; end: 105f4c15f; -[SCMapboxInstanceView mapView:regionDidChangeAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f4c150(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ba510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273af10),
             PTR_s_mapView_regionDidChangeAnimated__11260c358);
  return;
}



/* Entry: 105f4c160; end: 105f4c2ab; -[SCMapboxInstanceView mapView:shouldChangeFromCamera:toCamera:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_105f4c160(double param_1,double param_2,long param_3,undefined8 param_4,long param_5,
             undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  lVar2 = param_5;
  func_0x00010c0f36c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c252440();
  _objc_release(lVar2);
  if (lVar4 == 2) {
    *(undefined1 *)(param_3 + _DAT_11273af44) = 1;
  }
  lVar2 = param_5;
  func_0x00010c0f36c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c252440();
  if (lVar4 == 3) {
    lVar4 = (long)_DAT_11273af44;
    cVar1 = *(char *)(param_3 + lVar4);
    _objc_release(lVar2);
    if (cVar1 == '\x01') {
      *(undefined1 *)(param_3 + lVar4) = 0;
      lVar2 = param_5;
      func_0x00010c0f36c0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297a00();
      _objc_release(lVar2);
      if (param_2 <= param_1) {
        param_2 = param_1;
      }
      if (ABS(param_2) < 1500.0) {
        uVar3 = *(undefined8 *)(param_3 + _DAT_11273af10);
        func_0x00010bf34640(param_7);
        func_0x00010c0ba620(uVar3,param_4,param_5);
      }
    }
  }
  else {
    _objc_release(lVar2);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  return 1;
}



/* Entry: 105f4c2ac; end: 105f4c31f; -[SCMapboxInstanceView mapViewWillStartLoadingMap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f4c2ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc310;
  _objc_retain(param_3);
  func_0x00010c277640(puVar1,param_2,&PTR____CFConstantStringClassReference_110e32df8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0baa00(*(undefined8 *)(param_1 + _DAT_11273af10),param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f4c320; end: 105f4c393; -[SCMapboxInstanceView mapViewDidFinishLoadingMap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f4c320(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc310;
  _objc_retain(param_3);
  func_0x00010c277640(puVar1,param_2,&PTR____CFConstantStringClassReference_110e32e18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ba780(*(undefined8 *)(param_1 + _DAT_11273af10),param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f4c394; end: 105f4c41f; -[SCMapboxInstanceView mapViewDidFailLoadingMap:withError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f4c394(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc310;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c277640(puVar1,param_2,&PTR____CFConstantStringClassReference_110e32e38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ba720(*(undefined8 *)(param_1 + _DAT_11273af10),param_2,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f4c420; end: 105f4c42f; -[SCMapboxInstanceView mapViewDidFinishRenderingFrame:fullyRendered:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f4c420(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ba7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273af10),
             PTR_s_mapViewDidFinishRenderingFrame_f_11260c408);
  return;
}



/* Entry: 105f4c430; end: 105f4c4bb; -[SCMapboxInstanceView mapView:didFinishLoadingStyleWithName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f4c430(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc310;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c277640(puVar1,param_2,&PTR____CFConstantStringClassReference_110e32e58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ba4c0(*(undefined8 *)(param_1 + _DAT_11273af10),param_2,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f4c4bc; end: 105f4c4cb; -[SCMapboxInstanceView mapView:didChangeUserTrackingMode:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f4c4bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ba490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273af10),
             PTR_s_mapView_didChangeUserTrackingMod_11260c338);
  return;
}



/* Entry: 105f4c4cc; end: 105f4c5ff; -[SCMapboxInstanceView _refreshViewportFeaturesAccessibilityElements] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f4c4cc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010c0b9c00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfcc2c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_11273af48) + 1;
    *(long *)(param_1 + _DAT_11273af48) = lVar1;
    _objc_initWeak(auStack_38,param_1);
    puVar3 = PTR_PTR_1126c64d0;
    _objc_alloc(PTR_PTR_1126c64d0);
    _objc_copyWeak(auStack_48,auStack_38);
    lStack_40 = lVar1;
    func_0x00010c0003e0(puVar3);
    func_0x00010bfc2e20(lVar2);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 105f4c600; end: 105f4c6c3;  */

void FUN_105f4c600(long param_1,undefined8 param_2)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105f4c6c4;
  puStack_50 = &UNK_110842a68;
  _objc_copyWeak(auStack_40,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 105f4c6c4; end: 105f4c6fb;  */

void FUN_105f4c6c4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcee00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f4c6fc; end: 105f4cab3; -[SCMapboxInstanceView _applyViewportFeatures:forRequestID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f4c6fc(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined *param_7,long param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined *puStack_230;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [128];
  undefined1 auStack_120 [128];
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_7;
  _objc_retain(param_7);
  if (param_8 == *(long *)(param_5 + _DAT_11273af48)) {
    lVar9 = (long)_DAT_11273af4c;
    if (*(long *)(param_5 + lVar9) == 0) {
      puVar8 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc();
      func_0x00010bf20c00(param_5);
      func_0x00010c013de0();
      uVar6 = *(undefined8 *)(param_5 + lVar9);
      *(undefined **)(param_5 + lVar9) = puVar8;
      _objc_release(uVar6);
      func_0x00010c16d4a0(*(undefined8 *)(param_5 + lVar9),param_6,0x12);
      func_0x00010c21e900(*(undefined8 *)(param_5 + lVar9),param_6,0);
      func_0x00010befbb60(param_5,param_6,*(undefined8 *)(param_5 + lVar9));
    }
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0.0;
    lStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    plStack_1d0 = (long *)0x0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    _objc_retain(param_7);
    puStack_230 = param_7;
    func_0x00010bf52a60(param_7,param_6,&uStack_1e0,auStack_120,0x10);
    if (puStack_230 != (undefined *)0x0) {
      lVar7 = *plStack_1d0;
      do {
        puVar8 = (undefined *)0x0;
        do {
          dVar13 = param_1;
          if (*plStack_1d0 != lVar7) {
            _objc_enumerationMutation(param_7);
            dVar13 = param_1;
          }
          lVar12 = *(long *)(lStack_1d8 + (long)puVar8 * 8);
          lVar2 = lVar12;
          func_0x00010bf20ae0();
          _objc_retainAutoreleasedReturnValue();
          param_1 = dVar13;
          if (lVar2 != 0) {
            func_0x00010c08e360(lVar2);
            dVar14 = dVar13;
            func_0x00010c274140(lVar2);
            dVar18 = dVar14;
            func_0x00010c140820(lVar2);
            dVar15 = dVar18;
            func_0x00010c08e360(lVar2);
            dVar17 = dVar15;
            func_0x00010bf1fec0(lVar2);
            dVar16 = dVar17;
            func_0x00010c274140(lVar2);
            param_1 = 0.0;
            lStack_218 = 0;
            uStack_220 = 0;
            uStack_208 = 0;
            plStack_210 = (long *)0x0;
            uStack_1f8 = 0;
            uStack_200 = 0;
            uStack_1e8 = 0;
            uStack_1f0 = 0;
            func_0x00010bfa1820(lVar12);
            _objc_retainAutoreleasedReturnValue();
            lVar3 = param_5;
            func_0x00010bdc3f40(param_5,param_6,lVar12);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar12);
            lVar12 = lVar3;
            func_0x00010bf52a60(lVar3,param_6,&uStack_220,auStack_1a0,0x10);
            if (lVar12 != 0) {
              dVar17 = dVar17 - dVar16;
              dVar18 = dVar18 - dVar15;
              lVar10 = *plStack_210;
              do {
                lVar11 = 0;
                do {
                  if (*plStack_210 != lVar10) {
                    _objc_enumerationMutation(lVar3);
                  }
                  uVar6 = *(undefined8 *)(lStack_218 + lVar11 * 8);
                  lVar4 = param_5;
                  func_0x00010bee9fa0(dVar13,dVar14,dVar18,dVar17,param_5,param_6,uVar6);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar1,param_6,lVar4);
                  _objc_release(lVar4);
                  ppuVar5 = &PTR____CFConstantStringClassReference_110e32d98;
                  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e32d98,param_6,uVar6
                                     );
                  _objc_retainAutoreleasedReturnValue();
                  lVar4 = param_5;
                  param_1 = dVar13;
                  param_2 = dVar14;
                  param_3 = dVar18;
                  param_4 = dVar17;
                  func_0x00010bee9fa0(dVar13,dVar14,dVar18,dVar17,param_5,param_6,ppuVar5);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar1,param_6,lVar4);
                  _objc_release(lVar4);
                  _objc_release(ppuVar5);
                  lVar11 = lVar11 + 1;
                } while (lVar12 != lVar11);
                lVar12 = lVar3;
                func_0x00010bf52a60(lVar3,param_6,&uStack_220,auStack_1a0,0x10);
              } while (lVar12 != 0);
            }
            _objc_release(lVar3);
          }
          _objc_release(lVar2);
          puVar8 = puVar8 + 1;
        } while (puVar8 != puStack_230);
        puStack_230 = param_7;
        func_0x00010bf52a60(param_7,param_6,&uStack_1e0,auStack_120,0x10);
      } while (puStack_230 != (undefined *)0x0);
    }
    _objc_release(param_7);
    puVar8 = puVar1;
    func_0x00010c160ee0(*(undefined8 *)(param_5 + lVar9),param_6,puVar1);
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___UIAccessibilityElement_1126c64d8;
  _objc_retain(puVar8);
  _objc_alloc(puVar1);
  func_0x00010bfefd40();
  func_0x00010c160fc0();
  _objc_release(puVar8);
  func_0x00010c160f40(param_1,param_2,param_3,param_4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f4cab4; end: 105f4cb53; -[SCMapboxInstanceView _viewportFeatureAccessibilityElementWithIdentifier:frame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f4cab4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIAccessibilityElement_1126c64d8;
  _objc_retain(param_7);
  _objc_alloc(puVar1);
  func_0x00010bfefd40();
  func_0x00010c160fc0();
  _objc_release(param_7);
  func_0x00010c160f40(param_1,param_2,param_3,param_4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f4cb54; end: 105f4ce87; -[SCMapboxInstanceView _accessibilityIdentifiersForFeature:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f4cb54(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  func_0x00010c0ecd20(PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_3;
    func_0x00010bfe5ea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(lVar2);
  }
  lVar4 = param_3;
  func_0x00010c118b60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      _objc_release(lVar4);
      puVar9 = puVar1;
      func_0x00010bf09f00(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0ba850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_3 + _DAT_11273af10),PTR_s_mapViewDidReportMapReady__11260c428
                 ,param_3);
      return;
    }
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar4);
      }
      lVar13 = *(long *)(lVar12 * 8);
      lVar5 = lVar13;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c0720c0();
      if ((int)lVar6 == 0) {
LAB_105f4cdec:
        _objc_release(lVar5);
      }
      else {
        lVar6 = lVar13;
        func_0x00010c27e100();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar6;
        func_0x00010c2970a0();
        _objc_release(lVar6);
        _objc_release(lVar5);
        if ((int)lVar11 == 6) {
          func_0x00010c27e100();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar13;
          func_0x00010c09a320();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar6;
          func_0x00010c297380();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar6);
          _objc_release(lVar13);
          lVar6 = lVar5;
          func_0x00010bf52a60();
          lVar13 = lRam0000000000000000;
          while (lVar6 != 0) {
            lVar11 = 0;
            do {
              if (lRam0000000000000000 != lVar13) {
                _objc_enumerationMutation(lVar5);
              }
              lVar14 = *(long *)(lVar11 * 8);
              lVar7 = lVar14;
              func_0x00010c2970a0();
              if ((int)lVar7 == 2) {
                lVar7 = lVar14;
                func_0x00010c25d700();
                _objc_retainAutoreleasedReturnValue();
                lVar8 = lVar7;
                func_0x00010c08fa60();
                _objc_release(lVar7);
                if (lVar8 != 0) {
                  func_0x00010c25d700(lVar14);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar1);
                  _objc_release(lVar14);
                }
              }
              lVar11 = lVar11 + 1;
            } while (lVar6 != lVar11);
            lVar6 = lVar5;
            func_0x00010bf52a60();
          }
          goto LAB_105f4cdec;
        }
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 != lVar2);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105f4ce88; end: 105f4ce9b; -[SCMapboxInstanceView onMapReady] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f4ce88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ba850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273af10),PTR_s_mapViewDidReportMapReady__11260c428,
             param_1);
  return;
}



/* Entry: 105f4ce9c; end: 105f4ced7; -[SCMapboxInstanceView onInitialMapFriendsLoad:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f4ce9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273af10);
  func_0x00010bfde5c0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0ba4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,PTR_s_mapView_didReportMapFriendLoadWi_11260c350,param_1,param_3);
  return;
}



/* Entry: 105f4ced8; end: 105f4cee7; -[SCMapboxInstanceView mapConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105f4ced8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273af14);
}



/* Entry: 105f4cee8; end: 105f4cf27; -[SCMapboxInstanceView setMapConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f4cee8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273af14;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f4cf28; end: 105f4cf37; -[SCMapboxInstanceView mapViewport] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105f4cf28(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273af38);
}



/* Entry: 105f4cf38; end: 105f4cf77; -[SCMapboxInstanceView setMapViewport:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f4cf38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273af38;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f4cf78; end: 105f4cf87; -[SCMapboxInstanceView mapCustomGLRenderer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105f4cf78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273af18);
}



/* Entry: 105f4cf88; end: 105f4cfc7; -[SCMapboxInstanceView setMapCustomGLRenderer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f4cf88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273af18;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f4cfc8; end: 105f4cfd7; -[SCMapboxInstanceView mapLoadingState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105f4cfc8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273af1c);
}



/* Entry: 105f4cfd8; end: 105f4d017; -[SCMapboxInstanceView setMapLoadingState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f4cfd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273af1c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f4d018; end: 105f4d027; -[SCMapboxInstanceView mapReadyState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105f4d018(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273af20);
}



/* Entry: 105f4d028; end: 105f4d067; -[SCMapboxInstanceView setMapReadyState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f4d028(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273af20;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f4d068; end: 105f4d077; -[SCMapboxInstanceView mapFriendLoadState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105f4d068(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273af24);
}



/* Entry: 105f4d078; end: 105f4d0b7; -[SCMapboxInstanceView setMapFriendLoadState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f4d078(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273af24;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f4d0b8; end: 105f4d0c7; -[SCMapboxInstanceView mapStyleLoadingState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105f4d0b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273af28);
}



/* Entry: 105f4d0c8; end: 105f4d107; -[SCMapboxInstanceView setMapStyleLoadingState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f4d0c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273af28;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f4d108; end: 105f4d117; -[SCMapboxInstanceView mapGestures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105f4d108(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273af30);
}



/* Entry: 105f4d118; end: 105f4d157; -[SCMapboxInstanceView setMapGestures:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f4d118(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273af30;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f4d158; end: 105f4d167; -[SCMapboxInstanceView mapLoadTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105f4d158(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273af50);
}



/* Entry: 105f4d168; end: 105f4d1a7; -[SCMapboxInstanceView setMapLoadTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f4d168(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273af50;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f4d1a8; end: 105f4d1b7; -[SCMapboxInstanceView browsingContextManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105f4d1a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273af2c);
}



/* Entry: 105f4d1b8; end: 105f4d1f7; -[SCMapboxInstanceView setBrowsingContextManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f4d1b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273af2c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f4d1f8; end: 105f4d207; -[SCMapboxInstanceView appTriggerManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105f4d1f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273af40);
}



/* Entry: 105f4d208; end: 105f4d247; -[SCMapboxInstanceView setAppTriggerManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f4d208(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273af40;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f4d248; end: 105f4d257; -[SCMapboxInstanceView mapLayerManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105f4d248(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273af3c);
}



/* Entry: 105f4d258; end: 105f4d297; -[SCMapboxInstanceView setMapLayerManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f4d258(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273af3c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f4d298; end: 105f4d3b7; -[SCMapboxInstanceView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f4d298(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273af3c,0);
  _objc_storeStrong(param_1 + _DAT_11273af40,0);
  _objc_storeStrong(param_1 + _DAT_11273af2c,0);
  _objc_storeStrong(param_1 + _DAT_11273af50,0);
  _objc_storeStrong(param_1 + _DAT_11273af30,0);
  _objc_storeStrong(param_1 + _DAT_11273af28,0);
  _objc_storeStrong(param_1 + _DAT_11273af24,0);
  _objc_storeStrong(param_1 + _DAT_11273af20,0);
  _objc_storeStrong(param_1 + _DAT_11273af1c,0);
  _objc_storeStrong(param_1 + _DAT_11273af18,0);
  _objc_storeStrong(param_1 + _DAT_11273af38,0);
  _objc_storeStrong(param_1 + _DAT_11273af14,0);
  _objc_storeStrong(param_1 + _DAT_11273af4c,0);
  _objc_storeStrong(param_1 + _DAT_11273af0c,0);
  _objc_storeStrong(param_1 + _DAT_11273af34,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273af10,0);
  return;
}



/* Entry: 105f4d3b8; end: 105f4d423; -[SCMapStyleNameS2RInfoProvider initWithMapView:] */

undefined1 * FUN_105f4d3b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ee248;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f4d424; end: 105f4d4f3; -[SCMapStyleNameS2RInfoProvider getMetaInfo] */

void FUN_105f4d424(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  param_1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1530a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfcae40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c25e140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e32e78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105f4d4f4; end: 105f4d513; -[SCMapStyleNameS2RInfoProvider .cxx_destruct] */

void FUN_105f4d4f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105f4d514; end: 105f4d587; -[SCGrapheneAppTriggersMetric2 init] */

undefined1 * FUN_105f4d514(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ee250;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105f4d588; end: 105f4d5fb; -[SCGrapheneMapSdkSessionMetric2 init] */

undefined1 * FUN_105f4d588(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ee258;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105f4d5fc; end: 105f4d673;  */

void FUN_105f4d5fc(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108fa9f8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105f4d674; end: 105f4d6e7; -[SCGrapheneMapAppTriggerGrapheneMetric2 init] */

undefined1 * FUN_105f4d674(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ee260;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105f4d6e8; end: 105f4d85b;  */

char * FUN_105f4d6e8(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  char *pcStack_1b0;
  undefined *puStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  undefined8 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108faa48,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  pcStack_88 = FUN_105f4d85c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  puVar7 = puVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar8 = *(long **)(pcVar2 + 8);
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
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pcVar4 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108faa98,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar7 = (undefined1 *)puVar6;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar7 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  puVar6 = &uStack_180;
  pcStack_108 = FUN_105f4d9d0;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar7;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar4);
  if (pcVar2 != (char *)0x0) {
    plVar8 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_160,pcVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108faae8,&uStack_180,puVar7);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar1 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  _objc_release(pcVar4);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar3 = &pcStack_1b0;
  pcStack_188 = FUN_105f4db44;
  pcStack_1a0 = pcVar1;
  pcStack_198 = pcVar4;
  ppuStack_190 = &ppuStack_110;
  _objc_retain(puVar5);
  puStack_1a8 = PTR_PTR_1126ee268;
  pcStack_1b0 = pcVar2;
  _objc_msgSendSuper2(&pcStack_1b0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    _objc_storeWeak((char *)((long)ppcVar3 + 8),puVar5);
  }
  _objc_release(puVar5);
  return (char *)ppcVar3;
}



/* Entry: 105f4d85c; end: 105f4d9cf;  */

char * FUN_105f4d85c(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  char *pcStack_130;
  undefined *puStack_128;
  char *pcStack_120;
  char *pcStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108faa98,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  pcStack_88 = FUN_105f4d9d0;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar8 = *(long **)(pcVar2 + 8);
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
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108faae8,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar7 = (undefined1 *)puVar6;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar7 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  ppcVar4 = &pcStack_130;
  pcStack_108 = FUN_105f4db44;
  pcStack_120 = pcVar2;
  pcStack_118 = pcVar1;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar7);
  puStack_128 = PTR_PTR_1126ee268;
  pcStack_130 = pcVar3;
  _objc_msgSendSuper2(&pcStack_130,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    _objc_storeWeak((char *)((long)ppcVar4 + 8),puVar7);
  }
  _objc_release(puVar7);
  return (char *)ppcVar4;
}



/* Entry: 105f4d9d0; end: 105f4db43;  */

char * FUN_105f4d9d0(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  char *pcStack_b0;
  undefined *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108faae8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar3 = &pcStack_b0;
  pcStack_88 = FUN_105f4db44;
  pcStack_a0 = pcVar1;
  pcStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  puStack_a8 = PTR_PTR_1126ee268;
  pcStack_b0 = pcVar2;
  _objc_msgSendSuper2(&pcStack_b0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    _objc_storeWeak((char *)((long)ppcVar3 + 8),puVar4);
  }
  _objc_release(puVar4);
  return (char *)ppcVar3;
}



/* Entry: 105f4db44; end: 105f4dbaf; -[SCMapSDKSessionS2RFeatureProvider initWithMapView:] */

undefined1 * FUN_105f4db44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ee268;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f4dbb0; end: 105f4dbe7; -[SCMapSDKSessionS2RFeatureProvider willDumpLogGivenProject:] */

long FUN_105f4dbb0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c06f880();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 105f4dbe8; end: 105f4dd67; -[SCMapSDKSessionS2RFeatureProvider provideLogContentAsync:] */

void FUN_105f4dbe8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = (undefined *)(param_1 + 8);
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  func_0x00010c06f880();
  _objc_release(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    lVar8 = 0;
    (**(code **)(param_3 + 0x10))(param_3,0);
  }
  else {
    lVar8 = param_3;
    func_0x00010bf51e00();
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar8;
    _objc_release(uVar9);
    puVar2 = (undefined *)(param_1 + 8);
    _objc_loadWeakRetained();
    puVar3 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c1530a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar4;
    func_0x00010bfcc2c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (puVar1 == (undefined *)0x0) {
      lVar8 = 0;
      (**(code **)(param_3 + 0x10))(param_3,0);
    }
    else {
      ppuStack_50 = &PTR____CFConstantStringClassReference_110e32758;
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_1;
      func_0x00010bfc2e20(puVar1);
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
  }
  lVar5 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_105f4dd68;
  puStack_80 = puVar2;
  puStack_78 = puVar1;
  lStack_70 = param_1;
  lStack_68 = param_3;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain(lVar8);
  lVar6 = *(long *)(lVar5 + 0x10);
  _objc_retainBlock();
  uVar9 = *(undefined8 *)(lVar5 + 0x10);
  *(undefined8 *)(lVar5 + 0x10) = 0;
  _objc_release(uVar9);
  if (lVar6 != 0) {
    lVar7 = lVar8;
    func_0x00010bf529e0();
    if (lVar7 == 0) {
      (**(code **)(lVar6 + 0x10))(lVar6,0,0);
    }
    else {
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_105f4de58;
      puStack_a0 = &UNK_11084a9e8;
      lStack_98 = lVar5;
      _objc_retain(lVar8);
      lStack_90 = lVar8;
      _objc_retain(lVar6);
      lStack_88 = lVar6;
      func_0x0001000d76cc("APPSTORE",&puStack_b8);
      _objc_release(lStack_88);
      _objc_release(lStack_90);
    }
  }
  _objc_release(lVar6);
  _objc_release(lVar8);
  return;
}



/* Entry: 105f4dd68; end: 105f4de57; -[SCMapSDKSessionS2RFeatureProvider onBasemapFeaturesCaptured:] */

void FUN_105f4dd68(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar2);
  if (lVar1 != 0) {
    lVar3 = param_3;
    func_0x00010bf529e0();
    if (lVar3 == 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,0,0);
    }
    else {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_105f4de58;
      puStack_50 = &UNK_11084a9e8;
      lStack_48 = param_1;
      _objc_retain(param_3);
      lStack_40 = param_3;
      _objc_retain(lVar1);
      lStack_38 = lVar1;
      func_0x0001000d76cc("APPSTORE",&puStack_68);
      _objc_release(lStack_38);
      _objc_release(lStack_40);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105f4de58; end: 105f4dea7;  */

void FUN_105f4de58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bde9100(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),uVar1,&PTR____CFConstantStringClassReference_110e32ed8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f4dea8; end: 105f4e0d7; -[SCMapSDKSessionS2RFeatureProvider _convertFeaturesToGeoJSON:] */

void FUN_105f4dea8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined *param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined ***pppuVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  undefined ***pppuVar16;
  undefined **ppuVar17;
  undefined *unaff_x25;
  long lVar18;
  undefined *unaff_x26;
  undefined **unaff_x27;
  undefined *unaff_x28;
  long lVar19;
  undefined8 uVar20;
  undefined8 uStack_490;
  long lStack_488;
  long *plStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined **ppuStack_450;
  undefined **ppuStack_448;
  undefined **ppuStack_440;
  undefined **ppuStack_438;
  undefined *puStack_430;
  undefined *puStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined **ppuStack_410;
  undefined **ppuStack_408;
  undefined **ppuStack_400;
  undefined *puStack_3f8;
  undefined1 auStack_3f0 [128];
  long lStack_370;
  undefined *puStack_360;
  undefined **ppuStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined ***pppuStack_340;
  undefined ***pppuStack_338;
  undefined ***pppuStack_330;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  undefined ***pppuStack_318;
  undefined1 **ppuStack_310;
  code *pcStack_308;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined ***pppuStack_270;
  undefined ***pppuStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined ***pppuStack_200;
  undefined *puStack_1f8;
  long lStack_1f0;
  undefined1 *puStack_170;
  code *pcStack_168;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar2 = param_7;
  func_0x00010bf529e0(param_7);
  func_0x00010bf0a0e0(puVar3,param_6,puVar2 + 1);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_5;
  func_0x00010beea040();
  _objc_retainAutoreleasedReturnValue();
  if (lVar19 != 0) {
    func_0x00010befa120(puVar3,param_6,lVar19);
  }
  uVar20 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  puStack_140 = (undefined8 *)0x0;
  _objc_retain(param_7);
  puVar2 = param_7;
  func_0x00010bf52a60(param_7,param_6,&uStack_150,auStack_e8,0x10);
  if (puVar2 != (undefined *)0x0) {
    unaff_x25 = (undefined *)*puStack_140;
    do {
      unaff_x26 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_140 != unaff_x25) {
          _objc_enumerationMutation(param_7);
        }
        lVar4 = param_5;
        func_0x00010be0e8a0(param_5,param_6,*(undefined8 *)(lStack_148 + (long)unaff_x26 * 8));
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != 0) {
          func_0x00010befa120(puVar3,param_6,lVar4);
        }
        _objc_release(lVar4);
        unaff_x26 = unaff_x26 + 1;
      } while (puVar2 != unaff_x26);
      puVar2 = param_7;
      func_0x00010bf52a60(param_7,param_6,&uStack_150,auStack_e8,0x10);
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(param_7);
  ppuStack_108 = &PTR____CFConstantStringClassReference_110dad058;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110df13b8;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110e32ef8;
  pppuVar5 = (undefined ***)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_f0 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_6,&ppuStack_f8,&ppuStack_108,2)
  ;
  _objc_retainAutoreleasedReturnValue();
  lStack_158 = 0;
  pppuVar6 = (undefined ***)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  pppuVar14 = pppuVar5;
  func_0x00010bf64b60();
  _objc_retainAutoreleasedReturnValue();
  pppuVar16 = (undefined ***)0x0;
  if (lStack_158 == 0) {
    _objc_retain(pppuVar6);
    pppuVar16 = pppuVar6;
  }
  _objc_release(pppuVar6);
  _objc_release(pppuVar5);
  _objc_release(lVar19);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_168 = FUN_105f4e0d8;
  lStack_1f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = (undefined **)(param_7 + 8);
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained();
  ppuVar17 = ppuVar7;
  func_0x00010c06f880();
  ppuVar8 = ppuVar7;
  _objc_release();
  if ((int)ppuVar17 == 0) {
    pppuVar10 = (undefined ***)0x0;
    pppuVar15 = pppuVar16;
  }
  else {
    param_7 = param_7 + 8;
    _objc_loadWeakRetained(param_7);
    puVar3 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010c0baae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29fd40();
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(param_7);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_2c8 = puVar3;
    puStack_230 = puVar3;
    func_0x00010c0df720(uVar20);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_2d0 = puVar2;
    puStack_228 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_230,2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_2d8 = puVar3;
    puStack_220 = puVar3;
    func_0x00010c0df720(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_2e0 = puVar2;
    puStack_240 = puVar2;
    func_0x00010c0df720(uVar20);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_2e8 = puVar3;
    puStack_238 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_240,2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_2f0 = puVar2;
    puStack_218 = puVar2;
    func_0x00010c0df720(param_4);
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_2f8 = puVar3;
    puStack_250 = puVar3;
    func_0x00010c0df720(param_3);
    _objc_retainAutoreleasedReturnValue();
    unaff_x28 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_248 = unaff_x26;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_250,2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_210 = unaff_x28;
    func_0x00010c0df720(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_260 = puVar3;
    func_0x00010c0df720(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_258 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_260,2);
    _objc_retainAutoreleasedReturnValue();
    pppuVar5 = (undefined ***)PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_208 = puVar9;
    func_0x00010c0df720(param_2);
    _objc_retainAutoreleasedReturnValue();
    pppuVar15 = (undefined ***)PTR__OBJC_CLASS___NSNumber_1126ae570;
    pppuStack_270 = pppuVar5;
    func_0x00010c0df720(uVar20);
    _objc_retainAutoreleasedReturnValue();
    pppuVar6 = (undefined ***)PTR__OBJC_CLASS___NSArray_1126ae530;
    pppuStack_268 = pppuVar15;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&pppuStack_270,2);
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = PTR__OBJC_CLASS___NSArray_1126ae530;
    pppuStack_200 = pppuVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_220,5);
    _objc_retainAutoreleasedReturnValue();
    unaff_x27 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_1f8 = unaff_x25;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_1f8,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x25);
    _objc_release(pppuVar6);
    _objc_release(pppuVar15);
    _objc_release(pppuVar5);
    _objc_release(puVar9);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(unaff_x28);
    _objc_release(unaff_x26);
    _objc_release(puStack_2f8);
    _objc_release(puStack_2f0);
    _objc_release(puStack_2e8);
    _objc_release(puStack_2e0);
    _objc_release(puStack_2d8);
    _objc_release(puStack_2d0);
    _objc_release(puStack_2c8);
    ppuStack_290 = &PTR____CFConstantStringClassReference_110dad058;
    ppuStack_288 = &PTR____CFConstantStringClassReference_110e32f38;
    ppuStack_280 = &PTR____CFConstantStringClassReference_110e32f18;
    ppuVar17 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_278 = unaff_x27;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_6,&ppuStack_280,&ppuStack_290
                        ,2);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_2c0 = &PTR____CFConstantStringClassReference_110dad058;
    ppuStack_2b8 = &PTR____CFConstantStringClassReference_110e32f98;
    ppuStack_2a8 = &PTR____CFConstantStringClassReference_110e32f78;
    ppuStack_2b0 = &PTR____CFConstantStringClassReference_110df13d8;
    ppuStack_298 = &PTR__OBJC_CLASS___NSConstantDictionary_111174a40;
    pppuVar14 = &ppuStack_2a8;
    pppuVar10 = (undefined ***)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_2a0 = ppuVar7;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    ppuVar8 = unaff_x27;
    _objc_release();
  }
  pppuVar16 = pppuVar10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f0) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_308 = FUN_105f4e4fc;
  lStack_370 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar10 = pppuVar14;
  puStack_360 = unaff_x28;
  ppuStack_358 = unaff_x27;
  puStack_350 = unaff_x26;
  puStack_348 = unaff_x25;
  pppuStack_340 = pppuVar6;
  pppuStack_338 = pppuVar15;
  pppuStack_330 = pppuVar5;
  ppuStack_328 = ppuVar17;
  ppuStack_320 = ppuVar7;
  pppuStack_318 = pppuVar16;
  ppuStack_310 = &puStack_170;
  _objc_retain(pppuVar14);
  pppuVar5 = pppuVar14;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  if ((pppuVar5 == (undefined ***)0x0) ||
     (pppuVar16 = pppuVar5, func_0x00010bfd76c0(), (int)pppuVar16 == 0)) {
LAB_105f4e948:
    pppuVar16 = (undefined ***)0x0;
  }
  else {
    pppuVar16 = pppuVar5;
    func_0x00010bfc1860();
    _objc_retainAutoreleasedReturnValue();
    pppuVar6 = pppuVar16;
    func_0x00010c102a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(pppuVar16);
    if (pppuVar6 == (undefined ***)0x0) goto LAB_105f4e948;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    pppuVar6 = pppuVar5;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar16 = (undefined ***)&PTR____CFConstantStringClassReference_110daafd8;
    if (pppuVar6 != (undefined ***)0x0) {
      pppuVar16 = pppuVar6;
    }
    func_0x00010c1d0640(puVar3,param_6,pppuVar16,&PTR____CFConstantStringClassReference_110dbf6f8);
    _objc_release(pppuVar6);
    uStack_468 = 0;
    uStack_470 = 0;
    uStack_458 = 0;
    uStack_460 = 0;
    lStack_488 = 0;
    uStack_490 = 0;
    uStack_478 = 0;
    plStack_480 = (long *)0x0;
    pppuVar16 = pppuVar5;
    func_0x00010c118b60();
    _objc_retainAutoreleasedReturnValue();
    pppuVar6 = pppuVar16;
    func_0x00010bf52a60();
    if (pppuVar6 != (undefined ***)0x0) {
      lVar19 = *plStack_480;
      do {
        pppuVar15 = (undefined ***)0x0;
        do {
          if (*plStack_480 != lVar19) {
            _objc_enumerationMutation(pppuVar16);
          }
          lVar18 = *(long *)(lStack_488 + (long)pppuVar15 * 8);
          lVar4 = lVar18;
          func_0x00010c086560();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar4;
          func_0x00010c08fa60();
          _objc_release(lVar4);
          if (lVar11 != 0) {
            lVar4 = lVar18;
            func_0x00010c27e100(lVar18);
            _objc_retainAutoreleasedReturnValue();
            ppuVar7 = ppuVar8;
            func_0x00010bde9380(ppuVar8,param_6,lVar4);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar4);
            if (ppuVar7 != (undefined **)0x0) {
              func_0x00010c086560(lVar18);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar3,param_6,ppuVar7,lVar18);
              _objc_release(lVar18);
            }
            _objc_release(ppuVar7);
          }
          pppuVar15 = (undefined ***)((long)pppuVar15 + 1);
        } while (pppuVar6 != pppuVar15);
        pppuVar6 = pppuVar16;
        func_0x00010bf52a60(pppuVar16,param_6,&uStack_490,auStack_3f0,0x10);
      } while (pppuVar6 != (undefined ***)0x0);
    }
    _objc_release(pppuVar16);
    pppuVar16 = pppuVar14;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    pppuVar6 = pppuVar16;
    func_0x00010bf529e0();
    _objc_release(pppuVar16);
    if (pppuVar6 != (undefined ***)0x0) {
      pppuVar16 = pppuVar14;
      func_0x00010bfcf800(pppuVar14);
      _objc_retainAutoreleasedReturnValue();
      pppuVar6 = pppuVar16;
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      pppuVar15 = pppuVar6;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3,param_6,pppuVar15,&PTR____CFConstantStringClassReference_110e2cb78)
      ;
      _objc_release(pppuVar15);
      _objc_release(pppuVar6);
      _objc_release(pppuVar16);
    }
    pppuVar16 = pppuVar14;
    func_0x00010bf44620();
    _objc_retainAutoreleasedReturnValue();
    pppuVar6 = pppuVar16;
    func_0x00010bf529e0();
    _objc_release(pppuVar16);
    if (pppuVar6 != (undefined ***)0x0) {
      pppuVar16 = pppuVar14;
      func_0x00010bf44620(pppuVar14);
      _objc_retainAutoreleasedReturnValue();
      pppuVar6 = pppuVar16;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3,param_6,pppuVar6,&PTR____CFConstantStringClassReference_110e32858);
      _objc_release(pppuVar6);
      _objc_release(pppuVar16);
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_410 = &PTR____CFConstantStringClassReference_110dad058;
    ppuStack_408 = &PTR____CFConstantStringClassReference_110e32f38;
    ppuStack_400 = &PTR____CFConstantStringClassReference_110e06b78;
    func_0x00010c0b4a40(pppuVar14);
    func_0x00010c0df740();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_420 = puVar2;
    func_0x00010c08aca0(pppuVar14);
    func_0x00010c0df740();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_418 = puVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_420,2);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_3f8 = puVar12;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_6,&ppuStack_400,&ppuStack_410
                        ,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(puVar9);
    _objc_release(puVar2);
    ppuStack_450 = &PTR____CFConstantStringClassReference_110dad058;
    ppuStack_448 = &PTR____CFConstantStringClassReference_110e32f98;
    ppuStack_438 = &PTR____CFConstantStringClassReference_110e32f78;
    ppuStack_440 = &PTR____CFConstantStringClassReference_110df13d8;
    pppuVar10 = &ppuStack_438;
    pppuVar16 = (undefined ***)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_430 = puVar13;
    puStack_428 = puVar3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    _objc_release(puVar3);
  }
  _objc_release(pppuVar5);
  _objc_release(pppuVar14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_370) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(pppuVar10);
  if (pppuVar10 == (undefined ***)0x0) {
    pppuVar16 = (undefined ***)0x0;
  }
  else {
    pppuVar14 = pppuVar10;
    func_0x00010c2970a0();
    pppuVar16 = (undefined ***)PTR__OBJC_CLASS___NSNumber_1126ae570;
    iVar1 = (int)pppuVar14;
    if (iVar1 < 3) {
      if (iVar1 == 1) {
        pppuVar14 = pppuVar10;
        func_0x00010bf1f3c0(pppuVar10);
        func_0x00010c0df6e0(pppuVar16,param_6,pppuVar14);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
LAB_105f4ea1c:
        pppuVar14 = pppuVar10;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        pppuVar16 = pppuVar14;
        func_0x00010c08fa60();
        if (pppuVar16 == (undefined ***)0x0) {
          pppuVar16 = (undefined ***)0x0;
        }
        else {
          pppuVar16 = pppuVar10;
          func_0x00010c25d700(pppuVar10);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(pppuVar14);
      }
    }
    else if (iVar1 == 3) {
      pppuVar14 = pppuVar10;
      func_0x00010c27f080(pppuVar10);
      func_0x00010c0df880(pppuVar16,param_6,pppuVar14);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (iVar1 == 4) {
      pppuVar14 = pppuVar10;
      func_0x00010c067dc0(pppuVar10);
      func_0x00010c0df7c0(pppuVar16,param_6,pppuVar14);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (iVar1 != 5) goto LAB_105f4ea1c;
      func_0x00010bf885a0(pppuVar10);
      func_0x00010c0df720(pppuVar16);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(pppuVar10);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar16);
  return;
}



/* Entry: 105f4e0d8; end: 105f4e4fb; -[SCMapSDKSessionS2RFeatureProvider _visibleAreaToGeoJSON] */

void FUN_105f4e0d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined ***param_7)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  undefined **ppuVar15;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  long lVar16;
  undefined *unaff_x26;
  undefined **unaff_x27;
  undefined *unaff_x28;
  long lVar17;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined *puStack_298;
  undefined1 auStack_290 [128];
  long lStack_210;
  undefined *puStack_200;
  undefined **ppuStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined ***pppuStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined **)(param_5 + 8);
  _objc_loadWeakRetained();
  ppuVar15 = ppuVar2;
  func_0x00010c06f880();
  ppuVar3 = ppuVar2;
  _objc_release();
  if ((int)ppuVar15 == 0) {
    pppuVar14 = (undefined ***)0x0;
  }
  else {
    param_5 = param_5 + 8;
    _objc_loadWeakRetained(param_5);
    lVar17 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar17;
    func_0x00010c0baae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29fd40();
    _objc_release(lVar4);
    _objc_release(lVar17);
    _objc_release(param_5);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_168 = puVar5;
    puStack_d0 = puVar5;
    func_0x00010c0df720(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_170 = puVar6;
    puStack_c8 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_d0,2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_178 = puVar5;
    puStack_c0 = puVar5;
    func_0x00010c0df720(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_180 = puVar6;
    puStack_e0 = puVar6;
    func_0x00010c0df720(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_188 = puVar5;
    puStack_d8 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_e0,2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_190 = puVar6;
    puStack_b8 = puVar6;
    func_0x00010c0df720(param_4);
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_198 = puVar5;
    puStack_f0 = puVar5;
    func_0x00010c0df720(param_3);
    _objc_retainAutoreleasedReturnValue();
    unaff_x28 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_e8 = unaff_x26;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_f0,2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_b0 = unaff_x28;
    func_0x00010c0df720(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_100 = puVar5;
    func_0x00010c0df720(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_f8 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_100,2);
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_a8 = puVar7;
    func_0x00010c0df720(param_2);
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_110 = unaff_x22;
    func_0x00010c0df720(param_1);
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_108 = unaff_x23;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_110,2);
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a0 = unaff_x24;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_c0,5);
    _objc_retainAutoreleasedReturnValue();
    unaff_x27 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = unaff_x25;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_98,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x25);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(unaff_x28);
    _objc_release(unaff_x26);
    _objc_release(puStack_198);
    _objc_release(puStack_190);
    _objc_release(puStack_188);
    _objc_release(puStack_180);
    _objc_release(puStack_178);
    _objc_release(puStack_170);
    _objc_release(puStack_168);
    ppuStack_130 = &PTR____CFConstantStringClassReference_110dad058;
    ppuStack_128 = &PTR____CFConstantStringClassReference_110e32f38;
    ppuStack_120 = &PTR____CFConstantStringClassReference_110e32f18;
    ppuVar15 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_118 = unaff_x27;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_6,&ppuStack_120,&ppuStack_130
                        ,2);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_160 = &PTR____CFConstantStringClassReference_110dad058;
    ppuStack_158 = &PTR____CFConstantStringClassReference_110e32f98;
    ppuStack_148 = &PTR____CFConstantStringClassReference_110e32f78;
    ppuStack_150 = &PTR____CFConstantStringClassReference_110df13d8;
    ppuStack_138 = &PTR__OBJC_CLASS___NSConstantDictionary_111174a40;
    param_7 = &ppuStack_148;
    pppuVar14 = (undefined ***)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_140 = ppuVar2;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    ppuVar3 = unaff_x27;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_1a8 = FUN_105f4e4fc;
  lStack_210 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar9 = param_7;
  puStack_200 = unaff_x28;
  ppuStack_1f8 = unaff_x27;
  puStack_1f0 = unaff_x26;
  puStack_1e8 = unaff_x25;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = unaff_x22;
  ppuStack_1c8 = ppuVar15;
  ppuStack_1c0 = ppuVar2;
  pppuStack_1b8 = pppuVar14;
  puStack_1b0 = &stack0xfffffffffffffff0;
  _objc_retain(param_7);
  pppuVar8 = param_7;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  if ((pppuVar8 == (undefined ***)0x0) ||
     (pppuVar14 = pppuVar8, func_0x00010bfd76c0(), (int)pppuVar14 == 0)) {
LAB_105f4e948:
    pppuVar14 = (undefined ***)0x0;
  }
  else {
    pppuVar14 = pppuVar8;
    func_0x00010bfc1860();
    _objc_retainAutoreleasedReturnValue();
    pppuVar13 = pppuVar14;
    func_0x00010c102a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(pppuVar14);
    if (pppuVar13 == (undefined ***)0x0) goto LAB_105f4e948;
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = pppuVar8;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar14 = (undefined ***)&PTR____CFConstantStringClassReference_110daafd8;
    if (pppuVar9 != (undefined ***)0x0) {
      pppuVar14 = pppuVar9;
    }
    func_0x00010c1d0640(puVar5,param_6,pppuVar14,&PTR____CFConstantStringClassReference_110dbf6f8);
    _objc_release(pppuVar9);
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    lStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    plStack_320 = (long *)0x0;
    pppuVar14 = pppuVar8;
    func_0x00010c118b60();
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = pppuVar14;
    func_0x00010bf52a60();
    if (pppuVar9 != (undefined ***)0x0) {
      lVar17 = *plStack_320;
      do {
        pppuVar13 = (undefined ***)0x0;
        do {
          if (*plStack_320 != lVar17) {
            _objc_enumerationMutation(pppuVar14);
          }
          lVar16 = *(long *)(lStack_328 + (long)pppuVar13 * 8);
          lVar4 = lVar16;
          func_0x00010c086560();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar4;
          func_0x00010c08fa60();
          _objc_release(lVar4);
          if (lVar10 != 0) {
            lVar4 = lVar16;
            func_0x00010c27e100(lVar16);
            _objc_retainAutoreleasedReturnValue();
            ppuVar2 = ppuVar3;
            func_0x00010bde9380(ppuVar3,param_6,lVar4);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar4);
            if (ppuVar2 != (undefined **)0x0) {
              func_0x00010c086560(lVar16);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar5,param_6,ppuVar2,lVar16);
              _objc_release(lVar16);
            }
            _objc_release(ppuVar2);
          }
          pppuVar13 = (undefined ***)((long)pppuVar13 + 1);
        } while (pppuVar9 != pppuVar13);
        pppuVar9 = pppuVar14;
        func_0x00010bf52a60(pppuVar14,param_6,&uStack_330,auStack_290,0x10);
      } while (pppuVar9 != (undefined ***)0x0);
    }
    _objc_release(pppuVar14);
    pppuVar14 = param_7;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = pppuVar14;
    func_0x00010bf529e0();
    _objc_release(pppuVar14);
    if (pppuVar9 != (undefined ***)0x0) {
      pppuVar14 = param_7;
      func_0x00010bfcf800(param_7);
      _objc_retainAutoreleasedReturnValue();
      pppuVar9 = pppuVar14;
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      pppuVar13 = pppuVar9;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5,param_6,pppuVar13,&PTR____CFConstantStringClassReference_110e2cb78)
      ;
      _objc_release(pppuVar13);
      _objc_release(pppuVar9);
      _objc_release(pppuVar14);
    }
    pppuVar14 = param_7;
    func_0x00010bf44620();
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = pppuVar14;
    func_0x00010bf529e0();
    _objc_release(pppuVar14);
    if (pppuVar9 != (undefined ***)0x0) {
      pppuVar14 = param_7;
      func_0x00010bf44620(param_7);
      _objc_retainAutoreleasedReturnValue();
      pppuVar9 = pppuVar14;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5,param_6,pppuVar9,&PTR____CFConstantStringClassReference_110e32858);
      _objc_release(pppuVar9);
      _objc_release(pppuVar14);
    }
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_2b0 = &PTR____CFConstantStringClassReference_110dad058;
    ppuStack_2a8 = &PTR____CFConstantStringClassReference_110e32f38;
    ppuStack_2a0 = &PTR____CFConstantStringClassReference_110e06b78;
    func_0x00010c0b4a40(param_7);
    func_0x00010c0df740();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_2c0 = puVar6;
    func_0x00010c08aca0(param_7);
    func_0x00010c0df740();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_2b8 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_2c0,2);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_298 = puVar11;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_6,&ppuStack_2a0,&ppuStack_2b0
                        ,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar7);
    _objc_release(puVar6);
    ppuStack_2f0 = &PTR____CFConstantStringClassReference_110dad058;
    ppuStack_2e8 = &PTR____CFConstantStringClassReference_110e32f98;
    ppuStack_2d8 = &PTR____CFConstantStringClassReference_110e32f78;
    ppuStack_2e0 = &PTR____CFConstantStringClassReference_110df13d8;
    pppuVar9 = &ppuStack_2d8;
    pppuVar14 = (undefined ***)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_2d0 = puVar12;
    puStack_2c8 = puVar5;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(puVar5);
  }
  _objc_release(pppuVar8);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_210) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(pppuVar9);
  if (pppuVar9 == (undefined ***)0x0) {
    pppuVar14 = (undefined ***)0x0;
  }
  else {
    pppuVar8 = pppuVar9;
    func_0x00010c2970a0();
    pppuVar14 = (undefined ***)PTR__OBJC_CLASS___NSNumber_1126ae570;
    iVar1 = (int)pppuVar8;
    if (iVar1 < 3) {
      if (iVar1 == 1) {
        pppuVar8 = pppuVar9;
        func_0x00010bf1f3c0(pppuVar9);
        func_0x00010c0df6e0(pppuVar14,param_6,pppuVar8);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
LAB_105f4ea1c:
        pppuVar8 = pppuVar9;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        pppuVar14 = pppuVar8;
        func_0x00010c08fa60();
        if (pppuVar14 == (undefined ***)0x0) {
          pppuVar14 = (undefined ***)0x0;
        }
        else {
          pppuVar14 = pppuVar9;
          func_0x00010c25d700(pppuVar9);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(pppuVar8);
      }
    }
    else if (iVar1 == 3) {
      pppuVar8 = pppuVar9;
      func_0x00010c27f080(pppuVar9);
      func_0x00010c0df880(pppuVar14,param_6,pppuVar8);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (iVar1 == 4) {
      pppuVar8 = pppuVar9;
      func_0x00010c067dc0(pppuVar9);
      func_0x00010c0df7c0(pppuVar14,param_6,pppuVar8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (iVar1 != 5) goto LAB_105f4ea1c;
      func_0x00010bf885a0(pppuVar9);
      func_0x00010c0df720(pppuVar14);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(pppuVar9);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar14);
  return;
}



/* Entry: 105f4e4fc; end: 105f4e99b; -[SCMapSDKSessionS2RFeatureProvider _featureDescriptorToGeoJSON:] */

void FUN_105f4e4fc(long param_1,undefined8 param_2,undefined ***param_3)

{
  int iVar1;
  undefined ***pppuVar2;
  undefined *puVar3;
  undefined ***pppuVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar4 = param_3;
  _objc_retain(param_3);
  pppuVar2 = param_3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  if ((pppuVar2 == (undefined ***)0x0) ||
     (pppuVar12 = pppuVar2, func_0x00010bfd76c0(), (int)pppuVar12 == 0)) {
LAB_105f4e948:
    pppuVar12 = (undefined ***)0x0;
  }
  else {
    pppuVar12 = pppuVar2;
    func_0x00010bfc1860();
    _objc_retainAutoreleasedReturnValue();
    pppuVar11 = pppuVar12;
    func_0x00010c102a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(pppuVar12);
    if (pppuVar11 == (undefined ***)0x0) goto LAB_105f4e948;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    pppuVar12 = pppuVar2;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = (undefined ***)&PTR____CFConstantStringClassReference_110daafd8;
    if (pppuVar12 != (undefined ***)0x0) {
      pppuVar4 = pppuVar12;
    }
    func_0x00010c1d0640(puVar3,param_2,pppuVar4,&PTR____CFConstantStringClassReference_110dbf6f8);
    _objc_release(pppuVar12);
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    lStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    plStack_180 = (long *)0x0;
    pppuVar4 = pppuVar2;
    func_0x00010c118b60();
    _objc_retainAutoreleasedReturnValue();
    pppuVar12 = pppuVar4;
    func_0x00010bf52a60();
    if (pppuVar12 != (undefined ***)0x0) {
      lVar14 = *plStack_180;
      do {
        pppuVar11 = (undefined ***)0x0;
        do {
          if (*plStack_180 != lVar14) {
            _objc_enumerationMutation(pppuVar4);
          }
          lVar13 = *(long *)(lStack_188 + (long)pppuVar11 * 8);
          lVar5 = lVar13;
          func_0x00010c086560();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010c08fa60();
          _objc_release(lVar5);
          if (lVar6 != 0) {
            lVar5 = lVar13;
            func_0x00010c27e100(lVar13);
            _objc_retainAutoreleasedReturnValue();
            lVar6 = param_1;
            func_0x00010bde9380(param_1,param_2,lVar5);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar5);
            if (lVar6 != 0) {
              func_0x00010c086560(lVar13);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar3,param_2,lVar6,lVar13);
              _objc_release(lVar13);
            }
            _objc_release(lVar6);
          }
          pppuVar11 = (undefined ***)((long)pppuVar11 + 1);
        } while (pppuVar12 != pppuVar11);
        pppuVar12 = pppuVar4;
        func_0x00010bf52a60(pppuVar4,param_2,&uStack_190,auStack_f0,0x10);
      } while (pppuVar12 != (undefined ***)0x0);
    }
    _objc_release(pppuVar4);
    pppuVar4 = param_3;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    pppuVar12 = pppuVar4;
    func_0x00010bf529e0();
    _objc_release(pppuVar4);
    if (pppuVar12 != (undefined ***)0x0) {
      pppuVar4 = param_3;
      func_0x00010bfcf800(param_3);
      _objc_retainAutoreleasedReturnValue();
      pppuVar12 = pppuVar4;
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      pppuVar11 = pppuVar12;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3,param_2,pppuVar11,&PTR____CFConstantStringClassReference_110e2cb78)
      ;
      _objc_release(pppuVar11);
      _objc_release(pppuVar12);
      _objc_release(pppuVar4);
    }
    pppuVar4 = param_3;
    func_0x00010bf44620();
    _objc_retainAutoreleasedReturnValue();
    pppuVar12 = pppuVar4;
    func_0x00010bf529e0();
    _objc_release(pppuVar4);
    if (pppuVar12 != (undefined ***)0x0) {
      pppuVar4 = param_3;
      func_0x00010bf44620(param_3);
      _objc_retainAutoreleasedReturnValue();
      pppuVar12 = pppuVar4;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3,param_2,pppuVar12,&PTR____CFConstantStringClassReference_110e32858)
      ;
      _objc_release(pppuVar12);
      _objc_release(pppuVar4);
    }
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_110 = &PTR____CFConstantStringClassReference_110dad058;
    ppuStack_108 = &PTR____CFConstantStringClassReference_110e32f38;
    ppuStack_100 = &PTR____CFConstantStringClassReference_110e06b78;
    func_0x00010c0b4a40(param_3);
    func_0x00010c0df740();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_120 = puVar7;
    func_0x00010c08aca0(param_3);
    func_0x00010c0df740();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_118 = puVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_120,2);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_f8 = puVar9;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_100,&ppuStack_110
                        ,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    ppuStack_150 = &PTR____CFConstantStringClassReference_110dad058;
    ppuStack_148 = &PTR____CFConstantStringClassReference_110e32f98;
    ppuStack_138 = &PTR____CFConstantStringClassReference_110e32f78;
    ppuStack_140 = &PTR____CFConstantStringClassReference_110df13d8;
    pppuVar4 = &ppuStack_138;
    pppuVar12 = (undefined ***)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_130 = puVar10;
    puStack_128 = puVar3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar3);
  }
  _objc_release(pppuVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(pppuVar4);
  if (pppuVar4 == (undefined ***)0x0) {
    pppuVar12 = (undefined ***)0x0;
  }
  else {
    pppuVar2 = pppuVar4;
    func_0x00010c2970a0();
    pppuVar12 = (undefined ***)PTR__OBJC_CLASS___NSNumber_1126ae570;
    iVar1 = (int)pppuVar2;
    if (iVar1 < 3) {
      if (iVar1 == 1) {
        pppuVar2 = pppuVar4;
        func_0x00010bf1f3c0(pppuVar4);
        func_0x00010c0df6e0(pppuVar12,param_2,pppuVar2);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
LAB_105f4ea1c:
        pppuVar2 = pppuVar4;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        pppuVar12 = pppuVar2;
        func_0x00010c08fa60();
        if (pppuVar12 == (undefined ***)0x0) {
          pppuVar12 = (undefined ***)0x0;
        }
        else {
          pppuVar12 = pppuVar4;
          func_0x00010c25d700(pppuVar4);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(pppuVar2);
      }
    }
    else if (iVar1 == 3) {
      pppuVar2 = pppuVar4;
      func_0x00010c27f080(pppuVar4);
      func_0x00010c0df880(pppuVar12,param_2,pppuVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (iVar1 == 4) {
      pppuVar2 = pppuVar4;
      func_0x00010c067dc0(pppuVar4);
      func_0x00010c0df7c0(pppuVar12,param_2,pppuVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (iVar1 != 5) goto LAB_105f4ea1c;
      func_0x00010bf885a0(pppuVar4);
      func_0x00010c0df720(pppuVar12);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(pppuVar4);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar12);
  return;
}



/* Entry: 105f4e99c; end: 105f4eaf3; -[SCMapSDKSessionS2RFeatureProvider _convertPropertyValue:] */

void FUN_105f4e99c(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
    goto LAB_105f4ead8;
  }
  puVar2 = param_3;
  func_0x00010c2970a0();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  iVar1 = (int)puVar2;
  if (iVar1 < 3) {
    if (iVar1 == 1) {
      puVar2 = param_3;
      func_0x00010bf1f3c0(param_3);
      func_0x00010c0df6e0(puVar3,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105f4ead8;
    }
  }
  else {
    if (iVar1 == 3) {
      puVar2 = param_3;
      func_0x00010c27f080(param_3);
      func_0x00010c0df880(puVar3,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105f4ead8;
    }
    if (iVar1 == 4) {
      puVar2 = param_3;
      func_0x00010c067dc0(param_3);
      func_0x00010c0df7c0(puVar3,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105f4ead8;
    }
    if (iVar1 == 5) {
      func_0x00010bf885a0(param_3);
      func_0x00010c0df720(puVar3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105f4ead8;
    }
  }
  puVar2 = param_3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = param_3;
    func_0x00010c25d700(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
LAB_105f4ead8:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105f4eaf4; end: 105f4eb1f; -[SCMapSDKSessionS2RFeatureProvider .cxx_destruct] */

void FUN_105f4eaf4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105f4eb20; end: 105f4eb8b; -[SCMapSDKSessionS2RInfoProvider initWithMapView:] */

undefined1 * FUN_105f4eb20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ee270;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f4eb8c; end: 105f4ebc3; -[SCMapSDKSessionS2RInfoProvider willDumpLogGivenProject:] */

long FUN_105f4eb8c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c06f880();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 105f4ebc4; end: 105f4ecc7; -[SCMapSDKSessionS2RInfoProvider provideLogContentAsync:] */

void FUN_105f4ebc4(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_3);
  ppuVar1 = (undefined **)(param_1 + 8);
  _objc_loadWeakRetained();
  ppuVar2 = ppuVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c1530a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010bfc4920();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010bf6f840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  ppuVar1 = ppuVar5;
  func_0x00010c08fa60();
  if (ppuVar1 == (undefined **)0x0) {
    _objc_release(ppuVar5);
    ppuVar5 = &PTR____CFConstantStringClassReference_110e32fb8;
  }
  ppuVar1 = ppuVar5;
  func_0x00010bf64920(ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_3 + 0x10))(param_3,ppuVar1,&PTR____CFConstantStringClassReference_110e32fd8);
  _objc_release(param_3);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
  return;
}



/* Entry: 105f4ecc8; end: 105f4eddf; -[SCMapSDKSessionS2RInfoProvider getMetaInfo] */

void FUN_105f4ecc8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c06f880();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e32ff8;
  }
  else {
    ppuVar3 = (undefined **)(param_1 + 8);
    _objc_loadWeakRetained();
    ppuVar4 = ppuVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c1530a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010bfc4920();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010c262900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    ppuVar3 = ppuVar7;
    func_0x00010c08fa60();
    if (ppuVar3 == (undefined **)0x0) {
      _objc_release(ppuVar7);
      ppuVar7 = &PTR____CFConstantStringClassReference_110e33018;
    }
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e33038);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 105f4ede0; end: 105f4ede7; -[SCMapSDKSessionS2RInfoProvider .cxx_destruct] */

void FUN_105f4ede0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105f4ede8; end: 105f4ee5b; -[SCDelayedDateInterval initWithStart:] */

undefined1 * FUN_105f4ede8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ee278;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f4ee5c; end: 105f4eefb; -[SCDelayedDateInterval setEnd:] */

void FUN_105f4ee5c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf433a0(param_3,param_2,*(undefined8 *)(param_1 + 0x10));
  lVar4 = param_3;
  if (lVar1 == -1) {
    lVar4 = *(long *)(param_1 + 0x10);
    _objc_retain(lVar4);
    _objc_release(param_3);
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    _objc_retain(lVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDateInterval_1126c64e0;
    _objc_alloc();
    func_0x00010c04b9e0();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar3;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105f4eefc; end: 105f4f02b; -[SCDelayedDateInterval intersectionWithDateInterval:] */

void FUN_105f4eefc(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_4);
  puVar1 = *(undefined **)(param_2 + 8);
  if (puVar1 == (undefined *)0x0) {
    uVar2 = param_4;
    func_0x00010bf94680(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    dVar4 = param_1;
    _objc_release(uVar2);
    func_0x00010c26f320(*(undefined8 *)(param_2 + 0x10));
    if (dVar4 <= param_1) {
      uVar2 = param_4;
      dVar5 = dVar4;
      func_0x00010c24e820(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      _objc_release(uVar2);
      if (dVar5 <= dVar4) {
        dVar5 = dVar4;
      }
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf655e0(dVar5,PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSDateInterval_1126c64e0;
      _objc_alloc(PTR__OBJC_CLASS___NSDateInterval_1126c64e0);
      uVar2 = param_4;
      func_0x00010bf94680(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04b9e0(puVar1,param_3,puVar3,uVar2);
      _objc_release(uVar2);
      _objc_release(puVar3);
    }
    else {
      puVar1 = (undefined *)0x0;
    }
  }
  else {
    func_0x00010c069860(puVar1,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f4f02c; end: 105f4f033; -[SCDelayedDateInterval start] */

undefined8 FUN_105f4f02c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105f4f034; end: 105f4f03b; -[SCDelayedDateInterval end] */

undefined8 FUN_105f4f034(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105f4f03c; end: 105f4f077; -[SCDelayedDateInterval .cxx_destruct] */

void FUN_105f4f03c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f4f078; end: 105f4f2cb; -[SCMapTimeTracker initWithApplicationLifecycleEvents:timeProvider:] */

undefined8 * FUN_105f4f078(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bf5e5e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR_PTR_1126ee280;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    if (param_3 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      uVar6 = puVar2[2];
      puVar2[2] = puVar3;
      _objc_release(uVar6);
      puVar3 = PTR_PTR_1126c64e8;
      _objc_alloc(PTR_PTR_1126c64e8);
      func_0x00010c04b820();
      func_0x00010c195da0();
      func_0x00010befa120(puVar2[2]);
      _objc_release(puVar3);
    }
    _objc_initWeak(auStack_78,puVar2);
    _objc_retain(param_4);
    uVar6 = puVar2[5];
    puVar2[5] = param_4;
    _objc_release(uVar6);
    lVar4 = param_3;
    func_0x00010c2a6420();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_105f4f2cc;
    puStack_88 = &UNK_110846510;
    _objc_copyWeak(auStack_80,auStack_78);
    lVar5 = lVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar2[3];
    puVar2[3] = lVar5;
    _objc_release(uVar6);
    _objc_release(lVar4);
    lVar4 = param_3;
    func_0x00010bf75dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a8,auStack_78);
    lVar5 = lVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar2[4];
    puVar2[4] = lVar5;
    _objc_release(uVar6);
    _objc_release(lVar4);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 105f4f2cc; end: 105f4f323;  */

void FUN_105f4f2cc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6ca60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f4f324; end: 105f4f37b; -[SCMapTimeTracker startMeasuringIfNotStarted] */

void FUN_105f4f324(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf5e5e0();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 8) == 0) {
    _objc_retain(uVar1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar1;
    _objc_release(uVar2);
    func_0x00010be8b420(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f4f37c; end: 105f4f3ab; -[SCMapTimeTracker cancelMeasuringIfStarted] */

void FUN_105f4f37c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    _objc_release();
  }
                    /* WARNING: Could not recover jumptable at 0x00010be8b430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeAllButLastIntervalIfNeede_1125806a8);
  return;
}



/* Entry: 105f4f3ac; end: 105f4f45f; -[SCMapTimeTracker endMeasuringIfStarted] */

void FUN_105f4f3ac(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bf5e5e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_2 + 8) == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010be06b00(param_2,param_3,*(long *)(param_2 + 8),uVar1);
    uVar2 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
    _objc_release(uVar2);
    puVar3 = (undefined *)0x0;
    if (param_1 < 0.0) goto LAB_105f4f440;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,(long)(param_1 * 1000.0));
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010be8b420(param_2);
LAB_105f4f440:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105f4f460; end: 105f4f50b; -[SCMapTimeTracker _onDidEnterBackground] */

void FUN_105f4f460(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf5e5e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf940a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126c64e8;
    _objc_alloc(PTR_PTR_1126c64e8);
    func_0x00010c04b820();
    if (*(long *)(param_1 + 8) == 0) {
      func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
    }
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x10),param_2,puVar4);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f4f50c; end: 105f4f5af; -[SCMapTimeTracker _onWillEnterForeground] */

void FUN_105f4f50c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf5e5e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf940a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c089820(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195da0();
    _objc_release(uVar4);
    if (*(long *)(param_1 + 8) == 0) {
      func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f4f5b0; end: 105f4f74f; -[SCMapTimeTracker _durationInForegroundFrom:to:] */

double FUN_105f4f5b0(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c26f380(param_5,param_3,param_4);
  dVar7 = param_1;
  if (0.0 <= param_1) {
    lVar1 = *(long *)(param_2 + 0x10);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSDateInterval_1126c64e0;
      _objc_alloc(PTR__OBJC_CLASS___NSDateInterval_1126c64e0);
      func_0x00010c04b9e0();
      dVar7 = 0.0;
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lVar4 = *(long *)(param_2 + 0x10);
      _objc_retain(lVar4);
      lVar1 = lVar4;
      func_0x00010bf52a60(lVar4,param_3,&uStack_140,auStack_f8,0x10);
      if (lVar1 != 0) {
        lVar5 = *plStack_130;
        do {
          lVar6 = 0;
          do {
            if (*plStack_130 != lVar5) {
              _objc_enumerationMutation(lVar4);
            }
            uVar3 = *(undefined8 *)(lStack_138 + lVar6 * 8);
            func_0x00010c069860(uVar3,param_3,puVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf8b160();
            param_1 = param_1 - dVar7;
            _objc_release(uVar3);
            lVar6 = lVar6 + 1;
          } while (lVar1 != lVar6);
          lVar1 = lVar4;
          func_0x00010bf52a60(lVar4,param_3,&uStack_140,auStack_f8,0x10);
        } while (lVar1 != 0);
      }
      _objc_release(lVar4);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar1 = *(long *)(param_4 + 0x10);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12adc0(*(undefined8 *)(param_4 + 0x10));
    func_0x00010befa120(*(undefined8 *)(param_4 + 0x10),param_3,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return dVar7;
}



/* Entry: 105f4f750; end: 105f4f79b; -[SCMapTimeTracker _removeAllButLastIntervalIfNeeded] */

void FUN_105f4f750(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x10),param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f4f79c; end: 105f4f7ef; -[SCMapTimeTracker .cxx_destruct] */

void FUN_105f4f79c(long param_1)

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



/* Entry: 105f4f7f0; end: 105f4f857; +[SCMSGetViewportInfoRequest descriptor] */

void FUN_105f4f7f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2440 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aae190,
                        &PTR____CFConstantStringClassReference_110e33058,&PTR_DAT_113132538,
                        &PTR_DAT_1131325f0,3,0x18,0x1c);
    puRam00000001136c2440 = puVar1;
  }
  return;
}



/* Entry: 105f4f858; end: 105f4f8bf; +[SCMSWeather descriptor] */

void FUN_105f4f858(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2448 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aae1e0,
                        &PTR____CFConstantStringClassReference_110e33078,&PTR_DAT_113132538,
                        &PTR_DAT_113132570,2,0xc,0x1c);
    puRam00000001136c2448 = puVar1;
  }
  return;
}



/* Entry: 105f4f8c0; end: 105f4f927; +[SCMSLocality descriptor] */

void FUN_105f4f8c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2450 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aae230,
                        &PTR____CFConstantStringClassReference_110e33098,&PTR_DAT_113132538,
                        &PTR_DAT_1131325b0,2,0x18,0x1c);
    puRam00000001136c2450 = puVar1;
  }
  return;
}



/* Entry: 105f4f928; end: 105f4f98f; +[SCMSFootstepsActivity descriptor] */

void FUN_105f4f928(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2458 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aae280,
                        &PTR____CFConstantStringClassReference_110e330b8,&PTR_DAT_113132538,
                        &PTR_DAT_113132550,1,0x10,0x1c);
    puRam00000001136c2458 = puVar1;
  }
  return;
}



/* Entry: 105f4f990; end: 105f4f9f7; +[SCMSGetViewportInfoResponse descriptor] */

void FUN_105f4f990(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2460 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aae2d0,
                        &PTR____CFConstantStringClassReference_110e330d8,&PTR_DAT_113132538,
                        &PTR_DAT_113132650,6,0x38,0x1c);
    puRam00000001136c2460 = puVar1;
  }
  return;
}



/* Entry: 105f4f9f8; end: 105f4fa6b; -[UNISCMTSnapzenUserData initWithUnifiedGrpcService:] */

undefined1 * FUN_105f4f9f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ee288;
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


