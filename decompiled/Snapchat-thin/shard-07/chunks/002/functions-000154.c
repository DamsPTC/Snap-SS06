/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1052d8184; end: 1052d819b;  */

void FUN_1052d8184(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1052d819c; end: 1052d823b;  */

void FUN_1052d819c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010bf51e00();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) =
       *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) =
       *(undefined8 *)PTR__UIBackgroundTaskInvalid_110345af0;
  return;
}



/* Entry: 1052d823c; end: 1052d823f;  */

void FUN_1052d823c(void)

{
  return;
}



/* Entry: 1052d8240; end: 1052d8293; -[SCBackgroundTaskWrapper .cxx_destruct] */

void FUN_1052d8240(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 1052d8294; end: 1052d830b;  */

void FUN_1052d8294(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108760f0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1052d830c; end: 1052d849b; -[SCBatteryNonFatalReportingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052d830c(long param_1,undefined8 param_2)

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
  undefined8 uVar13;
  
  puVar1 = PTR_PTR_1126b6ec0;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112720de8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf53fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112720dec;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c292f40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112720df0;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010bf17600();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112720df4;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112720df8;
  _objc_loadWeakRetained(lVar11);
  lVar12 = lVar11;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0064e0(puVar1,param_2,lVar3,lVar6,lVar8,lVar10,lVar12);
  uVar13 = *(undefined8 *)(param_1 + _DAT_112720dfc);
  *(undefined **)(param_1 + _DAT_112720dfc) = puVar1;
  _objc_release(uVar13);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1052d849c; end: 1052d857b; -[SCBatteryNonFatalReportingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052d849c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112720df0);
  _objc_destroyWeak(param_1 + _DAT_112720df4);
  _objc_destroyWeak(param_1 + _DAT_112720e00);
  _objc_destroyWeak(param_1 + _DAT_112720de8);
  _objc_destroyWeak(param_1 + _DAT_112720dec);
  _objc_destroyWeak(param_1 + _DAT_112720df8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112720dfc,0);
  return;
}



/* Entry: 1052d857c; end: 1052d85d3; -[SCBatteryCPUMonitor stopMonitoring] */

void FUN_1052d857c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1052d85d4;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 1052d85d4; end: 1052d85e7;  */

void FUN_1052d85d4(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010becaf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x20),PTR_s__teardownCpuMonitorTimer_112590578);
    return;
  }
  return;
}



/* Entry: 1052d85e8; end: 1052d85eb; -[SCBatteryCPUMonitor didEnterBackground] */

void FUN_1052d85e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stopMonitoring_1126732b0);
  return;
}



/* Entry: 1052d85ec; end: 1052d85ef; -[SCBatteryCPUMonitor willEnterForeground] */

void FUN_1052d85ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24f410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_startMonitoring_112671728);
  return;
}



/* Entry: 1052d85f0; end: 1052d85fb; -[SCBatteryCPUMonitor cpuUsage] */

void FUN_1052d85f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf53bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ae4f0,PTR_s_cpuUsage_1125b2890);
  return;
}



/* Entry: 1052d85fc; end: 1052d8723; -[SCBatteryCPUMonitor _updateEncodedCpuUsage] */

void FUN_1052d85fc(double param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  
  func_0x00010bf53ba0(PTR_PTR_1126ae4f0);
  dVar3 = param_1;
  func_0x00010c2762e0(PTR_PTR_1126ae4f0);
  dVar4 = dVar3;
  _CACurrentMediaTime();
  if (param_1 != -1.0) {
    puVar1 = PTR_PTR_1126b3130;
    func_0x00010c22bc20(PTR_PTR_1126b3130);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf06da0(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b6ec8;
    func_0x00010c22b6a0(PTR_PTR_1126b6ec8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c284fe0(param_1);
    _objc_release(puVar1);
    if (*(long *)(param_2 + 0x30) != 0) {
      (**(code **)(*(long *)(param_2 + 0x30) + 0x10))(param_1);
    }
  }
  if ((dVar3 != -1.0) && (*(long *)(param_2 + 0x28) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001052d8708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + 0x28) + 0x10))(dVar3,dVar4);
    return;
  }
  return;
}



/* Entry: 1052d8724; end: 1052d875b;  */

void FUN_1052d8724(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010be37ea0();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bed7730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__updateEncodedCpuUsage_112593770);
    return;
  }
  return;
}



/* Entry: 1052d875c; end: 1052d8787; -[SCBatteryCPUMonitor _teardownCpuMonitorTimer] */

void FUN_1052d875c(long param_1)

{
  undefined8 uVar1;
  
  _dispatch_source_cancel(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052d8788; end: 1052d87cf; -[SCBatteryCPUMonitor _inAppActive] */

bool FUN_1052d8788(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae520;
  func_0x00010c22b6a0(PTR_PTR_1126ae520);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  _objc_release(puVar1);
  return puVar2 == (undefined *)0x0;
}



/* Entry: 1052d87d0; end: 1052d884f; -[SCBatteryCPUMonitor _appInBackground] */

bool FUN_1052d87d0(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126ae520;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf07b60();
  if (puVar3 == (undefined *)0x2) {
    puVar3 = PTR_PTR_1126ae520;
    func_0x00010c22b6a0(PTR_PTR_1126ae520);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0d9860();
    bVar1 = puVar4 == (undefined *)0x2;
    _objc_release(puVar3);
  }
  else {
    bVar1 = false;
  }
  _objc_release(puVar2);
  return bVar1;
}



/* Entry: 1052d8850; end: 1052d8857; -[SCBatteryCPUMonitor usageListener] */

undefined8 FUN_1052d8850(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1052d8858; end: 1052d88ab; -[SCBatteryCPUMonitor .cxx_destruct] */

void FUN_1052d8858(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052d88ac; end: 1052d88af;  */

void FUN_1052d88ac(void)

{
  return;
}



/* Entry: 1052d88b0; end: 1052d890b; -[SCBatteryCameraMonitor didCameraStartRunningAtTime:cameraPosition:] */

void FUN_1052d88b0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1052d890c;
  puStack_30 = &UNK_110858dc0;
  lStack_28 = param_2;
  uStack_20 = param_4;
  uStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 8),param_3,&puStack_48);
  return;
}



/* Entry: 1052d890c; end: 1052d8b27;  */

void FUN_1052d890c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if ((lVar5 == 0) || (lVar2 = lVar5, func_0x00010c067ec0(), (int)lVar2 == 1)) {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar6);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2b120(PTR_PTR_1126b6ed0);
    func_0x00010c277620(puVar1);
    _objc_release(puVar1);
    lVar4 = *(long *)(param_1 + 0x20);
    lVar2 = *(long *)(lVar4 + 0x10);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))
                (*(undefined8 *)(param_1 + 0x30),lVar2,0,*(undefined8 *)(param_1 + 0x28));
      lVar4 = *(long *)(param_1 + 0x20);
    }
    puVar7 = *(undefined **)(lVar4 + 0x18);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (puVar7 == (undefined *)0x0) {
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar6);
      _objc_release(puVar1);
    }
    puVar1 = PTR_PTR_1126b6ed8;
    _objc_alloc(PTR_PTR_1126b6ed8);
    func_0x00010c0528a0(*(undefined8 *)(param_1 + 0x30));
    func_0x00010befa120(puVar7);
    puVar3 = PTR_PTR_1126b6ec8;
    func_0x00010c22b6a0(PTR_PTR_1126b6ec8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c284fc0();
    _objc_release(puVar3);
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x38) = 1;
    _objc_release(puVar1);
    _objc_release(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 1052d8b28; end: 1052d8b83; -[SCBatteryCameraMonitor didCameraStopRunningAtTime:cameraPosition:] */

void FUN_1052d8b28(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1052d8b84;
  puStack_30 = &UNK_110858dc0;
  lStack_28 = param_2;
  uStack_20 = param_4;
  uStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 8),param_3,&puStack_48);
  return;
}



/* Entry: 1052d8b84; end: 1052d8e27;  */

void FUN_1052d8b84(undefined8 param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined1 auStack_168 [8];
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(*(long *)(param_2 + 0x20) + 0x20);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,*(undefined8 *)(param_2 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if ((lVar9 == 0) || (lVar4 = lVar9, func_0x00010c067ec0(), (int)lVar4 != 0)) goto LAB_1052d8de4;
  uVar10 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x20);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar10);
  _objc_release(puVar3);
  lVar8 = *(long *)(param_2 + 0x20);
  lVar4 = *(long *)(lVar8 + 0x10);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x10))
              (*(undefined8 *)(param_2 + 0x30),lVar4,1,*(undefined8 *)(param_2 + 0x28));
    lVar8 = *(long *)(param_2 + 0x20);
  }
  lVar4 = *(long *)(lVar8 + 0x18);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (lVar4 != 0) {
    puVar3 = PTR_PTR_1126b6ed8;
    _objc_alloc(PTR_PTR_1126b6ed8);
    func_0x00010c0528a0(*(undefined8 *)(param_2 + 0x30));
    func_0x00010befa120(lVar4);
    _objc_release(puVar3);
  }
  param_1 = 0;
  lVar5 = *(long *)(*(long *)(param_2 + 0x20) + 0x20);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  if (lVar6 == 0) {
    _objc_release(lVar5);
LAB_1052d8d94:
    puVar3 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2b100(PTR_PTR_1126b6ed0);
    func_0x00010c277620(puVar3);
    _objc_release(puVar3);
    *(undefined1 *)(*(long *)(param_2 + 0x20) + 0x38) = 0;
  }
  else {
    bVar1 = true;
    do {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(lVar5);
        }
        iVar2 = (int)*(undefined8 *)(lVar11 * 8);
        func_0x00010c067ec0();
        bVar1 = (bool)(iVar2 != 0 & bVar1);
        lVar11 = lVar11 + 1;
      } while (lVar6 != lVar11);
      lVar6 = lVar5;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
    _objc_release(lVar5);
    if (bVar1) goto LAB_1052d8d94;
  }
  _objc_release(lVar4);
LAB_1052d8de4:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    _objc_initWeak(auStack_168,lVar9);
    uVar10 = *(undefined8 *)(lVar9 + 8);
    _objc_copyWeak(auStack_178,auStack_168);
    uStack_170 = param_1;
    func_0x00010c0f7fc0(uVar10);
    _objc_destroyWeak(auStack_178);
    _objc_destroyWeak(auStack_168);
    return;
  }
  return;
}



/* Entry: 1052d8e28; end: 1052d8edf; -[SCBatteryCameraMonitor didCameraStopBeingVisibleAtTime:] */

void FUN_1052d8e28(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1052d8ee0; end: 1052d8f13;  */

void FUN_1052d8ee0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be71760(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1052d8f14; end: 1052d8fb7; -[SCBatteryCameraMonitor _performCameraStopBeingVisibleAtTime:] */

void FUN_1052d8f14(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_2 + 0x28);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_2 + 0x28);
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf2bce0();
    _objc_release(lVar2);
    if (lVar1 == 0) {
      puVar3 = PTR_PTR_1126b6ee0;
      _objc_alloc(PTR_PTR_1126b6ee0);
      func_0x00010c0528c0(param_1);
      func_0x00010befa120(*(undefined8 *)(param_2 + 0x28),param_3,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar3);
      return;
    }
  }
  return;
}



/* Entry: 1052d8fb8; end: 1052d9013; -[SCBatteryCameraMonitor updateCameraMetricsWhenEnterBackgroundAtTime:] */

void FUN_1052d8fb8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1052d9014;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_2;
  uStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 8),param_3,&puStack_40);
  return;
}



/* Entry: 1052d9014; end: 1052d9293;  */

void FUN_1052d9014(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      func_0x00010c067ec0(*(undefined8 *)(lVar7 * 8));
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar4;
      func_0x00010c067ec0();
      if ((int)uVar8 == 0) {
        uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar8);
        _objc_release(puVar5);
        lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        if (lVar9 != 0) {
          puVar5 = PTR_PTR_1126b6ed8;
          _objc_alloc(PTR_PTR_1126b6ed8);
          func_0x00010c0528a0(*(undefined8 *)(param_1 + 0x28));
          func_0x00010befa120(lVar9);
          _objc_release(puVar5);
        }
        _objc_release(lVar9);
      }
      _objc_release(uVar4);
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126b6ec8;
  func_0x00010c22b6a0(PTR_PTR_1126b6ec8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284fc0();
  _objc_release(puVar5);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x38) = 0;
  puVar5 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b100(PTR_PTR_1126b6ed0);
  func_0x00010c277620(puVar5);
  _objc_release(puVar5);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30) = 0xbff0000000000000;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _CACurrentMediaTime();
                    /* WARNING: Could not recover jumptable at 0x00010bdccd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar5,PTR_s__appSessionCameraUsageSinceAppOp_112550d00);
  return;
}



/* Entry: 1052d9294; end: 1052d92b7; -[SCBatteryCameraMonitor appSessionCameraUsageSinceAppOpen] */

void FUN_1052d9294(undefined8 param_1)

{
  _CACurrentMediaTime();
                    /* WARNING: Could not recover jumptable at 0x00010bdccd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__appSessionCameraUsageSinceAppOp_112550d00);
  return;
}



/* Entry: 1052d92b8; end: 1052d9387; -[SCBatteryCameraMonitor _appSessionCameraUsageSinceAppOpenUntilTimestamp:] */

void FUN_1052d92b8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_60 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1052d9388;
  uStack_30 = 0x1052d9398;
  uStack_28 = 0;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1052d93a0;
  puStack_70 = &UNK_11084a858;
  lStack_68 = param_2;
  uStack_58 = param_1;
  puStack_48 = puStack_60;
  func_0x00010c0f8240(*(undefined8 *)(param_2 + 8),param_3,&puStack_88);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052d9388; end: 1052d939f;  */

void FUN_1052d9388(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1052d93a0; end: 1052d944b;  */

void FUN_1052d93a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010bf51e00(uVar3);
  uVar4 = uVar2;
  FUN_1052d9b30(uVar6,uVar7,uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar6 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar4;
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052d944c; end: 1052d9453; -[SCBatteryCameraMonitor isCameraOn] */

undefined1 FUN_1052d944c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



/* Entry: 1052d9454; end: 1052d94a7; -[SCBatteryCameraMonitor .cxx_destruct] */

void FUN_1052d9454(long param_1)

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



/* Entry: 1052d94a8; end: 1052d9503; -[SCBatteryCameraOpenStatusChangeActivityItem initWithTimestamp:cameraOpenStatusChangeType:cameraPostion:] */

void FUN_1052d94a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e7540;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  return;
}



/* Entry: 1052d9504; end: 1052d950b; -[SCBatteryCameraOpenStatusChangeActivityItem timestamp] */

undefined8 FUN_1052d9504(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1052d950c; end: 1052d9513; -[SCBatteryCameraOpenStatusChangeActivityItem setTimestamp:] */

void FUN_1052d950c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 1052d9514; end: 1052d951b; -[SCBatteryCameraOpenStatusChangeActivityItem cameraOpenStatusChangeType] */

undefined8 FUN_1052d9514(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1052d951c; end: 1052d9523; -[SCBatteryCameraOpenStatusChangeActivityItem setCameraOpenStatusChangeType:] */

void FUN_1052d951c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 1052d9524; end: 1052d952b; -[SCBatteryCameraOpenStatusChangeActivityItem cameraPostion] */

undefined8 FUN_1052d9524(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1052d952c; end: 1052d9533; -[SCBatteryCameraOpenStatusChangeActivityItem setCameraPostion:] */

void FUN_1052d952c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 1052d9534; end: 1052d953b; -[SCBatteryCameraVisibleStatusChangeActivityItem timestamp] */

undefined8 FUN_1052d9534(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1052d953c; end: 1052d9543; -[SCBatteryCameraVisibleStatusChangeActivityItem setTimestamp:] */

void FUN_1052d953c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 1052d9544; end: 1052d954b; -[SCBatteryCameraVisibleStatusChangeActivityItem cameraVisibleStatusChangeType] */

undefined8 FUN_1052d9544(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1052d954c; end: 1052d9553; -[SCBatteryCameraVisibleStatusChangeActivityItem setCameraVisibleStatusChangeType:] */

void FUN_1052d954c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 1052d9554; end: 1052d9ad3;  */

undefined * FUN_1052d9554(double param_1,long param_2,undefined8 param_3,undefined **param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar2 = param_2;
  func_0x00010bf529e0();
  puVar15 = PTR____NSDictionary0__struct_11034ab58;
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0.0;
    _objc_retain(param_2);
    lVar2 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        func_0x00010befa160(puVar3);
        lVar14 = lVar14 + 1;
      } while (lVar2 != lVar14);
      lVar2 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    puVar4 = puVar3;
    func_0x00010c246ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar4;
    func_0x00010bf529e0();
    if (puVar15 != (undefined *)0x0) {
      puVar15 = (undefined *)0x0;
      dVar18 = -1.0;
      dVar20 = -1.0;
      do {
        dVar17 = param_1;
        puVar7 = puVar4;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar6;
        func_0x00010bf529e0();
        if (dVar18 != -1.0) {
          func_0x00010c2709c0(puVar7);
          dVar17 = dVar17 - dVar18;
          if ((0.0 < dVar17 && 0 < (long)puVar8) && (dVar17 = dVar17 * 1000.0, (long)dVar17 != 0)) {
            dVar17 = 0.0;
            puVar9 = puVar6;
            func_0x00010bf00560();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar9;
            func_0x00010bf52a60();
            lVar2 = lRam0000000000000000;
            while (puVar8 != (undefined *)0x0) {
              puVar16 = (undefined *)0x0;
              do {
                if (lRam0000000000000000 != lVar2) {
                  _objc_enumerationMutation(puVar9);
                }
                puVar10 = puVar5;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                if (puVar10 == (undefined *)0x0) {
                  puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
                  func_0x00010bf71e20();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(puVar5);
                }
                puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
                _objc_retainAutoreleasedReturnValue();
                puVar12 = puVar10;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar11);
                puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                if (puVar12 != (undefined *)0x0) {
                  func_0x00010c067ec0(puVar12);
                }
                func_0x00010c0df840(puVar11);
                _objc_retainAutoreleasedReturnValue();
                puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar10);
                _objc_release(puVar13);
                _objc_release(puVar11);
                _objc_release(puVar12);
                _objc_release(puVar10);
                puVar16 = puVar16 + 1;
              } while (puVar8 != puVar16);
              puVar8 = puVar9;
              func_0x00010bf52a60();
            }
            _objc_release(puVar9);
          }
        }
        puVar9 = puVar7;
        func_0x00010bf2a0c0();
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        dVar19 = dVar20;
        if (puVar9 == (undefined *)0x0) {
          func_0x00010bf2a2e0(puVar7);
          func_0x00010c0df780(puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar6);
          _objc_release(puVar8);
          puVar8 = puVar6;
          func_0x00010bf529e0();
          if (puVar8 == (undefined *)0x1) {
            func_0x00010c2709c0(puVar7);
            dVar19 = dVar17;
          }
        }
        else {
          puVar9 = puVar7;
          func_0x00010bf2a0c0();
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (puVar9 == (undefined *)0x1) {
            func_0x00010bf2a2e0(puVar7);
            func_0x00010c0df780(puVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d360(puVar6);
            _objc_release(puVar8);
            puVar8 = puVar6;
            func_0x00010bf529e0();
            if ((puVar8 == (undefined *)0x0) && (dVar19 = -1.0, dVar20 != -1.0)) {
              func_0x00010c2709c0(puVar7);
              dVar17 = dVar17 - dVar20;
              if (0.0 < dVar17) {
                dVar17 = dVar17 * 1000.0;
              }
            }
          }
        }
        func_0x00010c2709c0(puVar7);
        param_1 = dVar17;
        _objc_release(puVar7);
        puVar15 = puVar15 + 1;
        puVar7 = puVar4;
        func_0x00010bf529e0();
        dVar18 = dVar17;
        dVar20 = dVar19;
      } while (puVar15 < puVar7);
    }
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    puStack_1b0 = puVar7;
    func_0x00010bf51e00();
    param_4 = &puStack_1b0;
    puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_1a8 = puVar8;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  func_0x00010c2709c0(param_3);
  dVar18 = param_1;
  func_0x00010c2709c0(param_4);
  _objc_release(param_4);
  puVar15 = (undefined *)0xffffffffffffffff;
  if (dVar18 <= param_1) {
    puVar15 = (undefined *)0x1;
  }
  return puVar15;
}



/* Entry: 1052d9ad4; end: 1052d9b2f;  */

undefined8 FUN_1052d9ad4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  double dVar2;
  
  _objc_retain(param_4);
  func_0x00010c2709c0(param_3);
  dVar2 = param_1;
  func_0x00010c2709c0(param_4);
  _objc_release(param_4);
  uVar1 = 0xffffffffffffffff;
  if (dVar2 <= param_1) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1052d9b30; end: 1052daa67;  */

undefined1 *
FUN_1052d9b30(double param_1,double param_2,long param_3,ulong param_4,undefined **param_5,
             undefined ***param_6)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *unaff_x20;
  undefined *puVar12;
  undefined *unaff_x21;
  ulong uVar13;
  undefined *unaff_x22;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined *puVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  long lStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined1 *puStack_2a0;
  code *pcStack_298;
  ulong uStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  long lStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar21 = param_1;
  lStack_268 = param_3;
  _objc_retain();
  _objc_retain(param_4);
  puVar14 = PTR____NSDictionary0__struct_11034ab58;
  if ((((param_1 <= param_2) && (param_1 != 0.0)) && (param_2 != 0.0)) &&
     (lVar16 = lStack_268, func_0x00010bf529e0(), lVar16 != 0)) {
    _objc_retain(param_4);
    uVar13 = param_4;
    func_0x00010bf529e0();
    unaff_x21 = PTR____NSArray0__struct_11034ab48;
    uStack_288 = param_4;
    if (uVar13 != 0) {
      _objc_retain(param_4);
      uVar13 = param_4;
      func_0x00010bf529e0();
      puVar14 = PTR____NSArray0__struct_11034ab48;
      if (uVar13 != 0) {
        puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = param_4;
        func_0x00010bf529e0();
        if (uVar13 != 0) {
          uVar13 = 0;
          bVar1 = false;
          do {
            uVar18 = param_4;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar18;
            func_0x00010bf2bce0();
            if (bVar1) {
              if (uVar2 == 0) {
                bVar1 = true;
              }
              else {
LAB_1052d9c44:
                uVar2 = uVar18;
                func_0x00010bf2bce0();
                if ((uVar2 == 0) || (uVar3 = uVar18, func_0x00010bf2bce0(), uVar3 == 1)) {
                  func_0x00010befa120(puVar12);
                  bVar1 = uVar2 == 0;
                }
              }
            }
            else {
              if (uVar2 != 1) goto LAB_1052d9c44;
              bVar1 = false;
            }
            _objc_release(uVar18);
            uVar13 = uVar13 + 1;
            uVar18 = param_4;
            func_0x00010bf529e0();
          } while (uVar13 < uVar18);
        }
        puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar12;
        func_0x00010bf529e0();
        if (puVar14 != (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
          do {
            puVar17 = puVar12;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            if (puVar14 == (undefined *)0x0) {
              func_0x00010befa120();
            }
            else {
              puVar4 = puVar11;
              func_0x00010c089820();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2709c0();
              dVar23 = dVar21;
              func_0x00010c2709c0(puVar17);
              if (dVar21 == dVar23) {
                puVar5 = puVar4;
                func_0x00010bf2bce0();
                puVar19 = puVar17;
                func_0x00010bf2bce0();
                param_4 = uStack_288;
                if (puVar5 == puVar19) goto LAB_1052d9d24;
                func_0x00010c12cd60(puVar11);
              }
              else {
LAB_1052d9d24:
                func_0x00010befa120(puVar11);
              }
              _objc_release(puVar4);
              dVar21 = dVar23;
            }
            _objc_release(puVar17);
            puVar14 = puVar14 + 1;
            puVar17 = puVar12;
            func_0x00010bf529e0();
          } while (puVar14 < puVar17);
        }
        puVar14 = puVar11;
        func_0x00010bf51e00();
        _objc_release(puVar11);
        _objc_release(puVar12);
      }
      _objc_release(param_4);
      puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar14;
      func_0x00010bf529e0();
      if (puVar11 != (undefined *)0x0) {
        puVar11 = (undefined *)0x0;
        do {
          puVar17 = puVar14;
          func_0x00010c0dfd40(puVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2709c0();
          if ((param_1 <= dVar21) && (func_0x00010c2709c0(puVar17), dVar21 <= param_2)) {
            func_0x00010befa120(puVar12);
          }
          _objc_release(puVar17);
          puVar11 = puVar11 + 1;
          puVar17 = puVar14;
          func_0x00010bf529e0();
        } while (puVar11 < puVar17);
      }
      puVar11 = puVar12;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar11;
      func_0x00010bf2bce0();
      if ((puVar17 == (undefined *)0x1) && (func_0x00010c2709c0(puVar11), param_1 <= dVar21)) {
        puVar17 = PTR_PTR_1126b6ee0;
        _objc_alloc(PTR_PTR_1126b6ee0);
        dVar21 = param_1;
        func_0x00010c0528c0();
        func_0x00010c066b00(puVar12);
        _objc_release(puVar17);
      }
      puVar17 = puVar12;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar17;
      func_0x00010bf2bce0();
      if ((puVar4 == (undefined *)0x0) && (func_0x00010c2709c0(puVar17), dVar21 <= param_2)) {
        puVar4 = PTR_PTR_1126b6ee0;
        _objc_alloc(PTR_PTR_1126b6ee0);
        func_0x00010c0528c0(param_2);
        func_0x00010befa120(puVar12);
        _objc_release(puVar4);
      }
      unaff_x21 = puVar12;
      func_0x00010bf51e00();
      _objc_release(puVar17);
      _objc_release(puVar11);
      _objc_release(puVar12);
      _objc_release(puVar14);
    }
    _objc_release(param_4);
    unaff_x22 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lStack_268;
    dVar21 = 0.0;
    lStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    puStack_200 = (undefined8 *)0x0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    _objc_retain(lStack_268);
    func_0x00010bf52a60();
    puStack_260 = unaff_x22;
    if (lVar16 != 0) {
      puStack_258 = (undefined *)*puStack_200;
      do {
        lVar15 = 0;
        do {
          if ((undefined *)*puStack_200 != puStack_258) {
            _objc_enumerationMutation(lStack_268);
          }
          uVar18 = *(ulong *)(lStack_208 + lVar15 * 8);
          _objc_retain(uVar18);
          uVar13 = uVar18;
          func_0x00010bf529e0();
          puVar14 = PTR____NSArray0__struct_11034ab48;
          if (uVar13 != 0) {
            _objc_retain(uVar18);
            uVar13 = uVar18;
            func_0x00010bf529e0();
            puVar12 = PTR____NSArray0__struct_11034ab48;
            if (uVar13 != 0) {
              puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              func_0x00010bf09f00();
              _objc_retainAutoreleasedReturnValue();
              uVar13 = uVar18;
              func_0x00010bf529e0();
              if (uVar13 != 0) {
                uVar13 = 0;
                bVar1 = false;
                do {
                  uVar2 = uVar18;
                  func_0x00010c0dfd40();
                  _objc_retainAutoreleasedReturnValue();
                  uVar3 = uVar2;
                  func_0x00010bf2a0c0();
                  if (bVar1) {
                    if (uVar3 == 0) {
                      bVar1 = true;
                    }
                    else {
LAB_1052da034:
                      uVar3 = uVar2;
                      func_0x00010bf2a0c0();
                      if ((uVar3 == 0) || (uVar6 = uVar2, func_0x00010bf2a0c0(), uVar6 == 1)) {
                        func_0x00010befa120(puVar14);
                        bVar1 = uVar3 == 0;
                      }
                    }
                  }
                  else {
                    if (uVar3 != 1) goto LAB_1052da034;
                    bVar1 = false;
                  }
                  _objc_release(uVar2);
                  uVar13 = uVar13 + 1;
                  uVar2 = uVar18;
                  func_0x00010bf529e0();
                } while (uVar13 < uVar2);
              }
              puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              func_0x00010bf09f00();
              _objc_retainAutoreleasedReturnValue();
              puVar12 = puVar14;
              func_0x00010bf529e0();
              if (puVar12 != (undefined *)0x0) {
                puVar12 = (undefined *)0x0;
                do {
                  puVar17 = puVar14;
                  func_0x00010c0dfd40();
                  _objc_retainAutoreleasedReturnValue();
                  if (puVar12 == (undefined *)0x0) {
                    func_0x00010befa120();
                  }
                  else {
                    puVar4 = puVar11;
                    func_0x00010c089820();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c2709c0();
                    dVar23 = dVar21;
                    func_0x00010c2709c0(puVar17);
                    if (dVar21 == dVar23) {
                      puVar5 = puVar4;
                      func_0x00010bf2a0c0();
                      puVar19 = puVar17;
                      func_0x00010bf2a0c0();
                      if (puVar5 == puVar19) goto LAB_1052da110;
                      func_0x00010c12cd60(puVar11);
                    }
                    else {
LAB_1052da110:
                      func_0x00010befa120(puVar11);
                    }
                    _objc_release(puVar4);
                    dVar21 = dVar23;
                  }
                  _objc_release(puVar17);
                  puVar12 = puVar12 + 1;
                  puVar17 = puVar14;
                  func_0x00010bf529e0();
                } while (puVar12 < puVar17);
              }
              puVar12 = puVar11;
              func_0x00010bf51e00();
              _objc_release(puVar11);
              _objc_release(puVar14);
            }
            _objc_release(uVar18);
            puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar12;
            func_0x00010bf529e0();
            if (puVar14 != (undefined *)0x0) {
              puVar14 = (undefined *)0x0;
              do {
                puVar17 = puVar12;
                func_0x00010c0dfd40(puVar12);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c2709c0();
                if ((param_1 <= dVar21) && (func_0x00010c2709c0(puVar17), dVar21 <= param_2)) {
                  func_0x00010befa120(puVar11);
                }
                _objc_release(puVar17);
                puVar14 = puVar14 + 1;
                puVar17 = puVar12;
                func_0x00010bf529e0();
              } while (puVar14 < puVar17);
            }
            puVar17 = puVar11;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar17;
            func_0x00010bf2a0c0();
            if ((puVar14 == (undefined *)0x1) && (func_0x00010c2709c0(puVar17), param_1 <= dVar21))
            {
              puVar14 = PTR_PTR_1126b6ed8;
              _objc_alloc(PTR_PTR_1126b6ed8);
              func_0x00010bf2a2e0(puVar17);
              dVar21 = param_1;
              func_0x00010c0528a0(puVar14);
              func_0x00010c066b00(puVar11);
              _objc_release(puVar14);
            }
            puVar4 = puVar11;
            func_0x00010c089820();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar4;
            func_0x00010bf2a0c0();
            if ((puVar14 == (undefined *)0x0) && (func_0x00010c2709c0(puVar4), dVar21 <= param_2)) {
              puVar14 = PTR_PTR_1126b6ed8;
              _objc_alloc(PTR_PTR_1126b6ed8);
              func_0x00010bf2a2e0(puVar4);
              dVar21 = param_2;
              func_0x00010c0528a0(puVar14);
              func_0x00010befa120(puVar11);
              _objc_release(puVar14);
            }
            puVar14 = puVar11;
            func_0x00010bf51e00(puVar11);
            _objc_release(puVar4);
            _objc_release(puVar17);
            _objc_release(puVar11);
            _objc_release(puVar12);
            unaff_x22 = puStack_260;
          }
          _objc_release(uVar18);
          func_0x00010befa120(unaff_x22);
          _objc_release(puVar14);
          lVar15 = lVar15 + 1;
        } while (lVar15 != lVar16);
        lVar16 = lStack_268;
        func_0x00010bf52a60();
      } while (lVar16 != 0);
    }
    _objc_release(lStack_268);
    puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    dVar21 = 0.0;
    lStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    plStack_240 = (long *)0x0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    _objc_retain(unaff_x22);
    puVar14 = unaff_x22;
    func_0x00010bf52a60();
    if (puVar14 != (undefined *)0x0) {
      lVar16 = *plStack_240;
      puVar11 = PTR____NSArray0__struct_11034ab48;
      puStack_280 = puVar12;
      do {
        puVar17 = (undefined *)0x0;
        puVar4 = puVar11;
        do {
          if (*plStack_240 != lVar16) {
            _objc_enumerationMutation(unaff_x22);
          }
          puVar19 = *(undefined **)(lStack_248 + (long)puVar17 * 8);
          _objc_retain(puVar19);
          _objc_retain(unaff_x21);
          puVar5 = puVar19;
          func_0x00010bf529e0();
          puVar11 = puVar4;
          if (((undefined *)0x1 < puVar5) &&
             (puVar5 = unaff_x21, func_0x00010bf529e0(), (undefined *)0x1 < puVar5)) {
            puVar5 = puVar19;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar5;
            func_0x00010bf2a0c0();
            _objc_release(puVar5);
            if (puVar7 == (undefined *)0x0) {
              puVar5 = puVar19;
              func_0x00010c089820();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar5;
              func_0x00010bf2a0c0();
              _objc_release(puVar5);
              if (puVar7 == (undefined *)0x1) {
                puVar5 = unaff_x21;
                func_0x00010bfb1920();
                _objc_retainAutoreleasedReturnValue();
                puVar7 = puVar5;
                func_0x00010bf2bce0();
                _objc_release(puVar5);
                if (puVar7 == (undefined *)0x0) {
                  puVar5 = unaff_x21;
                  func_0x00010c089820();
                  _objc_retainAutoreleasedReturnValue();
                  puVar7 = puVar5;
                  func_0x00010bf2bce0();
                  _objc_release(puVar5);
                  if (puVar7 == (undefined *)0x1) {
                    puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                    func_0x00010bf09f00();
                    _objc_retainAutoreleasedReturnValue();
                    puVar11 = puVar19;
                    puStack_258 = puVar12;
                    func_0x00010bf529e0();
                    if (puVar11 != (undefined *)0x0) {
                      puVar11 = (undefined *)0x0;
                      puVar12 = (undefined *)0x0;
                      do {
                        puVar4 = unaff_x21;
                        func_0x00010bf529e0();
                        if (puVar4 <= puVar11) break;
                        dVar24 = -1.0;
                        dVar23 = -1.0;
                        do {
                          puVar4 = puVar11;
                          if (dVar24 == -1.0) {
                            puVar11 = unaff_x21;
                            func_0x00010c0dfd40();
                            _objc_retainAutoreleasedReturnValue();
                            puVar5 = puVar11;
                            func_0x00010bf2bce0();
                            dVar24 = -1.0;
                            if (puVar5 == (undefined *)0x0) {
                              func_0x00010c2709c0(puVar11);
                              dVar24 = dVar21;
                            }
                            _objc_release(puVar11);
                          }
                          if (dVar23 == -1.0) {
                            puVar11 = unaff_x21;
                            func_0x00010c0dfd40();
                            _objc_retainAutoreleasedReturnValue();
                            puVar5 = puVar11;
                            func_0x00010bf2bce0();
                            dVar23 = -1.0;
                            if (puVar5 == (undefined *)0x1) {
                              func_0x00010c2709c0(puVar11);
                              dVar23 = dVar21;
                            }
                            _objc_release(puVar11);
                          }
                          bVar1 = true;
                          if ((dVar24 != -1.0) && (bVar1 = false, !NAN(dVar23))) {
                            bVar1 = dVar23 == -1.0;
                          }
                          dVar22 = dVar23;
                          if ((!bVar1) && (dVar22 = -1.0, dVar24 <= dVar23)) break;
                          dVar23 = dVar22;
                          puVar11 = puVar4 + 1;
                          puVar5 = unaff_x21;
                          func_0x00010bf529e0();
                        } while (puVar11 < puVar5);
                        if (dVar24 == -1.0) break;
                        dVar22 = dVar21;
                        if (dVar23 == -1.0) {
                          puVar11 = unaff_x21;
                          func_0x00010c089820(unaff_x21);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c2709c0();
                          dVar22 = dVar21;
                          _objc_release(puVar11);
                          dVar23 = dVar21;
                        }
                        dVar21 = dVar22;
                        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                        func_0x00010bf09f00();
                        _objc_retainAutoreleasedReturnValue();
                        for (; puVar11 = puVar19, func_0x00010bf529e0(), puVar12 < puVar11;
                            puVar12 = puVar12 + 1) {
                          puVar11 = puVar19;
                          func_0x00010c0dfd40(puVar19);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c2709c0();
                          if (dVar23 < dVar21) {
                            _objc_release(puVar11);
                            break;
                          }
                          func_0x00010c2709c0(puVar11);
                          if (dVar24 <= dVar21) {
                            func_0x00010befa120(puVar5);
                          }
                          _objc_release(puVar11);
                        }
                        puVar11 = puVar5;
                        func_0x00010bf529e0();
                        if (puVar11 == (undefined *)0x0) {
                          puVar11 = puVar19;
                          func_0x00010bf529e0();
                          if (puVar12 < puVar11) {
                            puVar11 = puVar19;
                            func_0x00010c0dfd40();
                            _objc_retainAutoreleasedReturnValue();
                            puVar7 = puVar11;
                            func_0x00010bf2a0c0();
                            if (puVar7 == (undefined *)0x1) {
                              puVar7 = PTR_PTR_1126b6ed8;
                              _objc_alloc();
                              func_0x00010bf2a2e0(puVar11);
                              func_0x00010c0528a0(dVar24);
                              func_0x00010befa120(puVar5);
                              puVar20 = puVar11;
                              goto LAB_1052da7a0;
                            }
                            goto LAB_1052da7fc;
                          }
                        }
                        else {
                          puVar11 = puVar5;
                          func_0x00010bfb1920();
                          _objc_retainAutoreleasedReturnValue();
                          puVar7 = puVar11;
                          func_0x00010bf2a0c0();
                          if (puVar7 == (undefined *)0x1) {
                            puVar7 = PTR_PTR_1126b6ed8;
                            _objc_alloc(PTR_PTR_1126b6ed8);
                            func_0x00010bf2a2e0(puVar11);
                            func_0x00010c0528a0(puVar7);
                            func_0x00010c066b00(puVar5);
                            _objc_release(puVar7);
                            dVar21 = dVar24;
                          }
                          puVar7 = puVar5;
                          func_0x00010c089820();
                          _objc_retainAutoreleasedReturnValue();
                          puVar8 = puVar7;
                          func_0x00010bf2a0c0();
                          puVar20 = puVar7;
                          if (puVar8 == (undefined *)0x0) {
LAB_1052da7a0:
                            puVar8 = PTR_PTR_1126b6ed8;
                            puStack_278 = puVar7;
                            puStack_270 = puVar11;
                            _objc_alloc(PTR_PTR_1126b6ed8);
                            func_0x00010bf2a2e0(puVar20);
                            func_0x00010c0528a0(puVar8);
                            func_0x00010befa120(puVar5);
                            puVar11 = puStack_270;
                            _objc_release(puVar8);
                            puVar7 = puStack_278;
                            dVar21 = dVar23;
                          }
                          _objc_release(puVar7);
LAB_1052da7fc:
                          _objc_release(puVar11);
                          unaff_x22 = puStack_260;
                        }
                        puVar11 = puVar4 + 1;
                        func_0x00010befa160(puStack_258);
                        _objc_release(puVar5);
                        puVar4 = puVar19;
                        func_0x00010bf529e0();
                      } while (puVar12 < puVar4);
                    }
                    puVar12 = puStack_258;
                    puVar4 = puStack_258;
                    func_0x00010bf51e00(puStack_258);
                    _objc_release(puVar12);
                    puVar12 = puStack_280;
                    puVar11 = PTR____NSArray0__struct_11034ab48;
                  }
                }
              }
            }
          }
          _objc_release(unaff_x21);
          _objc_release(puVar19);
          func_0x00010befa120(puVar12);
          _objc_release(puVar4);
          puVar17 = puVar17 + 1;
          puVar4 = puVar11;
        } while (puVar17 != puVar14);
        puVar14 = unaff_x22;
        func_0x00010bf52a60();
      } while (puVar14 != (undefined *)0x0);
    }
    _objc_release(unaff_x22);
    puVar14 = unaff_x22;
    func_0x00010bf51e00();
    unaff_x20 = puVar14;
    FUN_1052d9554();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    puVar14 = puVar12;
    func_0x00010bf51e00();
    puVar11 = puVar14;
    FUN_1052d9554();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    ppuStack_1d0 = &PTR____CFConstantStringClassReference_110dcfef8;
    puVar17 = unaff_x20;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_1c8 = &PTR____CFConstantStringClassReference_110dcff38;
    puVar4 = puVar11;
    puStack_1b0 = puVar17;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_1c0 = &PTR____CFConstantStringClassReference_110dcff18;
    puVar5 = unaff_x20;
    puStack_1a8 = puVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_1b8 = &PTR____CFConstantStringClassReference_110dcff58;
    puVar19 = puVar11;
    puStack_1a0 = puVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    param_5 = &puStack_1b0;
    param_6 = &ppuStack_1d0;
    puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_198 = puVar19;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar19);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar17);
    _objc_release(puVar11);
    _objc_release(unaff_x20);
    _objc_release(puVar12);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    param_4 = uStack_288;
  }
  _objc_release(param_4);
  lVar16 = lStack_268;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
    return puVar14;
  }
  ___stack_chk_fail();
  plVar9 = &lStack_2d0;
  pcStack_298 = FUN_1052daa68;
  puStack_2c0 = unaff_x22;
  puStack_2b8 = unaff_x21;
  puStack_2b0 = unaff_x20;
  puStack_2a8 = puVar14;
  puStack_2a0 = &stack0xfffffffffffffff0;
  _objc_retain(param_5);
  puStack_2c8 = PTR_PTR_1126e7550;
  lStack_2d0 = lVar16;
  _objc_msgSendSuper2(&lStack_2d0,PTR_s_init_1125d9248);
  if (plVar9 != (long *)0x0) {
    _objc_retain(param_5);
    uVar10 = *(undefined8 *)((long)plVar9 + 8);
    *(undefined ***)((long)plVar9 + 8) = param_5;
    _objc_release(uVar10);
    *(undefined ****)((long)plVar9 + 0x10) = param_6;
  }
  _objc_release(param_5);
  return (undefined1 *)plVar9;
}



/* Entry: 1052daa68; end: 1052daaeb; -[SCGPSUpdateStatusChangeItem initWithTimestamp:type:] */

undefined1 *
FUN_1052daa68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e7550;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1052daaec; end: 1052daaf3; -[SCGPSUpdateStatusChangeItem timestamp] */

undefined8 FUN_1052daaec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1052daaf4; end: 1052dab23; -[SCGPSUpdateStatusChangeItem setTimestamp:] */

void FUN_1052daaf4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1052dab24; end: 1052dab2b; -[SCGPSUpdateStatusChangeItem type] */

undefined8 FUN_1052dab24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1052dab2c; end: 1052dab33; -[SCGPSUpdateStatusChangeItem setType:] */

void FUN_1052dab2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 1052dab34; end: 1052dab3f; -[SCGPSUpdateStatusChangeItem .cxx_destruct] */

void FUN_1052dab34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052dab40; end: 1052dabc3; -[SCLocationUpdateRequestItem initWithStartTimestamp:appState:] */

undefined1 *
FUN_1052dab40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e7558;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1052dabc4; end: 1052dabcb; -[SCLocationUpdateRequestItem startTime] */

undefined8 FUN_1052dabc4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1052dabcc; end: 1052dabfb; -[SCLocationUpdateRequestItem setStartTime:] */

void FUN_1052dabcc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1052dabfc; end: 1052dac03; -[SCLocationUpdateRequestItem appStateWhenRequestStart] */

undefined8 FUN_1052dabfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1052dac04; end: 1052dac0b; -[SCLocationUpdateRequestItem setAppStateWhenRequestStart:] */

void FUN_1052dac04(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 1052dac0c; end: 1052dac13; -[SCLocationUpdateRequestItem tracingId] */

undefined8 FUN_1052dac0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1052dac14; end: 1052dac1b; -[SCLocationUpdateRequestItem setTracingId:] */

void FUN_1052dac14(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 1052dac1c; end: 1052dac27; -[SCLocationUpdateRequestItem .cxx_destruct] */

void FUN_1052dac1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052dac28; end: 1052dacd3; -[SCLocationUpdateRequestStatusChangeItem initWithTimestamp:caller:type:] */

undefined1 *
FUN_1052dac28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7560;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1052dacd4; end: 1052dacdb; -[SCLocationUpdateRequestStatusChangeItem timestamp] */

undefined8 FUN_1052dacd4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1052dacdc; end: 1052dad0b; -[SCLocationUpdateRequestStatusChangeItem setTimestamp:] */

void FUN_1052dacdc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1052dad0c; end: 1052dad13; -[SCLocationUpdateRequestStatusChangeItem caller] */

undefined8 FUN_1052dad0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1052dad14; end: 1052dad1b; -[SCLocationUpdateRequestStatusChangeItem setCaller:] */

void FUN_1052dad14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1052dad1c; end: 1052dad23; -[SCLocationUpdateRequestStatusChangeItem type] */

undefined8 FUN_1052dad1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1052dad24; end: 1052dad2b; -[SCLocationUpdateRequestStatusChangeItem setType:] */

void FUN_1052dad24(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 1052dad2c; end: 1052dad5b; -[SCLocationUpdateRequestStatusChangeItem .cxx_destruct] */

void FUN_1052dad2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052dad5c; end: 1052dae5f; -[SCBatteryGPSMonitor didStartUpdatingLocation:startTime:] */

void FUN_1052dad5c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1052dae60; end: 1052daebb;  */

void FUN_1052dae60(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdcca80();
  _objc_release(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be008e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052daebc; end: 1052dafdf; -[SCBatteryGPSMonitor _didStartUpdatingLocation:startTime:inBackground:] */

void FUN_1052daebc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if ((lVar1 == 0) && ((*(byte *)(param_1 + 0x99) & 1) == 0)) {
    *(undefined2 *)(param_1 + 0x98) = 0x101;
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b6ed0;
    func_0x00010bfcd700(PTR_PTR_1126b6ed0);
    func_0x00010c277620(puVar2,param_2,&PTR____CFConstantStringClassReference_110dd0058,puVar3);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b6ee8;
    _objc_alloc(PTR_PTR_1126b6ee8);
    func_0x00010c052a00();
    if ((param_5 & 1) == 0) {
      puVar3 = PTR_PTR_1126b6ec8;
      func_0x00010c22b6a0(PTR_PTR_1126b6ec8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c285000();
      _objc_release(puVar3);
      lVar1 = 0x50;
    }
    else {
      lVar1 = 0x60;
    }
    func_0x00010befa120(*(undefined8 *)(param_1 + lVar1),param_2,puVar2);
    _objc_release(puVar2);
  }
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052dafe0; end: 1052db0e3; -[SCBatteryGPSMonitor didStopUpdatingLocation:stopTime:] */

void FUN_1052dafe0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1052db0e4; end: 1052db13f;  */

void FUN_1052db0e4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdcca80();
  _objc_release(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be009a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052db140; end: 1052db24b; -[SCBatteryGPSMonitor _didStopUpdatingLocation:stopTime:inBackground:] */

void FUN_1052db140(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if ((lVar1 == 0) && (*(char *)(param_1 + 0x99) == '\x01')) {
    *(undefined1 *)(param_1 + 0x99) = 0;
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b6ed0;
    func_0x00010bfcd6e0(PTR_PTR_1126b6ed0);
    func_0x00010c277620(puVar2,param_2,&PTR____CFConstantStringClassReference_110dd0058,puVar3);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b6ee8;
    _objc_alloc(PTR_PTR_1126b6ee8);
    func_0x00010c052a00();
    if ((param_5 & 1) == 0) {
      puVar3 = PTR_PTR_1126b6ec8;
      func_0x00010c22b6a0(PTR_PTR_1126b6ec8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c285000();
      _objc_release(puVar3);
      lVar1 = 0x58;
    }
    else {
      lVar1 = 0x68;
    }
    func_0x00010befa120(*(undefined8 *)(param_1 + lVar1),param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1052db24c; end: 1052db35f; -[SCBatteryGPSMonitor didRequestStartUpdatingLocationWithAttributedFeature:startTime:userDidGrantAuthorization:] */

void FUN_1052db24c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    uStack_50 = param_5;
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1052db360; end: 1052db3bf;  */

void FUN_1052db360(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdcca80();
  _objc_release(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4f680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052db3c0; end: 1052db6d7; -[SCBatteryGPSMonitor _locationManagerDidRequestStartUpdatingLocationWithAttributedFeature:startTime:userDidGrantAuthorization:inBackground:] */

void FUN_1052db3c0(long param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  undefined **param_5,undefined **param_6)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined1 uVar6;
  undefined *puVar7;
  undefined *unaff_x24;
  undefined1 auStack_c8 [8];
  undefined1 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  long lStack_90;
  undefined **ppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = param_3;
  ppuVar5 = param_4;
  ppuVar4 = param_5;
  _objc_retain(param_4);
  uVar6 = SUB81(ppuVar4,0);
  *(char *)(param_1 + 0x98) = (char)param_5;
  if ((int)param_5 != 0) {
    _objc_retain(param_3);
    ppuVar1 = param_3;
    func_0x00010bfa28e0();
    _objc_retainAutoreleasedReturnValue();
    param_5 = ppuVar1;
    func_0x00010bf51e00();
    _objc_release(ppuVar1);
    unaff_x24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0854a0(param_3);
    _objc_release(param_3);
    param_3 = (undefined **)unaff_x24;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x90));
    _objc_release(param_3);
    ppuVar5 = param_5;
    if (((ulong)param_6 & 1) == 0) {
      lVar2 = *(long *)(param_1 + 0x30);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 == 0) {
        puVar7 = PTR_PTR_1126b6ef0;
        _objc_alloc(PTR_PTR_1126b6ef0);
        func_0x00010c04bc20();
        param_3 = &PTR____CFConstantStringClassReference_110dd0018;
        func_0x00010c25ce40();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = PTR_PTR_1126ae4e8;
        func_0x00010c22b6a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf17b60();
        _objc_release(unaff_x24);
        func_0x00010c218ea0(puVar7);
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
        ppuStack_68 = &PTR____CFConstantStringClassReference_110dd0078;
        ppuStack_60 = param_4;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(param_3);
        _objc_release(puVar7);
      }
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
      param_6 = (undefined **)PTR_PTR_1126b6ef8;
      _objc_alloc();
      uVar6 = 0;
      func_0x00010c052880();
      uVar3 = *(undefined8 *)(param_1 + 0x70);
    }
    else {
      lVar2 = *(long *)(param_1 + 0x38);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 == 0) {
        puVar7 = PTR_PTR_1126b6ef0;
        _objc_alloc(PTR_PTR_1126b6ef0);
        func_0x00010c04bc20();
        param_3 = &PTR____CFConstantStringClassReference_110dd0018;
        func_0x00010c25ce40();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = PTR_PTR_1126ae4e8;
        func_0x00010c22b6a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf17b60();
        _objc_release(unaff_x24);
        func_0x00010c218ea0(puVar7);
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x38));
        _objc_release(param_3);
        _objc_release(puVar7);
      }
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
      param_6 = (undefined **)PTR_PTR_1126b6ef8;
      _objc_alloc();
      uVar6 = 0;
      func_0x00010c052880();
      uVar3 = *(undefined8 *)(param_1 + 0x80);
    }
    ppuVar1 = param_6;
    func_0x00010befa120(uVar3);
    _objc_release(param_6);
    _objc_release(param_5);
  }
  ppuVar4 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_1052db6d8;
  puStack_b0 = unaff_x24;
  ppuStack_a8 = param_3;
  ppuStack_a0 = param_6;
  ppuStack_98 = param_5;
  lStack_90 = param_1;
  ppuStack_88 = param_4;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar1);
  _objc_retain(ppuVar5);
  if (ppuVar1 != (undefined **)0x0) {
    _objc_initWeak(auStack_b8,ppuVar4);
    puVar7 = ppuVar4[1];
    _objc_copyWeak(auStack_c8,auStack_b8);
    _objc_retain(ppuVar1);
    _objc_retain(ppuVar5);
    uStack_c0 = uVar6;
    func_0x00010c0f7fc0(puVar7);
    _objc_release(ppuVar5);
    _objc_release(ppuVar1);
    _objc_destroyWeak(auStack_c8);
    _objc_destroyWeak(auStack_b8);
  }
  _objc_release(ppuVar5);
  _objc_release(ppuVar1);
  return;
}



/* Entry: 1052db6d8; end: 1052db7eb; -[SCBatteryGPSMonitor didRequestStopUpdatingLocationWithAttributedFeature:stopTime:userDidGrantAuthorization:] */

void FUN_1052db6d8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    uStack_50 = param_5;
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1052db7ec; end: 1052db84b;  */

void FUN_1052db7ec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdcca80();
  _objc_release(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4f6a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052db84c; end: 1052db993; -[SCBatteryGPSMonitor _locationManagerDidRequestStopUpdatingLocationWithAttributedFeature:endTime:userDidGrantAuthorization:inBackground:] */

void FUN_1052db84c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  ,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  if (param_5 != 0) {
    _objc_retain(param_3);
    uVar4 = param_3;
    func_0x00010bfa28e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf51e00();
    _objc_release(uVar4);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar4 = param_3;
    func_0x00010c0854a0(param_3);
    _objc_release(param_3);
    func_0x00010c0df780(puVar6,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x90),param_2,puVar6,uVar5);
    _objc_release(puVar6);
    func_0x00010be557a0(param_1,param_2,uVar5,1,param_4,param_6);
    puVar6 = PTR_PTR_1126b6ef8;
    _objc_alloc(PTR_PTR_1126b6ef8);
    func_0x00010c052880();
    bVar3 = (int)param_6 == 0;
    lVar1 = 0x88;
    if (bVar3) {
      lVar1 = 0x78;
    }
    lVar2 = 0x28;
    if (bVar3) {
      lVar2 = 0x20;
    }
    func_0x00010befa120(*(undefined8 *)(param_1 + lVar1),param_2,puVar6);
    func_0x00010c12d360(*(undefined8 *)(param_1 + lVar2),param_2,uVar5);
    _objc_release(puVar6);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1052db994; end: 1052dbc7f; -[SCBatteryGPSMonitor _logLocationUpdateRequestEndForCaller:stoppedByCaller:endTime:inBackground:] */

void FUN_1052db994(double param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined *param_5,undefined8 param_6,uint param_7)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined *puVar9;
  undefined1 auStack_138 [8];
  undefined1 uStack_130;
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  long lStack_b8;
  int iStack_ac;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_5;
  _objc_retain(param_4);
  uVar8 = SUB81(puVar9,0);
  _objc_retain(param_6);
  lVar2 = 0x38;
  if (param_7 == 0) {
    lVar2 = 0x30;
  }
  lVar2 = *(long *)(param_2 + lVar2);
  puVar7 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    puVar9 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    iStack_ac = (int)param_5;
    func_0x00010c2778e0(lVar2);
    func_0x00010bf941e0(puVar9);
    _objc_release(puVar9);
    lVar3 = lVar2;
    func_0x00010c250f20();
    _objc_retainAutoreleasedReturnValue();
    lStack_b8 = lVar3;
    func_0x00010c26f380(param_6);
    func_0x00010bf062c0();
    puVar4 = PTR_PTR_1126b6f00;
    _objc_opt_new(PTR_PTR_1126b6f00);
    lStack_c0 = (long)(param_1 * 1000.0);
    func_0x00010c192e60();
    func_0x00010c175c40(puVar4);
    puVar9 = PTR_PTR_1126b6f08;
    uVar5 = *(undefined8 *)(param_2 + 0x90);
    func_0x00010c0e00e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    func_0x00010bfc51e0(puVar9);
    iVar1 = iStack_ac;
    _objc_release(uVar5);
    puVar9 = PTR_PTR_1126b6f08;
    func_0x00010bfc9240(PTR_PTR_1126b6f08);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b66c0(puVar4);
    _objc_release(puVar9);
    func_0x00010c1691e0(puVar4);
    func_0x00010c226f20(puVar4);
    param_5 = *(undefined **)(param_2 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b29e0();
    _objc_release(param_5);
    if ((param_7 & 1) == 0) {
      func_0x00010c12d3e0(*(undefined8 *)(param_2 + 0x30));
      ppuStack_a8 = &PTR____CFConstantStringClassReference_110dd0098;
      ppuStack_a0 = &PTR____CFConstantStringClassReference_110dd00b8;
      param_5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uStack_90 = param_6;
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_98 = &PTR____CFConstantStringClassReference_110dd00d8;
      ppuStack_80 = &PTR____CFConstantStringClassReference_110dd00f8;
      if (iVar1 == 0) {
        ppuStack_80 = &PTR____CFConstantStringClassReference_110dd0118;
      }
      puVar7 = &uStack_90;
      uVar8 = SUB81(&ppuStack_a8,0);
      puStack_88 = param_5;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(param_5);
    }
    else {
      puVar7 = param_4;
      func_0x00010c12d3e0(*(undefined8 *)(param_2 + 0x38));
    }
    _objc_release(puVar4);
    _objc_release(lStack_b8);
  }
  _objc_release(lVar2);
  _objc_release(param_6);
  puVar6 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_1052dbc80;
  puStack_f0 = param_5;
  lStack_e8 = lVar2;
  uStack_e0 = param_6;
  puStack_d8 = param_4;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  puVar9 = PTR____NSDictionary0__struct_11034ab58;
  if (puVar6[8] != 0) {
    puStack_118 = &uStack_120;
    uStack_120 = 0;
    uStack_110 = 0x3032000000;
    pcStack_108 = FUN_1052dbdd8;
    uStack_100 = 0x1052dbde8;
    uStack_f8 = 0;
    _objc_initWeak(auStack_128,puVar6);
    uVar5 = puVar6[1];
    _objc_copyWeak(auStack_138,auStack_128);
    _objc_retain(puVar7);
    uStack_130 = uVar8;
    func_0x00010c0f8240(uVar5);
    puVar9 = (undefined *)puStack_118[5];
    _objc_retain(puVar9);
    _objc_release(puVar7);
    _objc_destroyWeak(auStack_138);
    _objc_destroyWeak(auStack_128);
    __Block_object_dispose(&uStack_120,8);
    _objc_release(uStack_f8);
  }
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1052dbc80; end: 1052dbdd7; -[SCBatteryGPSMonitor gpsUsageFromAppOpenUntilTimestamp:onAppBackground:] */

void FUN_1052dbc80(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  if (*(long *)(param_1 + 0x40) != 0) {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_1052dbdd8;
    uStack_40 = 0x1052dbde8;
    uStack_38 = 0;
    _objc_initWeak(auStack_68,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(param_3);
    uStack_70 = param_4;
    func_0x00010c0f8240(uVar2);
    puVar1 = (undefined *)puStack_58[5];
    _objc_retain(puVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1052dbdd8; end: 1052dbdef;  */

void FUN_1052dbdd8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1052dbdf0; end: 1052dbe47;  */

void FUN_1052dbdf0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be24440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1052dbe48; end: 1052dbf5b; -[SCBatteryGPSMonitor _gpsUsageFromAppOpenUntilTimestamp:onAppBackground:] */

void FUN_1052dbe48(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf51e00(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf51e00(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf51e00(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bf51e00(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010bf51e00(uVar5);
  FUN_1052dbf5c(uVar6,param_3,uVar1,uVar2,uVar3,uVar4,uVar5,*(undefined1 *)(param_1 + 0x98));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (param_4 != 0) {
    func_0x00010bdfd900(param_1);
  }
  uVar1 = uVar6;
  func_0x00010bf51e00(uVar6);
  _objc_release(uVar6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052dbf5c; end: 1052dd5c3;  */

void FUN_1052dbf5c(long param_1,undefined8 ****param_2,undefined8 ****param_3,undefined ***param_4,
                  long param_5,long param_6,undefined *param_7,undefined4 param_8)

{
  undefined8 ****ppppuVar1;
  undefined ***pppuVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined8 ****ppppuVar15;
  undefined ***pppuVar16;
  long lVar17;
  undefined *puVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_8f0 [8];
  undefined1 auStack_8e8 [8];
  undefined8 uStack_8e0;
  undefined8 *puStack_8d8;
  undefined8 uStack_8d0;
  code *pcStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined *puStack_8b0;
  undefined *puStack_8a8;
  undefined ***pppuStack_8a0;
  undefined8 ***pppuStack_898;
  undefined1 *puStack_890;
  code *pcStack_888;
  long lStack_880;
  undefined *puStack_878;
  undefined *puStack_870;
  undefined *puStack_868;
  undefined4 uStack_85c;
  undefined *puStack_858;
  long lStack_850;
  long lStack_848;
  long lStack_840;
  long lStack_838;
  long lStack_830;
  undefined *puStack_828;
  long lStack_820;
  long lStack_818;
  undefined8 ***pppuStack_810;
  long lStack_808;
  undefined *puStack_800;
  undefined *puStack_7f8;
  undefined *puStack_7f0;
  undefined *puStack_7e8;
  undefined ***pppuStack_7e0;
  undefined8 ***pppuStack_7d8;
  undefined *puStack_7d0;
  undefined *puStack_7c8;
  undefined *puStack_7c0;
  undefined *puStack_7b8;
  undefined *puStack_7b0;
  undefined *puStack_7a8;
  undefined8 uStack_7a0;
  long lStack_798;
  long *plStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  long lStack_758;
  long *plStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  long *plStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  long *plStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  long lStack_698;
  long *plStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  long *plStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  long lStack_618;
  long *plStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  long lStack_5d8;
  long *plStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  long lStack_598;
  long *plStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined **ppuStack_560;
  undefined **ppuStack_558;
  undefined **ppuStack_550;
  undefined8 ***pppuStack_548;
  undefined *puStack_540;
  undefined ***pppuStack_538;
  undefined **ppuStack_430;
  undefined **ppuStack_428;
  undefined **ppuStack_420;
  undefined *puStack_418;
  undefined *puStack_410;
  undefined **ppuStack_408;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar1 = param_3;
  pppuVar2 = param_4;
  uStack_85c = param_8;
  _objc_retain();
  _objc_retain(param_2);
  pppuStack_7d8 = param_3;
  _objc_retain(param_3);
  pppuStack_7e0 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  lStack_818 = param_6;
  _objc_retain(param_6);
  puStack_7f8 = param_7;
  _objc_retain(param_7);
  puVar12 = PTR____NSDictionary0__struct_11034ab58;
  if (((param_1 != 0) && (param_2 != (undefined8 ****)0x0)) &&
     (lVar6 = param_1, ppppuVar1 = param_2, func_0x00010bf433a0(), lVar6 == -1)) {
    puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    lStack_820 = param_5;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar1 = (undefined8 ****)pppuStack_7d8;
    lStack_758 = 0;
    uStack_760 = 0;
    uStack_748 = 0;
    plStack_750 = (long *)0x0;
    uStack_738 = 0;
    uStack_740 = 0;
    uStack_728 = 0;
    uStack_730 = 0;
    puStack_868 = puVar12;
    _objc_retain(pppuStack_7d8);
    func_0x00010bf52a60();
    if (ppppuVar1 != (undefined8 ****)0x0) {
      lVar6 = *plStack_750;
      do {
        ppppuVar15 = (undefined8 ****)0x0;
        do {
          if (*plStack_750 != lVar6) {
            _objc_enumerationMutation(pppuStack_7d8);
          }
          lVar13 = *(long *)(lStack_758 + (long)ppppuVar15 * 8);
          lVar7 = lVar13;
          func_0x00010c2709c0();
          _objc_retainAutoreleasedReturnValue();
          lVar17 = lVar7;
          func_0x00010bf433a0();
          _objc_release(lVar7);
          if (lVar17 == 1) {
            func_0x00010c215dc0(lVar13);
          }
          lVar7 = lVar13;
          func_0x00010c2709c0();
          _objc_retainAutoreleasedReturnValue();
          lVar17 = lVar7;
          func_0x00010bf433a0();
          _objc_release(lVar7);
          if (lVar17 == -1) {
            func_0x00010c215dc0(lVar13);
          }
          ppppuVar15 = (undefined8 ****)((long)ppppuVar15 + 1);
        } while (ppppuVar1 != ppppuVar15);
        ppppuVar1 = (undefined8 ****)pppuStack_7d8;
        func_0x00010bf52a60();
      } while (ppppuVar1 != (undefined8 ****)0x0);
    }
    _objc_release(pppuStack_7d8);
    pppuVar2 = pppuStack_7e0;
    dVar20 = 0.0;
    uStack_778 = 0;
    uStack_780 = 0;
    uStack_768 = 0;
    uStack_770 = 0;
    lStack_798 = 0;
    uStack_7a0 = 0;
    uStack_788 = 0;
    plStack_790 = (long *)0x0;
    _objc_retain(pppuStack_7e0);
    func_0x00010bf52a60();
    if (pppuVar2 != (undefined ***)0x0) {
      lVar6 = *plStack_790;
      do {
        pppuVar16 = (undefined ***)0x0;
        do {
          if (*plStack_790 != lVar6) {
            _objc_enumerationMutation(pppuStack_7e0);
          }
          lVar13 = *(long *)(lStack_798 + (long)pppuVar16 * 8);
          lVar7 = lVar13;
          func_0x00010c2709c0();
          _objc_retainAutoreleasedReturnValue();
          lVar17 = lVar7;
          func_0x00010bf433a0();
          _objc_release(lVar7);
          if (lVar17 == -1) {
            func_0x00010c215dc0(lVar13);
          }
          lVar7 = lVar13;
          func_0x00010c2709c0();
          _objc_retainAutoreleasedReturnValue();
          lVar17 = lVar7;
          func_0x00010bf433a0();
          _objc_release(lVar7);
          if (lVar17 == 1) {
            func_0x00010c215dc0(lVar13);
          }
          pppuVar16 = (undefined ***)((long)pppuVar16 + 1);
        } while (pppuVar2 != pppuVar16);
        pppuVar2 = pppuStack_7e0;
        func_0x00010bf52a60();
      } while (pppuVar2 != (undefined ***)0x0);
    }
    _objc_release(pppuStack_7e0);
    puVar12 = puStack_868;
    func_0x00010befa160(puStack_868);
    func_0x00010befa160(puVar12);
    func_0x00010c246ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar12;
    func_0x00010bf529e0();
    param_5 = lStack_820;
    if (puVar9 == (undefined *)0x0) {
      puStack_858 = (undefined *)0x0;
      lVar6 = 0;
    }
    else {
      puStack_858 = (undefined *)0x0;
      puVar9 = (undefined *)0x0;
      dVar21 = 0.0;
      do {
        puVar8 = puVar12;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar8;
        func_0x00010c27dd80();
        if (puVar10 == (undefined *)0x0) {
          puVar10 = puStack_858;
          dVar19 = dVar20;
          if (puStack_858 == (undefined *)0x0) {
            puVar10 = puVar8;
            func_0x00010c2709c0();
            _objc_retainAutoreleasedReturnValue();
            dVar19 = dVar20;
          }
          puVar18 = puVar12;
          puStack_858 = puVar10;
          func_0x00010bf529e0();
          if (puVar9 == puVar18 + -1) {
            func_0x00010c26f380(param_2);
            dVar21 = dVar21 + dVar19;
          }
        }
        else {
          puVar18 = puVar8;
          func_0x00010c27dd80();
          puVar10 = puStack_858;
          dVar19 = dVar20;
          if (puVar18 == (undefined *)0x1) {
            if (puStack_858 == (undefined *)0x0) {
              if (puVar9 == (undefined *)0x0) {
                puVar10 = puVar8;
                func_0x00010c2709c0(puVar8);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c26f380();
                dVar19 = dVar20;
                _objc_release(puVar10);
                puStack_858 = (undefined *)0x0;
                dVar21 = dVar21 + dVar20;
                goto LAB_1052dc384;
              }
            }
            else {
              puVar18 = puVar8;
              func_0x00010c2709c0(puVar8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c26f380();
              dVar19 = dVar20;
              _objc_release(puVar18);
              dVar21 = dVar21 + dVar20;
              _objc_release(puVar10);
            }
            puStack_858 = (undefined *)0x0;
          }
        }
LAB_1052dc384:
        _objc_release(puVar8);
        puVar9 = puVar9 + 1;
        puVar8 = puVar12;
        func_0x00010bf529e0();
        dVar20 = dVar19;
      } while (puVar9 < puVar8);
      lVar6 = (long)(dVar21 * 1000.0);
    }
    puStack_870 = puVar12;
    _objc_retain(param_1);
    _objc_retain(param_2);
    _objc_retain(param_5);
    _objc_retain(lStack_818);
    _objc_retain(puStack_7f8);
    lVar7 = param_1;
    func_0x00010bf433a0();
    param_7 = PTR____NSDictionary0__struct_11034ab58;
    if (lVar7 == -1) {
      puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      lStack_880 = lVar6;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lStack_598 = 0;
      uStack_5a0 = 0;
      uStack_588 = 0;
      plStack_590 = (long *)0x0;
      uStack_578 = 0;
      uStack_580 = 0;
      uStack_568 = 0;
      uStack_570 = 0;
      puStack_878 = puVar12;
      _objc_retain(param_5);
      lVar6 = param_5;
      func_0x00010bf52a60();
      if (lVar6 != 0) {
        lVar7 = *plStack_590;
        do {
          lVar17 = 0;
          do {
            if (*plStack_590 != lVar7) {
              _objc_enumerationMutation(lStack_820);
            }
            lVar14 = *(long *)(lStack_598 + lVar17 * 8);
            lVar13 = lVar14;
            func_0x00010c2709c0();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar13;
            func_0x00010bf433a0();
            _objc_release(lVar13);
            if (lVar3 == 1) {
              func_0x00010c215dc0(lVar14);
            }
            lVar13 = lVar14;
            func_0x00010c2709c0();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar13;
            func_0x00010bf433a0();
            _objc_release(lVar13);
            if (lVar3 == -1) {
              func_0x00010c215dc0(lVar14);
            }
            param_5 = lStack_820;
            lVar17 = lVar17 + 1;
          } while (lVar6 != lVar17);
          lVar6 = lStack_820;
          func_0x00010bf52a60();
        } while (lVar6 != 0);
      }
      _objc_release(param_5);
      lVar6 = lStack_818;
      uStack_5b8 = 0;
      uStack_5c0 = 0;
      uStack_5a8 = 0;
      uStack_5b0 = 0;
      lStack_5d8 = 0;
      uStack_5e0 = 0;
      uStack_5c8 = 0;
      plStack_5d0 = (long *)0x0;
      _objc_retain(lStack_818);
      func_0x00010bf52a60();
      if (lVar6 != 0) {
        lVar7 = *plStack_5d0;
        do {
          lVar17 = 0;
          do {
            if (*plStack_5d0 != lVar7) {
              _objc_enumerationMutation(lStack_818);
            }
            lVar14 = *(long *)(lStack_5d8 + lVar17 * 8);
            lVar13 = lVar14;
            func_0x00010c2709c0();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar13;
            func_0x00010bf433a0();
            _objc_release(lVar13);
            if (lVar3 == -1) {
              func_0x00010c215dc0(lVar14);
            }
            lVar13 = lVar14;
            func_0x00010c2709c0();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar13;
            func_0x00010bf433a0();
            _objc_release(lVar13);
            if (lVar3 == 1) {
              func_0x00010c215dc0(lVar14);
            }
            lVar17 = lVar17 + 1;
          } while (lVar6 != lVar17);
          lVar6 = lStack_818;
          func_0x00010bf52a60();
        } while (lVar6 != 0);
      }
      _objc_release(lStack_818);
      puVar12 = puStack_878;
      func_0x00010befa160(puStack_878);
      func_0x00010befa160(puVar12);
      func_0x00010c246ca0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      lStack_618 = 0;
      uStack_620 = 0;
      uStack_608 = 0;
      plStack_610 = (long *)0x0;
      uStack_5f8 = 0;
      uStack_600 = 0;
      uStack_5e8 = 0;
      uStack_5f0 = 0;
      _objc_retain(puVar12);
      puStack_828 = puVar12;
      func_0x00010bf52a60();
      pppuStack_810 = param_2;
      puStack_7c8 = puVar9;
      if (puVar12 != (undefined *)0x0) {
        lVar6 = *plStack_610;
        do {
          puVar8 = (undefined *)0x0;
          do {
            if (*plStack_610 != lVar6) {
              _objc_enumerationMutation(puStack_828);
            }
            lVar17 = *(long *)(lStack_618 + (long)puVar8 * 8);
            lVar7 = lVar17;
            func_0x00010c27dd80();
            lVar13 = lVar17;
            if (lVar7 == 0) {
              lVar7 = lVar17;
              func_0x00010bf28700(lVar17);
              _objc_retainAutoreleasedReturnValue();
              puVar18 = puVar9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              _objc_release(lVar7);
              puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              if (puVar18 != (undefined *)0x0) {
                func_0x00010bf28700(lVar17);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0e00e0(puVar9);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c067ec0();
                goto LAB_1052dc814;
              }
              func_0x00010bf28700(lVar17);
              _objc_retainAutoreleasedReturnValue();
LAB_1052dc8a8:
              func_0x00010c1d0640(puVar9);
LAB_1052dc8b0:
              _objc_release(lVar17);
            }
            else {
              lVar7 = lVar17;
              func_0x00010c27dd80();
              if (lVar7 == 1) {
                lVar7 = lVar17;
                func_0x00010bf28700(lVar17);
                _objc_retainAutoreleasedReturnValue();
                puVar18 = puVar9;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                _objc_release(lVar7);
                puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                if (puVar18 == (undefined *)0x0) {
                  func_0x00010bf28700(lVar17);
                  _objc_retainAutoreleasedReturnValue();
                  goto LAB_1052dc8a8;
                }
                func_0x00010bf28700(lVar17);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0e00e0(puVar9);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c067ec0();
LAB_1052dc814:
                func_0x00010c0df760(puVar10);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf28700(lVar17);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puStack_7c8);
                _objc_release(lVar17);
                _objc_release(puVar10);
                puVar10 = puStack_7c8;
                _objc_release(puVar9);
                lVar17 = lVar13;
                puVar9 = puVar10;
                goto LAB_1052dc8b0;
              }
            }
            puVar8 = puVar8 + 1;
          } while (puVar12 != puVar8);
          puVar12 = puStack_828;
          func_0x00010bf52a60();
        } while (puVar12 != (undefined *)0x0);
      }
      _objc_release(puStack_828);
      puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0c0();
      _objc_retainAutoreleasedReturnValue();
      uStack_658 = 0;
      uStack_660 = 0;
      uStack_648 = 0;
      plStack_650 = (long *)0x0;
      uStack_638 = 0;
      uStack_640 = 0;
      uStack_628 = 0;
      uStack_630 = 0;
      puVar8 = puVar9;
      puStack_7f0 = puVar12;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      puStack_7a8 = puVar8;
      func_0x00010bf52a60();
      if (puVar8 != (undefined *)0x0) {
        lVar6 = *plStack_650;
        do {
          puVar12 = (undefined *)0x0;
          do {
            if (*plStack_650 != lVar6) {
              _objc_enumerationMutation(puStack_7a8);
            }
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar9;
            func_0x00010c067fc0();
            _objc_release(puVar9);
            puVar9 = puStack_7f0;
            if ((long)puVar10 < 1) {
              if ((long)puVar10 < 0) {
                lVar7 = 1;
                if (puVar10 != (undefined *)0xffffffffffffffff && 0 < -(long)puVar10) {
                  lVar7 = -(long)puVar10;
                }
                do {
                  puVar10 = PTR_PTR_1126b6ef8;
                  _objc_alloc(PTR_PTR_1126b6ef8);
                  func_0x00010c052880();
                  func_0x00010c066b00(puVar9);
                  _objc_release(puVar10);
                  lVar7 = lVar7 + -1;
                } while (lVar7 != 0);
              }
            }
            else {
              do {
                puVar18 = PTR_PTR_1126b6ef8;
                _objc_alloc(PTR_PTR_1126b6ef8);
                func_0x00010c052880();
                func_0x00010befa120(puVar9);
                _objc_release(puVar18);
                puVar10 = puVar10 + -1;
              } while (puVar10 != (undefined *)0x0);
            }
            puVar9 = puStack_7c8;
            puVar12 = puVar12 + 1;
          } while (puVar12 != puVar8);
          puVar8 = puStack_7a8;
          func_0x00010bf52a60();
        } while (puVar8 != (undefined *)0x0);
      }
      _objc_release(puStack_7a8);
      puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puStack_7f0;
      dVar20 = 0.0;
      lStack_698 = 0;
      uStack_6a0 = 0;
      uStack_688 = 0;
      plStack_690 = (long *)0x0;
      uStack_678 = 0;
      uStack_680 = 0;
      uStack_668 = 0;
      uStack_670 = 0;
      puStack_7e8 = puVar10;
      _objc_retain(puStack_7f0);
      puVar10 = puVar12;
      func_0x00010bf52a60();
      puStack_7b0 = puVar9;
      puStack_7a8 = puVar8;
      if (puVar10 == (undefined *)0x0) {
        puStack_7d0 = (undefined *)0x0;
        lStack_848 = 0;
        lStack_840 = 0;
      }
      else {
        puStack_7d0 = (undefined *)0x0;
        lStack_848 = 0;
        lStack_840 = 0;
        lStack_808 = 0;
        lVar6 = *plStack_690;
        lStack_850 = param_1;
        lStack_830 = lVar6;
        puStack_800 = puVar10;
        do {
          puVar10 = (undefined *)0x0;
          do {
            if (*plStack_690 != lVar6) {
              _objc_enumerationMutation(puVar12);
            }
            puVar4 = *(undefined **)(lStack_698 + (long)puVar10 * 8);
            puStack_7c0 = puVar4;
            puStack_7b8 = puVar10;
            func_0x00010bf28700();
            _objc_retainAutoreleasedReturnValue();
            puVar18 = puVar4;
            func_0x00010c0720c0();
            _objc_release(puVar4);
            puVar10 = puStack_7b8;
            puVar4 = puStack_7d0;
            if (((ulong)puVar18 & 1) == 0) {
              if (puStack_7d0 != (undefined *)0x0) {
                puVar10 = puStack_7c0;
                func_0x00010c2709c0(puStack_7c0);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c26f380();
                _objc_release(puVar10);
                dVar20 = dVar20 * 1000.0;
                lVar6 = (long)dVar20;
                if ((-1 < lVar6) && (0 < lStack_808)) {
                  dVar20 = 0.0;
                  uStack_6b8 = 0;
                  uStack_6c0 = 0;
                  uStack_6a8 = 0;
                  uStack_6b0 = 0;
                  uStack_6d8 = 0;
                  uStack_6e0 = 0;
                  uStack_6c8 = 0;
                  plStack_6d0 = (long *)0x0;
                  lStack_838 = lVar6;
                  func_0x00010bf002e0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar12 = puVar8;
                  func_0x00010bf52a60();
                  if (puVar12 != (undefined *)0x0) {
                    lVar6 = *plStack_6d0;
                    do {
                      puVar10 = (undefined *)0x0;
                      puVar18 = puVar9;
                      do {
                        if (*plStack_6d0 != lVar6) {
                          _objc_enumerationMutation(puVar8);
                        }
                        puVar9 = puVar18;
                        func_0x00010c0e00e0();
                        _objc_retainAutoreleasedReturnValue();
                        _objc_release();
                        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                        if (puVar9 == (undefined *)0x0) {
                          puVar5 = puStack_7a8;
                          func_0x00010c0e00e0(puStack_7a8);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c067fc0();
                          func_0x00010c0df780(puVar4);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c1d0640(puVar18);
                          puVar9 = puVar18;
                        }
                        else {
                          func_0x00010c0e00e0(puVar18);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c067fc0();
                          puVar5 = puStack_7a8;
                          func_0x00010c0e00e0(puStack_7a8);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c067fc0();
                          puVar9 = puStack_7b0;
                          func_0x00010c0df780(puVar4);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c1d0640(puVar9);
                          _objc_release(puVar4);
                          puVar4 = puVar5;
                          puVar5 = puVar18;
                        }
                        _objc_release(puVar4);
                        _objc_release(puVar5);
                        puVar10 = puVar10 + 1;
                        puVar18 = puVar9;
                      } while (puVar12 != puVar10);
                      puVar12 = puVar8;
                      func_0x00010bf52a60();
                    } while (puVar12 != (undefined *)0x0);
                  }
                  lStack_848 = lStack_848 + lStack_838;
                  _objc_release(puVar8);
                  puVar12 = puStack_7f0;
                  puVar8 = puStack_7a8;
                  param_1 = lStack_850;
                }
              }
              puVar18 = puStack_7c0;
              puVar4 = puStack_7c0;
              func_0x00010c2709c0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puStack_7d0);
              puVar5 = puVar18;
              func_0x00010c27dd80();
              puVar10 = puStack_7b8;
              if (puVar5 == (undefined *)0x0) {
                puVar9 = puVar18;
                func_0x00010bf28700(puVar18);
                _objc_retainAutoreleasedReturnValue();
                puVar10 = puVar8;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                _objc_release(puVar9);
                puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                puVar5 = puVar18;
                if (puVar10 == (undefined *)0x0) {
                  func_0x00010bf28700(puVar18);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(puVar8);
                }
                else {
                  func_0x00010bf28700(puVar18);
                  _objc_retainAutoreleasedReturnValue();
                  puVar10 = puVar8;
                  func_0x00010c0e00e0(puVar8);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c067fc0();
                  func_0x00010c0df780(puVar9);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bf28700(puVar18);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(puVar8);
                  puVar8 = puStack_7c0;
                  _objc_release(puVar18);
                  _objc_release(puVar9);
                  _objc_release(puVar10);
                  puVar18 = puVar8;
                }
                _objc_release(puVar5);
                puVar9 = puVar18;
                func_0x00010bf28700(puVar18);
                _objc_retainAutoreleasedReturnValue();
                puVar8 = puStack_7e8;
                puVar10 = puStack_7e8;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                _objc_release(puVar9);
                puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                if (puVar10 == (undefined *)0x0) {
                  func_0x00010bf28700(puVar18);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(puVar8);
                }
                else {
                  puVar10 = puVar18;
                  func_0x00010bf28700(puVar18);
                  _objc_retainAutoreleasedReturnValue();
                  puVar5 = puVar8;
                  func_0x00010c0e00e0(puVar8);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c067fc0();
                  func_0x00010c0df780(puVar9);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bf28700(puVar18);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(puVar8);
                  _objc_release(puVar18);
                  _objc_release(puVar9);
                  _objc_release(puVar5);
                  puVar18 = puVar10;
                }
                puVar9 = puStack_7b0;
                puVar10 = puStack_7b8;
                lStack_808 = lStack_808 + 1;
                _objc_release(puVar18);
                lStack_840 = lStack_840 + 1;
                lVar6 = lStack_830;
                puVar8 = puStack_7a8;
              }
              else {
                puVar5 = puVar18;
                func_0x00010c27dd80();
                lVar6 = lStack_830;
                if (puVar5 == (undefined *)0x1) {
                  puVar9 = puVar18;
                  func_0x00010bf28700(puVar18);
                  _objc_retainAutoreleasedReturnValue();
                  puVar5 = puVar8;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  _objc_release(puVar9);
                  puVar9 = puStack_7b0;
                  lVar6 = lStack_830;
                  if (puVar5 != (undefined *)0x0) {
                    func_0x00010bf28700(puVar18);
                    _objc_retainAutoreleasedReturnValue();
                    puVar9 = puVar8;
                    func_0x00010c0e00e0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar5 = puVar9;
                    func_0x00010c067fc0();
                    _objc_release(puVar9);
                    _objc_release(puVar18);
                    puVar10 = puStack_7b8;
                    puVar9 = puStack_7b0;
                    lVar6 = lStack_830;
                    if (0 < (long)puVar5) {
                      lStack_808 = lStack_808 + -1;
                      if (puVar5 == (undefined *)0x1) {
                        puVar9 = puStack_7c0;
                        func_0x00010bf28700(puStack_7c0);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c12d3e0(puVar8);
                      }
                      else {
                        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
                        _objc_retainAutoreleasedReturnValue();
                        puVar18 = puStack_7c0;
                        func_0x00010bf28700(puStack_7c0);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c1d0640(puVar8);
                        _objc_release(puVar18);
                      }
                      _objc_release(puVar9);
                      puVar9 = puStack_7b0;
                      lVar6 = lStack_830;
                    }
                  }
                }
              }
            }
            puStack_7d0 = puVar4;
            puVar10 = puVar10 + 1;
          } while (puVar10 != puStack_800);
          puVar10 = puVar12;
          func_0x00010bf52a60();
          puStack_800 = puVar10;
        } while (puVar10 != (undefined *)0x0);
      }
      puStack_800 = (undefined *)0x0;
      _objc_release(puVar12);
      puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uStack_718 = 0;
      uStack_720 = 0;
      uStack_708 = 0;
      plStack_710 = (long *)0x0;
      uStack_6f8 = 0;
      uStack_700 = 0;
      uStack_6e8 = 0;
      uStack_6f0 = 0;
      puVar8 = puVar9;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar8;
      func_0x00010bf52a60();
      if (puVar10 != (undefined *)0x0) {
        lVar6 = *plStack_710;
        do {
          puVar18 = (undefined *)0x0;
          do {
            if (*plStack_710 != lVar6) {
              _objc_enumerationMutation(puVar8);
            }
            puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e00e0(puVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar4);
            _objc_release(puVar9);
            puVar9 = puStack_7e8;
            puVar5 = puStack_7e8;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar5 == (undefined *)0x0) {
              func_0x00010c1d0640(puVar4);
            }
            else {
              func_0x00010c0e00e0(puVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar4);
              _objc_release(puVar9);
            }
            _objc_release(puVar5);
            puVar9 = PTR_PTR_1126b6f08;
            puVar5 = puStack_7f8;
            func_0x00010c0e00e0(puStack_7f8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c067fc0();
            func_0x00010bfc51e0(puVar9);
            func_0x00010bfc9240(puVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar4);
            _objc_release(puVar9);
            _objc_release(puVar5);
            func_0x00010c1d0640(puVar12);
            _objc_release(puVar4);
            puVar9 = puStack_7b0;
            puVar18 = puVar18 + 1;
          } while (puVar10 != puVar18);
          puVar10 = puVar8;
          func_0x00010bf52a60();
        } while (puVar10 != (undefined *)0x0);
      }
      _objc_release(puVar8);
      puVar8 = puVar9;
      func_0x00010bf529e0();
      if (puVar8 != (undefined *)0x0) {
        ppuStack_430 = &PTR____CFConstantStringClassReference_110dcffb8;
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_428 = &PTR____CFConstantStringClassReference_110dcffd8;
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puStack_418 = puVar8;
        func_0x00010c0df780();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_420 = &PTR____CFConstantStringClassReference_110dcfff8;
        ppuStack_408 = &PTR____CFConstantStringClassReference_110dbdb78;
        puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_410 = puVar10;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar12);
        _objc_release(puVar9);
        puVar9 = puStack_7b0;
        _objc_release(puVar10);
        _objc_release(puVar8);
      }
      param_7 = puVar12;
      func_0x00010bf51e00();
      _objc_release(puVar12);
      _objc_release(puStack_7d0);
      _objc_release(puStack_7e8);
      _objc_release(puStack_7a8);
      _objc_release(puVar9);
      _objc_release(puStack_7f0);
      _objc_release(puStack_7c8);
      _objc_release(puStack_828);
      _objc_release(puStack_878);
      param_5 = lStack_820;
      param_2 = (undefined8 ****)pppuStack_810;
    }
    _objc_release(puStack_7f8);
    _objc_release(lStack_818);
    _objc_release(param_5);
    _objc_release(param_2);
    _objc_release(param_1);
    ppuStack_560 = &PTR____CFConstantStringClassReference_110dcfe38;
    param_3 = (undefined8 ****)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_558 = &PTR____CFConstantStringClassReference_110dcff98;
    ppuStack_550 = &PTR____CFConstantStringClassReference_110dcff78;
    param_4 = (undefined ***)PTR__OBJC_CLASS___NSNumber_1126ae570;
    pppuStack_548 = param_3;
    puStack_540 = param_7;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar1 = &pppuStack_548;
    pppuVar2 = &ppuStack_560;
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    pppuStack_538 = param_4;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(param_3);
    puVar12 = puVar9;
    func_0x00010bf51e00();
    _objc_release(puVar9);
    _objc_release(param_7);
    _objc_release(puStack_858);
    _objc_release(puStack_870);
    _objc_release(puStack_868);
  }
  _objc_release(puStack_7f8);
  _objc_release(lStack_818);
  _objc_release(param_5);
  _objc_release(pppuStack_7e0);
  _objc_release(pppuStack_7d8);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    pcStack_888 = FUN_1052dd5c4;
    puStack_8b0 = param_7;
    puStack_8a8 = puVar12;
    pppuStack_8a0 = param_4;
    pppuStack_898 = param_3;
    puStack_890 = &stack0xfffffffffffffff0;
    _objc_retain(ppppuVar1);
    _objc_retain(pppuVar2);
    puStack_8d8 = &uStack_8e0;
    uStack_8e0 = 0;
    uStack_8d0 = 0x3032000000;
    pcStack_8c8 = FUN_1052dbdd8;
    uStack_8c0 = 0x1052dbde8;
    uStack_8b8 = 0;
    _objc_initWeak(auStack_8e8,param_1);
    uVar11 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_8f0,auStack_8e8);
    _objc_retain(ppppuVar1);
    _objc_retain(pppuVar2);
    func_0x00010c0f8240(uVar11);
    puVar12 = (undefined *)puStack_8d8[5];
    _objc_retain(puVar12);
    _objc_release(pppuVar2);
    _objc_release(ppppuVar1);
    _objc_destroyWeak(auStack_8f0);
    _objc_destroyWeak(auStack_8e8);
    __Block_object_dispose(&uStack_8e0,8);
    _objc_release(uStack_8b8);
    _objc_release(pppuVar2);
    _objc_release(ppppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1052dd5c4; end: 1052dd727; -[SCBatteryGPSMonitor backgroundGpsUsageWithStartTime:endTime:] */

void FUN_1052dd5c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1052dbdd8;
  uStack_40 = 0x1052dbde8;
  uStack_38 = 0;
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052dd728; end: 1052dd77b;  */

void FUN_1052dd728(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bdd2340();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1052dd77c; end: 1052dd9f7; -[SCBatteryGPSMonitor _backgroundGpsUsageWithStartTime:endTime:] */

void FUN_1052dd77c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar8 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar8);
  lVar1 = lVar8;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar8);
        }
        func_0x00010be557a0(param_1);
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = lVar8;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar8);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x38));
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bf51e00(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bf51e00(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010bf51e00(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010bf51e00(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010bf51e00(uVar6);
  lVar1 = param_3;
  FUN_1052dbf5c(param_3,param_4,uVar2,uVar3,uVar4,uVar5,uVar6,*(undefined1 *)(param_1 + 0x98));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar7;
  _objc_release(uVar2);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar7;
  _objc_release(uVar2);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  *(undefined **)(param_1 + 0x80) = puVar7;
  _objc_release(uVar2);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar7;
  _objc_release(uVar2);
  lVar8 = lVar1;
  func_0x00010bf51e00();
  _objc_release(lVar1);
  _objc_release(param_4);
  lVar9 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1052dd9f8;
  lStack_160 = lVar1;
  lStack_158 = lVar8;
  uStack_150 = param_4;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_168,lVar9);
  puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar9 + 8);
  _objc_copyWeak(auStack_170,auStack_168);
  _objc_retain(puVar7);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_170);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_168);
  return;
}



/* Entry: 1052dd9f8; end: 1052ddae3; -[SCBatteryGPSMonitor resetGPSUsageRecordWhenAppOpen] */

void FUN_1052dd9f8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1052ddae4; end: 1052ddb17;  */

void FUN_1052ddae4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be92d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052ddb18; end: 1052ddcbb; -[SCBatteryGPSMonitor _resetGPSUsageRecordWhenAppOpenAtTime:] */

void FUN_1052ddb18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x20));
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x30));
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined **)(param_1 + 0x78) = puVar2;
  _objc_release(uVar1);
  if (*(char *)(param_1 + 0x99) == '\x01') {
    lVar3 = *(long *)(param_1 + 0x18);
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      puVar2 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b6ed0;
      func_0x00010bfcd700(PTR_PTR_1126b6ed0);
      func_0x00010c277620(puVar2,param_2,&PTR____CFConstantStringClassReference_110dd0058,puVar4);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126b6ec8;
      func_0x00010c22b6a0(PTR_PTR_1126b6ec8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c285000();
      goto LAB_1052ddca0;
    }
  }
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b6ed0;
  func_0x00010bfcd6e0(PTR_PTR_1126b6ed0);
  func_0x00010c277620(puVar2,param_2,&PTR____CFConstantStringClassReference_110dd0058,puVar4);
LAB_1052ddca0:
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052ddcbc; end: 1052dde9b; -[SCBatteryGPSMonitor _didEnterBackgroundAtTime:] */

ulong FUN_1052ddcbc(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
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
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar7 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar7);
  lVar1 = lVar7;
  func_0x00010bf52a60(lVar7,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar8 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(lVar7);
        }
        func_0x00010be557a0(param_1,param_2,*(undefined8 *)(lStack_118 + lVar9 * 8),0,param_3,0);
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = lVar7;
      func_0x00010bf52a60(lVar7,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar7);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x38));
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(ulong *)(param_1 + 0x48) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar3;
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar3;
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  *(undefined **)(param_1 + 0x80) = puVar3;
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar3;
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_3;
  }
  ___stack_chk_fail();
  if ((*(long *)(param_3 + 0x40) == 0) && (*(long *)(param_3 + 0x48) != 0)) {
    uVar6 = 1;
  }
  else {
    puVar3 = PTR_PTR_1126ae520;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf07b60();
    if (puVar4 == (undefined *)0x2) {
      puVar4 = PTR_PTR_1126ae520;
      func_0x00010c22b6a0(PTR_PTR_1126ae520);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0d9860();
      uVar6 = (ulong)(puVar5 == (undefined *)0x2);
      _objc_release(puVar4);
    }
    else {
      uVar6 = 0;
    }
    _objc_release(puVar3);
  }
  return uVar6;
}



/* Entry: 1052dde9c; end: 1052ddf33; -[SCBatteryGPSMonitor _appInBackground] */

bool FUN_1052dde9c(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if ((*(long *)(param_1 + 0x40) == 0) && (*(long *)(param_1 + 0x48) != 0)) {
    bVar1 = true;
  }
  else {
    puVar2 = PTR_PTR_1126ae520;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf07b60();
    if (puVar3 == (undefined *)0x2) {
      puVar3 = PTR_PTR_1126ae520;
      func_0x00010c22b6a0(PTR_PTR_1126ae520);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0d9860();
      bVar1 = puVar4 == (undefined *)0x2;
      _objc_release(puVar3);
    }
    else {
      bVar1 = false;
    }
    _objc_release(puVar2);
  }
  return bVar1;
}



/* Entry: 1052ddf34; end: 1052de153;  */

ulong FUN_1052ddf34(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2709c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2709c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c071ae0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    uVar2 = param_2;
    func_0x00010c2709c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    uVar3 = param_3;
    func_0x00010c2709c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf433a0(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    uVar2 = param_2;
    func_0x00010c27dd80();
    _objc_release(param_2);
    uVar3 = param_3;
    func_0x00010c27dd80();
    uVar1 = 1;
    if (uVar2 < uVar3) {
      uVar1 = 0xffffffffffffffff;
    }
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1052de154; end: 1052de15b; -[SCBatteryGPSMonitor isGPSOn] */

undefined1 FUN_1052de154(long param_1)

{
  return *(undefined1 *)(param_1 + 0x99);
}



/* Entry: 1052de15c; end: 1052de39b; -[SCBatteryGPSMonitor .cxx_destruct] */

void FUN_1052de15c(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


