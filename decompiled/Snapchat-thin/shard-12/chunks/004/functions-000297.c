/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1091043f8; end: 109104467;  */

void FUN_1091043f8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110adbf48,&PTR_DAT_110adc640,0);
    if (lVar1 == 0) {
      FUN_10910478c(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_1 = *(long **)(lVar1 + 0x18);
      _objc_retain(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 109104468; end: 1091044bb; -[SCNPlayerAnalyticsVideoRendererPerformanceMetricsCallbackCppProxy .cxx_destruct] */

void FUN_109104468(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110adc758;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_109104870((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 1091044bc; end: 1091044fb; -[SCNPlayerAnalyticsVideoRendererPerformanceMetricsCallbackCppProxy .cxx_construct] */

undefined8 * FUN_1091044bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_109104898();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1091044fc; end: 1091045ef;  */

void FUN_1091044fc(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110adc6c8;
  puVar1[3] = &PTR_DAT_110adc740;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  func_0x000107c316f8();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_109104898();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_110adc718;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_109104764(&uStack_50);
  return;
}



/* Entry: 1091045f0; end: 1091045f3;  */

void FUN_1091045f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110adc6c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1091045f4; end: 109104607;  */

void FUN_1091045f4(void)

{
  FUN_109104754();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109104608; end: 109104613;  */

long FUN_109104608(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110adc688;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 109104614; end: 10910464f;  */

void FUN_109104614(void)

{
  func_0x0001091048c0();
  return;
}



/* Entry: 109104650; end: 1091046bf;  */

void FUN_109104650(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_1091041c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e7860(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 1091046c0; end: 109104753;  */

long FUN_1091046c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110adc688;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 109104754; end: 109104763;  */

void FUN_109104754(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110adc6c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109104764; end: 10910478b;  */

long FUN_109104764(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10910478c; end: 1091047ff;  */

void FUN_10910478c(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110adc758;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_109104898();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_109104800);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001091048cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109104800; end: 10910486f;  */

void FUN_109104800(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dd610;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_109104898();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_109104870(&uStack_30);
  return;
}



/* Entry: 109104870; end: 109104897;  */

long FUN_109104870(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 109104898; end: 1091048e3;  */

void FUN_109104898(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1091048e4; end: 10910495b; -[SCNPlayerAnalyticsVideoRendererPerformanceMetricsProviderCppProxy initWithCpp:] */

undefined1 * FUN_1091048e4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1127006a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_109105010();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_109097164(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10910495c; end: 109104a17; -[SCNPlayerAnalyticsVideoRendererPerformanceMetricsProviderCppProxy loadVideoRendererPerformanceMetrics:] */

void FUN_10910495c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_40 [16];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_109104304(auStack_40,param_3);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_40);
  FUN_109104870(auStack_40);
  func_0x000109105028();
  return;
}



/* Entry: 109104a18; end: 109104a73; -[SCNPlayerAnalyticsVideoRendererPerformanceMetricsProviderCppProxy clear] */

void FUN_109104a18(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 109104a74; end: 109104b67;  */

void FUN_109104a74(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126dd618;
    _objc_opt_class(PTR_PTR_1126dd618);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_110adc7b0;
      uStack_40 = param_2;
      func_0x000107c316f4(&uStack_30,&ppuStack_38,&uStack_40,FUN_109104c6c);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x000107c27d28(&uStack_30);
      _objc_release(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_109104f04(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_109105010();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x000109105028();
  return;
}



/* Entry: 109104b68; end: 109104bd7;  */

void FUN_109104b68(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110adb1a0,&PTR_DAT_110adc768,0);
    if (lVar1 == 0) {
      FUN_109104f2c(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_1 = *(long **)(lVar1 + 0x18);
      _objc_retain(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 109104bd8; end: 109104c2b; -[SCNPlayerAnalyticsVideoRendererPerformanceMetricsProviderCppProxy .cxx_destruct] */

void FUN_109104bd8(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110adc890;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_109097164((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 109104c2c; end: 109104c6b; -[SCNPlayerAnalyticsVideoRendererPerformanceMetricsProviderCppProxy .cxx_construct] */

undefined8 * FUN_109104c2c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_109105010();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 109104c6c; end: 109104d5f;  */

void FUN_109104c6c(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110adc7f0;
  puVar1[3] = &PTR_DAT_110adc870;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  func_0x000107c316f8();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_109105010();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_110adc840;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_109104f04(&uStack_50);
  return;
}



/* Entry: 109104d60; end: 109104d63;  */

void FUN_109104d60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110adc7f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109104d64; end: 109104d77;  */

void FUN_109104d64(void)

{
  FUN_109104ef4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109104d78; end: 109104d83;  */

long FUN_109104d78(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110adc7b0;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 109104d84; end: 109104dbf;  */

void FUN_109104d84(void)

{
  func_0x000109105044();
  return;
}



/* Entry: 109104dc0; end: 109104e2f;  */

void FUN_109104dc0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_1091043f8(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09c700(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 109104e30; end: 109104e5f;  */

void FUN_109104e30(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010bf3a660(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 109104e60; end: 109104ef3;  */

long FUN_109104e60(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110adc7b0;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 109104ef4; end: 109104f03;  */

void FUN_109104ef4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110adc7f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109104f04; end: 109104f2b;  */

long FUN_109104f04(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 109104f2c; end: 109104f9f;  */

void FUN_109104f2c(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110adc890;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_109105010();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_109104fa0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000109105050();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109104fa0; end: 10910500f;  */

void FUN_109104fa0(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dd618;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_109105010();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_109097164(&uStack_30);
  return;
}



/* Entry: 109105010; end: 10910505b;  */

void FUN_109105010(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10910505c; end: 10910515b;  */

void FUN_10910505c(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c0c4bc0();
  uVar2 = param_2;
  func_0x00010bf3efc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20(&uStack_68);
  uVar3 = param_2;
  func_0x00010c2a5040();
  uVar4 = param_2;
  func_0x00010bfe0640();
  uVar5 = param_2;
  func_0x00010bfb6f20();
  func_0x00010bf137e0();
  *param_1 = (int)uVar1;
  *(undefined8 *)(param_1 + 4) = uStack_60;
  *(undefined8 *)(param_1 + 2) = uStack_68;
  *(undefined8 *)(param_1 + 6) = uStack_58;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  param_1[8] = (int)uVar3;
  param_1[9] = (int)uVar4;
  param_1[10] = (int)uVar5;
  param_1[0xb] = (int)param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_68);
  _objc_release(uVar2);
  FUN_1091051dc();
  return;
}



/* Entry: 10910515c; end: 1091051db;  */

void FUN_10910515c(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  
  puVar2 = PTR_PTR_1126dd450;
  _objc_alloc(PTR_PTR_1126dd450);
  uVar1 = *param_1;
  puVar3 = param_1 + 2;
  func_0x000107c27f28(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c029400(puVar2,param_2,uVar1,puVar3,param_1[8],param_1[9],param_1[10],param_1[0xb]);
  FUN_1091051dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091051dc; end: 1091051e3;  */

void FUN_1091051dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1091051e4; end: 10910538f; -[SCNPlayerAnalyticsPlaybackSummary initWithIdentifier:videoTrackInfo:avgLoadChunkLatencyUs:avgLoadTotalFileSizeUs:avgDecodeVideoLatencyUs:decodeVideoCount:decodeVideoFailCount:demuxVideoCount:avgDemuxVideoLatencyUs:demuxAudioCount:avgDemuxAudioLatencyUs:avgProcessVideoLatencyUs:avgProcessAudioLatencyUs:enqueuedOutputVideoSampleBufferCount:enqueuedOutputAudioSampleBufferCount:stallCount:totalStallDurationUs:videoRendererPerformance:] */

undefined8 *
FUN_1091051e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
             undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
             undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_21);
  puStack_68 = PTR_PTR_1127006a8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = puVar1[10];
    puVar1[10] = param_4;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 1) = param_5;
    *(undefined4 *)((long)puVar1 + 0xc) = param_6;
    *(undefined4 *)(puVar1 + 2) = param_7;
    *(undefined4 *)((long)puVar1 + 0x14) = param_8;
    *(undefined4 *)(puVar1 + 3) = param_9;
    *(undefined4 *)((long)puVar1 + 0x1c) = param_10;
    *(undefined4 *)(puVar1 + 4) = param_11;
    *(undefined4 *)((long)puVar1 + 0x24) = param_12;
    *(undefined4 *)(puVar1 + 5) = param_13;
    *(undefined4 *)((long)puVar1 + 0x2c) = param_14;
    *(undefined4 *)(puVar1 + 6) = param_15;
    *(undefined4 *)((long)puVar1 + 0x34) = param_16;
    *(undefined4 *)(puVar1 + 7) = param_17;
    *(undefined4 *)((long)puVar1 + 0x3c) = param_18;
    *(undefined4 *)(puVar1 + 8) = param_19;
    _objc_retain(param_21);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_21;
    _objc_release(uVar2);
  }
  _objc_release(param_21);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 109105390; end: 109105397; -[SCNPlayerAnalyticsPlaybackSummary identifier] */

undefined8 FUN_109105390(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 109105398; end: 10910539f; -[SCNPlayerAnalyticsPlaybackSummary videoTrackInfo] */

undefined8 FUN_109105398(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1091053a0; end: 1091053a7; -[SCNPlayerAnalyticsPlaybackSummary avgLoadChunkLatencyUs] */

undefined4 FUN_1091053a0(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 1091053a8; end: 1091053af; -[SCNPlayerAnalyticsPlaybackSummary avgLoadTotalFileSizeUs] */

undefined4 FUN_1091053a8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 1091053b0; end: 1091053b7; -[SCNPlayerAnalyticsPlaybackSummary avgDecodeVideoLatencyUs] */

undefined4 FUN_1091053b0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 1091053b8; end: 1091053bf; -[SCNPlayerAnalyticsPlaybackSummary decodeVideoCount] */

undefined4 FUN_1091053b8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 1091053c0; end: 1091053c7; -[SCNPlayerAnalyticsPlaybackSummary decodeVideoFailCount] */

undefined4 FUN_1091053c0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 1091053c8; end: 1091053cf; -[SCNPlayerAnalyticsPlaybackSummary demuxVideoCount] */

undefined4 FUN_1091053c8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* Entry: 1091053d0; end: 1091053d7; -[SCNPlayerAnalyticsPlaybackSummary avgDemuxVideoLatencyUs] */

undefined4 FUN_1091053d0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 1091053d8; end: 1091053df; -[SCNPlayerAnalyticsPlaybackSummary demuxAudioCount] */

undefined4 FUN_1091053d8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



/* Entry: 1091053e0; end: 1091053e7; -[SCNPlayerAnalyticsPlaybackSummary avgDemuxAudioLatencyUs] */

undefined4 FUN_1091053e0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



/* Entry: 1091053e8; end: 1091053ef; -[SCNPlayerAnalyticsPlaybackSummary avgProcessVideoLatencyUs] */

undefined4 FUN_1091053e8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



/* Entry: 1091053f0; end: 1091053f7; -[SCNPlayerAnalyticsPlaybackSummary avgProcessAudioLatencyUs] */

undefined4 FUN_1091053f0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



/* Entry: 1091053f8; end: 1091053ff; -[SCNPlayerAnalyticsPlaybackSummary enqueuedOutputVideoSampleBufferCount] */

undefined4 FUN_1091053f8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}



/* Entry: 109105400; end: 109105407; -[SCNPlayerAnalyticsPlaybackSummary enqueuedOutputAudioSampleBufferCount] */

undefined4 FUN_109105400(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



/* Entry: 109105408; end: 10910540f; -[SCNPlayerAnalyticsPlaybackSummary stallCount] */

undefined4 FUN_109105408(long param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



/* Entry: 109105410; end: 109105417; -[SCNPlayerAnalyticsPlaybackSummary totalStallDurationUs] */

undefined4 FUN_109105410(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



/* Entry: 109105418; end: 10910541f; -[SCNPlayerAnalyticsPlaybackSummary videoRendererPerformance] */

undefined8 FUN_109105418(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 109105420; end: 10910545b; -[SCNPlayerAnalyticsPlaybackSummary .cxx_destruct] */

void FUN_109105420(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x48,0);
  return;
}



/* Entry: 10910545c; end: 1091054cb; -[SCNPlayerAnalyticsVideoRendererPerformanceMetrics initWithCorruptedFramesCount:droppedFramesCount:totalFramesCount:displayedFramesUsingOptimizedCompositingCount:totalAccumulatedFrameDelayMs:] */

void FUN_10910545c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1127006b0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    *(undefined4 *)((long)puVar1 + 0xc) = param_4;
    *(undefined4 *)((long)puVar1 + 0x10) = param_5;
    *(undefined4 *)((long)puVar1 + 0x14) = param_6;
    *(undefined4 *)((long)puVar1 + 0x18) = param_7;
  }
  return;
}



/* Entry: 1091054cc; end: 1091054d3; -[SCNPlayerAnalyticsVideoRendererPerformanceMetrics corruptedFramesCount] */

undefined4 FUN_1091054cc(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 1091054d4; end: 1091054db; -[SCNPlayerAnalyticsVideoRendererPerformanceMetrics droppedFramesCount] */

undefined4 FUN_1091054d4(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 1091054dc; end: 1091054e3; -[SCNPlayerAnalyticsVideoRendererPerformanceMetrics totalFramesCount] */

undefined4 FUN_1091054dc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 1091054e4; end: 1091054eb; -[SCNPlayerAnalyticsVideoRendererPerformanceMetrics displayedFramesUsingOptimizedCompositingCount] */

undefined4 FUN_1091054e4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 1091054ec; end: 1091054f3; -[SCNPlayerAnalyticsVideoRendererPerformanceMetrics totalAccumulatedFrameDelayMs] */

undefined4 FUN_1091054ec(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 1091054f4; end: 1091055c7; -[SCNPlayerAnalyticsVideoTrackInfo initWithMediaDurationMs:codec:width:height:frameRate:bFrameDepth:] */

undefined1 *
FUN_1091054f4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1127006b8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0xc) = param_5;
    *(undefined4 *)((long)puVar1 + 0x10) = param_6;
    *(undefined4 *)((long)puVar1 + 0x14) = param_7;
    *(undefined4 *)((long)puVar1 + 0x18) = param_8;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1091055c8; end: 1091055cf; -[SCNPlayerAnalyticsVideoTrackInfo mediaDurationMs] */

undefined4 FUN_1091055c8(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 1091055d0; end: 1091055d7; -[SCNPlayerAnalyticsVideoTrackInfo codec] */

undefined8 FUN_1091055d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1091055d8; end: 1091055df; -[SCNPlayerAnalyticsVideoTrackInfo width] */

undefined4 FUN_1091055d8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 1091055e0; end: 1091055e7; -[SCNPlayerAnalyticsVideoTrackInfo height] */

undefined4 FUN_1091055e0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 1091055e8; end: 1091055ef; -[SCNPlayerAnalyticsVideoTrackInfo frameRate] */

undefined4 FUN_1091055e8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 1091055f0; end: 1091055f7; -[SCNPlayerAnalyticsVideoTrackInfo bFrameDepth] */

undefined4 FUN_1091055f0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 1091055f8; end: 109105603; -[SCNPlayerAnalyticsVideoTrackInfo .cxx_destruct] */

void FUN_1091055f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 109105604; end: 109105723;  */

void FUN_109105604(int param_1,long param_2,int param_3)

{
  undefined4 extraout_w8;
  long lVar1;
  long lVar2;
  long *unaff_x19;
  
  func_0x0001091066b0();
  if (((unaff_x19 != (long *)0x0) && (param_2 != 0)) &&
     (lVar1 = *(long *)(param_2 + 0x20), lVar1 != 0)) {
    lVar2 = *(long *)(param_2 + 8);
    *unaff_x19 = lVar1;
    unaff_x19[1] = lVar2;
    unaff_x19[2] = lVar1;
    *(int *)(unaff_x19 + 3) = param_3;
    func_0x000109106684();
    *(char *)((long)unaff_x19 + 0x1c) = (char)param_1;
    func_0x0001091066a8();
    if (param_3 == 0) {
      if (1 < *(byte *)((long)unaff_x19 + 0x1c)) {
        return;
      }
      if (param_1 != 0) {
        return;
      }
    }
    else if (*(byte *)((long)unaff_x19 + 0x1c) != 0 || param_1 != 0) {
      return;
    }
    func_0x000109106698();
    func_0x0001091066e8();
    *(undefined4 *)(unaff_x19 + 4) = extraout_w8;
    unaff_x19[5] = 0;
    *(undefined4 *)((long)unaff_x19 + 0x3c) = 0;
    *(undefined4 *)((long)unaff_x19 + 0x44) = 0;
  }
  return;
}



/* Entry: 109105724; end: 1091058a3;  */

undefined8 FUN_109105724(long *param_1,ulong param_2,ulong *param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar6 = 1;
  if (((param_1 != (long *)0x0) && (param_3 != (ulong *)0x0)) && (*param_1 != 0)) {
    if (param_4 == (undefined4 *)0x0) {
      if ((int)param_1[3] != 0) {
        return 1;
      }
    }
    else if ((int)param_1[3] == 0) {
      return 1;
    }
    lVar10 = param_1[5];
    uVar2 = lVar10 - 1U <= param_2;
    uVar4 = param_2 == lVar10 - 1U;
    if (!(bool)uVar2) {
      if ((int)param_1[4] == 0) {
        return 0x11;
      }
      *(undefined4 *)(param_1 + 7) = 0;
      plVar7 = param_1;
      func_0x000109106920(param_1,8);
      func_0x0001091066e0();
      func_0x0001091066d4();
      *(int *)(param_1 + 8) = (int)plVar7;
      while (*(int *)((long)param_1 + 0x3c) == 0) {
        func_0x000109106728();
        if (!(bool)uVar2 || (bool)uVar4) {
          return 0x11;
        }
        func_0x0001091066e0();
        func_0x0001091066d4();
        *(int *)(param_1 + 8) = (int)plVar7;
        *(int *)(param_1 + 7) = (int)param_1[7] + 1;
      }
      param_1[6] = 0;
      param_1[5] = 1;
      lVar10 = 1;
      *(undefined4 *)((long)param_1 + 0x44) = 1;
    }
    while (lVar10 - 1U < param_2) {
      uVar8 = (ulong)*(uint *)(param_1 + 8);
      uVar9 = *(uint *)((long)param_1 + 0x44);
      param_1[6] = param_1[6] + uVar8;
      while( true ) {
        bVar3 = uVar9 <= *(uint *)((long)param_1 + 0x3c);
        uVar1 = *(uint *)((long)param_1 + 0x3c) - uVar9;
        bVar5 = uVar1 == 0;
        if (!bVar5) break;
        func_0x000109106728();
        if (!bVar3 || bVar5) {
          return 0x11;
        }
        func_0x0001091066e0();
        func_0x0001091066d4();
        uVar9 = 0;
        *(int *)(param_1 + 7) = (int)param_1[7] + 1;
        *(int *)(param_1 + 8) = (int)uVar8;
        *(undefined4 *)((long)param_1 + 0x44) = 0;
      }
      uVar11 = (param_2 + 1) - param_1[5];
      if (uVar1 <= uVar11) {
        uVar11 = (ulong)uVar1;
      }
      lVar10 = uVar11 + param_1[5];
      *(uint *)((long)param_1 + 0x44) = uVar9 + (int)uVar11;
      param_1[5] = lVar10;
      param_1[6] = param_1[6] + (ulong)(uint)(((int)uVar11 + -1) * (int)uVar8);
    }
    if ((int)param_1[3] == 0) {
      uVar6 = 0;
      *param_3 = (ulong)*(uint *)(param_1 + 8);
    }
    else {
      uVar6 = 0;
      *param_3 = param_1[6];
      *param_4 = (int)param_1[8];
    }
  }
  return uVar6;
}



/* Entry: 1091058a4; end: 10910590f;  */

undefined8 FUN_1091058a4(long *param_1,ulong *param_2,uint *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  
  uVar8 = 1;
  if ((((param_1 != (long *)0x0) && (param_2 != (ulong *)0x0)) && (param_3 != (uint *)0x0)) &&
     (*param_1 != 0)) {
    uVar9 = param_1[5];
    if (*(uint *)((long)param_1 + 0x3c) <= *(uint *)((long)param_1 + 0x44)) {
      uVar8 = 1;
      if (((param_1 != (long *)0x0) && (param_2 != (ulong *)0x0)) && (*param_1 != 0)) {
        if (param_3 == (uint *)0x0) {
          if ((int)param_1[3] != 0) {
            return 1;
          }
        }
        else if ((int)param_1[3] == 0) {
          return 1;
        }
        lVar11 = param_1[5];
        uVar2 = lVar11 - 1U <= uVar9;
        uVar4 = uVar9 == lVar11 - 1U;
        if (!(bool)uVar2) {
          if ((int)param_1[4] == 0) {
            return 0x11;
          }
          *(undefined4 *)(param_1 + 7) = 0;
          plVar6 = param_1;
          func_0x000109106920(param_1,8);
          func_0x0001091066e0();
          func_0x0001091066d4();
          *(int *)(param_1 + 8) = (int)plVar6;
          while (*(int *)((long)param_1 + 0x3c) == 0) {
            func_0x000109106728();
            if (!(bool)uVar2 || (bool)uVar4) {
              return 0x11;
            }
            func_0x0001091066e0();
            func_0x0001091066d4();
            *(int *)(param_1 + 8) = (int)plVar6;
            *(int *)(param_1 + 7) = (int)param_1[7] + 1;
          }
          param_1[6] = 0;
          param_1[5] = 1;
          lVar11 = 1;
          *(undefined4 *)((long)param_1 + 0x44) = 1;
        }
        while (lVar11 - 1U < uVar9) {
          uVar7 = (ulong)*(uint *)(param_1 + 8);
          uVar10 = *(uint *)((long)param_1 + 0x44);
          param_1[6] = param_1[6] + uVar7;
          while( true ) {
            bVar3 = uVar10 <= *(uint *)((long)param_1 + 0x3c);
            uVar1 = *(uint *)((long)param_1 + 0x3c) - uVar10;
            bVar5 = uVar1 == 0;
            if (!bVar5) break;
            func_0x000109106728();
            if (!bVar3 || bVar5) {
              return 0x11;
            }
            func_0x0001091066e0();
            func_0x0001091066d4();
            uVar10 = 0;
            *(int *)(param_1 + 7) = (int)param_1[7] + 1;
            *(int *)(param_1 + 8) = (int)uVar7;
            *(undefined4 *)((long)param_1 + 0x44) = 0;
          }
          uVar12 = (uVar9 + 1) - param_1[5];
          if (uVar1 <= uVar12) {
            uVar12 = (ulong)uVar1;
          }
          lVar11 = uVar12 + param_1[5];
          *(uint *)((long)param_1 + 0x44) = uVar10 + (int)uVar12;
          param_1[5] = lVar11;
          param_1[6] = param_1[6] + (ulong)(uint)(((int)uVar12 + -1) * (int)uVar7);
        }
        if ((int)param_1[3] == 0) {
          uVar8 = 0;
          *param_2 = (ulong)*(uint *)(param_1 + 8);
        }
        else {
          uVar8 = 0;
          *param_2 = param_1[6];
          *param_3 = *(uint *)(param_1 + 8);
        }
      }
      return uVar8;
    }
    uVar8 = 0;
    *(uint *)((long)param_1 + 0x44) = *(uint *)((long)param_1 + 0x44) + 1;
    uVar10 = *(uint *)(param_1 + 8);
    uVar7 = param_1[6] + (ulong)uVar10;
    param_1[5] = uVar9 + 1;
    param_1[6] = uVar7;
    *param_2 = uVar7;
    *param_3 = uVar10;
  }
  return uVar8;
}



/* Entry: 109105910; end: 1091059b3;  */

void FUN_109105910(undefined4 param_1,long param_2,int param_3)

{
  uint uVar1;
  int extraout_w8;
  undefined4 extraout_w8_00;
  long unaff_x19;
  int unaff_w21;
  long lVar2;
  
  func_0x0001091066b0();
  if ((unaff_x19 != 0) && (param_2 != 0)) {
    func_0x000109106660();
    func_0x00010910668c();
    func_0x0001091066f4();
    if ((unaff_w21 == 0) && (extraout_w8 == 0)) {
      if (param_3 == 0) {
        *(undefined1 *)(unaff_x19 + 0x20) = 0x20;
        func_0x000109106698();
      }
      else {
        lVar2 = unaff_x19;
        func_0x0001091068f4();
        uVar1 = (uint)lVar2;
        func_0x000109106684();
        *(char *)(unaff_x19 + 0x20) = (char)uVar1;
        if (0x10 < uVar1) {
          return;
        }
        if ((1 << (ulong)(uVar1 & 0x1f) & 0x10110U) == 0) {
          return;
        }
        param_1 = 0;
      }
      *(undefined4 *)(unaff_x19 + 0x18) = param_1;
      func_0x000109106698();
      func_0x0001091066e8();
      *(undefined4 *)(unaff_x19 + 0x1c) = extraout_w8_00;
      *(undefined4 *)(unaff_x19 + 0x24) = 0;
    }
  }
  return;
}



/* Entry: 1091059b4; end: 109105af3;  */

void FUN_1091059b4(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  long *unaff_x19;
  
  func_0x0001091066b0();
  if (unaff_x19 == (long *)0x0) {
    return;
  }
  if (param_2 == (uint *)0x0) {
    return;
  }
  if (*unaff_x19 == 0) {
    return;
  }
  uVar2 = *(uint *)((long)unaff_x19 + 0x24);
  if (*(uint *)((long)unaff_x19 + 0x1c) <= uVar2) {
    return;
  }
  uVar1 = *(uint *)(unaff_x19 + 3);
  if (uVar1 == 0) {
    switch(*(byte *)(unaff_x19 + 4) - 4 >> 2 | (uint)*(byte *)(unaff_x19 + 4) << 0x1e) {
    case 0:
      if ((uVar2 & 1) == 0) {
        func_0x000109106684();
        *(char *)((long)unaff_x19 + 0x21) = (char)uVar1;
        uVar1 = uVar1 >> 4;
      }
      else {
        uVar1 = *(byte *)((long)unaff_x19 + 0x21) & 0xf;
      }
      break;
    case 1:
      func_0x000109106684();
      break;
    default:
      goto LAB_1091059f8;
    case 3:
      func_0x000109106700();
      break;
    case 7:
      func_0x000109106698();
    }
  }
  *param_2 = uVar1;
  uVar2 = *(uint *)((long)unaff_x19 + 0x24);
LAB_1091059f8:
  *(uint *)((long)unaff_x19 + 0x24) = uVar2 + 1;
  return;
}



/* Entry: 109105af4; end: 109105c53;  */

void FUN_109105af4(undefined8 param_1,uint *param_2,undefined4 *param_3,int *param_4)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  long *unaff_x20;
  
  func_0x000109106750();
  if ((((unaff_x20 != (long *)0x0) && (param_2 != (uint *)0x0)) && (param_3 != (undefined4 *)0x0))
     && ((param_4 != (int *)0x0 && (*unaff_x20 != 0)))) {
    uVar3 = *(uint *)(unaff_x20 + 4);
    iVar4 = *(int *)((long)unaff_x20 + 0x24);
    while ((int)unaff_x20[6] == iVar4) {
      uVar3 = uVar3 + 1;
      *(uint *)(unaff_x20 + 4) = uVar3;
      *(undefined4 *)(unaff_x20 + 6) = 0;
      uVar2 = (ulong)*(uint *)((long)unaff_x20 + 0x2c);
      while ((uVar3 == (uint)uVar2 || (iVar4 = *(int *)((long)unaff_x20 + 0x24), iVar4 == 0))) {
        if (*(uint *)(unaff_x20 + 3) <= *(uint *)((long)unaff_x20 + 0x1c)) {
          return;
        }
        *(uint *)(unaff_x20 + 4) = (uint)uVar2;
        func_0x0001091066bc();
        *(int *)((long)unaff_x20 + 0x24) = (int)uVar2;
        func_0x0001091066bc();
        *(int *)(unaff_x20 + 5) = (int)uVar2;
        uVar3 = *(int *)((long)unaff_x20 + 0x1c) + 1;
        *(uint *)((long)unaff_x20 + 0x1c) = uVar3;
        if (uVar3 < *(uint *)(unaff_x20 + 3)) {
          func_0x0001091066bc();
          *(uint *)((long)unaff_x20 + 0x2c) = (uint)uVar2;
          uVar3 = *(uint *)(unaff_x20 + 4);
          if ((uint)uVar2 < uVar3) {
            return;
          }
        }
        else {
          uVar2 = 0xffffffff;
          *(undefined4 *)((long)unaff_x20 + 0x2c) = 0xffffffff;
          uVar3 = *(uint *)(unaff_x20 + 4);
        }
      }
    }
    *param_2 = uVar3;
    *param_3 = (int)unaff_x20[5];
    lVar1 = unaff_x20[6];
    *param_4 = (int)lVar1;
    *(int *)(unaff_x20 + 6) = (int)lVar1 + 1;
  }
  return;
}



/* Entry: 109105c54; end: 109105ccb;  */

undefined8 FUN_109105c54(long *param_1,ulong *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if ((param_1 != (long *)0x0) && (param_2 != (ulong *)0x0)) {
    if (*param_1 == 0) {
      uVar1 = 1;
    }
    else if (*(uint *)((long)param_1 + 0x1c) < *(uint *)(param_1 + 3)) {
      *(uint *)((long)param_1 + 0x1c) = *(uint *)((long)param_1 + 0x1c) + 1;
      if ((int)param_1[4] == 0) {
        func_0x000109106814();
        param_1 = (long *)((ulong)param_1 & 0xffffffff);
      }
      else {
        func_0x00010910685c();
      }
      uVar1 = 0;
      *param_2 = (ulong)param_1;
    }
    else {
      uVar1 = 0x11;
    }
  }
  return uVar1;
}



/* Entry: 109105ccc; end: 109105e1f;  */

void FUN_109105ccc(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  int extraout_w8;
  uint uVar3;
  ulong uVar4;
  
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = param_1;
    FUN_109106660();
    uVar1 = uVar3;
    func_0x0001091066a8();
    func_0x0001091066f4();
    uVar3 = (uint)puVar2;
    if ((uVar3 == 0) && (extraout_w8 == 0)) {
      func_0x000109106698();
      *(uint *)(param_1 + 3) = uVar1;
      if ((uVar1 >> 0x10 == 0) && (param_1[1] != 0xffffffffffffffff)) {
        if (uVar1 != 0) {
          uVar4 = (ulong)(uVar1 << 2);
          if ((ulong)param_1[1] < uVar4) {
            return;
          }
          _free(param_1[5]);
          _malloc();
          param_1[5] = uVar4;
          if (uVar4 == 0) {
            return;
          }
          *(uint *)((long)param_1 + 0x24) = uVar1;
          _memcpy();
        }
        *(undefined4 *)((long)param_1 + 0x1c) = 0;
        *(undefined4 *)(param_1 + 4) = 0;
      }
    }
  }
  return;
}



/* Entry: 109105e20; end: 109105e8f;  */

void FUN_109105e20(uint param_1,long param_2,int param_3,int param_4)

{
  undefined4 extraout_w8;
  undefined8 *unaff_x19;
  
  func_0x0001091066b0();
  if (((unaff_x19 != (undefined8 *)0x0) && (param_3 != 0)) && (param_4 != 0)) {
    if (param_2 == 0) {
      *unaff_x19 = 0;
    }
    else {
      *(int *)(unaff_x19 + 4) = param_4;
      *(int *)((long)unaff_x19 + 0x24) = param_3;
      func_0x000109106660();
      *(char *)(unaff_x19 + 3) = (char)param_1;
      if ((param_1 < 2) && (func_0x0001091066a8(), param_1 == 0)) {
        func_0x000109106698();
        func_0x0001091066e8();
        *(undefined4 *)((long)unaff_x19 + 0x1c) = extraout_w8;
        unaff_x19[6] = 0;
        unaff_x19[7] = 0;
        unaff_x19[5] = 0xffffffffffffffff;
      }
    }
  }
  return;
}



/* Entry: 109105e90; end: 1091060e3;  */

undefined8
FUN_109105e90(long *param_1,ulong param_2,uint param_3,ulong *param_4,int *param_5,uint *param_6)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  int iVar7;
  long extraout_x8;
  long lVar8;
  long extraout_x8_00;
  long extraout_x9;
  long lVar9;
  long extraout_x9_00;
  ulong extraout_x10;
  ulong extraout_x10_00;
  int iVar10;
  long lVar11;
  
  uVar5 = 1;
  if ((((param_1 != (long *)0x0) && (param_4 != (ulong *)0x0)) && (param_5 != (int *)0x0)) &&
     (param_6 != (uint *)0x0)) {
    if (*param_1 != 0) {
      func_0x00010910673c(param_1[5],1);
      lVar8 = extraout_x8;
      lVar9 = extraout_x9;
      if (param_2 < extraout_x10) {
        func_0x000109106920(param_1,4);
        plVar6 = param_1;
        func_0x000109106814();
        lVar9 = 0;
        *(int *)((long)param_1 + 0x1c) = (int)plVar6;
        lVar8 = -1;
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[5] = -1;
      }
      lVar11 = -1;
      do {
        if (lVar8 != -1) {
          if ((short)param_1[8] == 0) {
            if ((long)param_2 <= lVar8) {
              uVar5 = 0x17;
              goto LAB_109106044;
            }
          }
          else if (((short)param_1[8] != 1) ||
                  (func_0x00010910673c(), lVar8 = extraout_x8_00, lVar9 = extraout_x9_00,
                  param_2 < extraout_x10_00)) {
            uVar5 = 0;
LAB_109106044:
            uVar1 = (ulong)*(uint *)(param_1 + 4);
            uVar2 = *(uint *)((long)param_1 + 0x24);
            uVar4 = 0;
            if (uVar1 != 0) {
              uVar4 = (param_1[6] * (ulong)uVar2) / uVar1;
            }
            *param_4 = (param_2 - lVar8) + uVar4;
            lVar8 = param_1[5];
            lVar9 = param_1[7];
            uVar4 = 0;
            if (uVar1 != 0) {
              uVar4 = (lVar9 * (ulong)uVar2) / uVar1;
            }
            iVar7 = (int)lVar8;
            iVar10 = (int)param_2;
            if (uVar4 + lVar8 < param_2 + param_3) {
              if ((long)param_2 < lVar8) {
                *param_5 = iVar7 - iVar10;
                param_3 = 0;
                if ((ulong)*(uint *)(param_1 + 4) != 0) {
                  param_3 = (uint)((lVar9 * (ulong)*(uint *)((long)param_1 + 0x24)) /
                                  (ulong)*(uint *)(param_1 + 4));
                }
              }
              else {
                *param_5 = 0;
                iVar3 = 0;
                if ((ulong)*(uint *)(param_1 + 4) != 0) {
                  iVar3 = (int)((lVar9 * (ulong)*(uint *)((long)param_1 + 0x24)) /
                               (ulong)*(uint *)(param_1 + 4));
                }
                param_3 = (iVar7 - iVar10) + iVar3;
              }
            }
            else {
              if ((long)(param_2 + param_3) <= lVar8) {
                return 0x13;
              }
              if (lVar8 <= (long)param_2) goto LAB_109106010;
              *param_5 = iVar7 - iVar10;
              param_3 = param_3 - (iVar7 - iVar10);
            }
            goto LAB_109106014;
          }
        }
        if (-1 < lVar8) {
          lVar11 = lVar8;
        }
        if (*(int *)((long)param_1 + 0x1c) == 0) {
          return 0x14;
        }
        param_1[6] = param_1[6] + lVar9;
        if ((char)param_1[3] == '\x01') {
          plVar6 = param_1;
          func_0x00010910685c();
          param_1[7] = (long)plVar6;
          plVar6 = param_1;
          func_0x00010910685c();
        }
        else {
          plVar6 = param_1;
          func_0x000109106814();
          param_1[7] = (ulong)plVar6 & 0xffffffff;
          plVar6 = param_1;
          func_0x000109106814();
          plVar6 = (long *)(long)(int)plVar6;
        }
        param_1[5] = (long)plVar6;
        plVar6 = param_1;
        func_0x000109106790();
        *(short *)(param_1 + 8) = (short)plVar6;
        if ((1 < (uint)plVar6) || (plVar6 = param_1, func_0x000109106790(), (int)plVar6 != 0)) {
          return 0x17;
        }
        lVar8 = param_1[5];
        if (lVar8 < -1) {
          return 0x17;
        }
        if (lVar8 != -1 && lVar8 < lVar11) {
          return 0x17;
        }
        *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + -1;
        lVar9 = param_1[7];
        if (lVar9 == 0) {
          param_1[7] = 0xffffffff;
          lVar9 = 0xffffffff;
        }
      } while( true );
    }
    uVar5 = 0;
    *param_4 = param_2;
LAB_109106010:
    *param_5 = 0;
LAB_109106014:
    *param_6 = param_3;
  }
  return uVar5;
}



/* Entry: 1091060e4; end: 109106127;  */

void FUN_1091060e4(undefined8 param_1,long param_2,undefined4 param_3)

{
  int extraout_w8;
  long unaff_x19;
  int unaff_w21;
  
  func_0x0001091066b0();
  if ((unaff_x19 != 0) && (param_2 != 0)) {
    func_0x000109106660();
    func_0x00010910668c();
    func_0x0001091066f4();
    if ((unaff_w21 == 0) && (extraout_w8 == 0)) {
      *(undefined4 *)(unaff_x19 + 0x18) = param_3;
      *(undefined4 *)(unaff_x19 + 0x1c) = 0;
    }
  }
  return;
}



/* Entry: 109106128; end: 109106177;  */

void FUN_109106128(undefined8 param_1,undefined1 *param_2)

{
  undefined1 extraout_w8;
  long *unaff_x19;
  
  func_0x0001091066b0();
  if ((((unaff_x19 != (long *)0x0) && (param_2 != (undefined1 *)0x0)) && (*unaff_x19 != 0)) &&
     (*(uint *)((long)unaff_x19 + 0x1c) < *(uint *)(unaff_x19 + 3))) {
    func_0x000109106684();
    func_0x0001091066e8();
    *param_2 = extraout_w8;
    func_0x0001091066c4();
  }
  return;
}



/* Entry: 109106178; end: 1091061bb;  */

void FUN_109106178(undefined8 param_1,long param_2,undefined4 param_3)

{
  int extraout_w8;
  long unaff_x19;
  int unaff_w21;
  
  func_0x0001091066b0();
  if ((unaff_x19 != 0) && (param_2 != 0)) {
    func_0x000109106660();
    func_0x00010910668c();
    func_0x0001091066f4();
    if ((unaff_w21 == 0) && (extraout_w8 == 0)) {
      *(undefined4 *)(unaff_x19 + 0x18) = param_3;
      *(undefined4 *)(unaff_x19 + 0x1c) = 0;
    }
  }
  return;
}



/* Entry: 1091061bc; end: 10910620b;  */

void FUN_1091061bc(undefined8 param_1,undefined2 *param_2)

{
  undefined2 extraout_w8;
  long *unaff_x19;
  
  func_0x0001091066b0();
  if ((((unaff_x19 != (long *)0x0) && (param_2 != (undefined2 *)0x0)) && (*unaff_x19 != 0)) &&
     (*(uint *)((long)unaff_x19 + 0x1c) < *(uint *)(unaff_x19 + 3))) {
    func_0x000109106700();
    func_0x0001091066e8();
    *param_2 = extraout_w8;
    func_0x0001091066c4();
  }
  return;
}



/* Entry: 10910620c; end: 1091062bf;  */

void FUN_10910620c(undefined8 param_1,long param_2,int param_3)

{
  int extraout_w8;
  long unaff_x19;
  int unaff_w21;
  
  func_0x0001091066b0();
  if ((unaff_x19 != 0) && (param_2 != 0)) {
    func_0x000109106660();
    func_0x00010910668c();
    func_0x0001091066f4();
    if ((unaff_w21 == 0) && (extraout_w8 == 0)) {
      if (param_3 == 0) {
        param_3 = *(int *)(unaff_x19 + 8);
      }
      *(int *)(unaff_x19 + 0x18) = param_3;
      *(undefined4 *)(unaff_x19 + 0x1c) = 0;
    }
  }
  return;
}



/* Entry: 1091062c0; end: 10910637f;  */

ulong FUN_1091062c0(ulong param_1,undefined1 *param_2,uint param_3,undefined2 *param_4,
                   undefined8 *param_5)

{
  undefined1 *puVar1;
  undefined8 *unaff_x19;
  
  if (param_1 != 0) {
    if (param_3 == 0x10 || param_3 == 8) {
      puVar1 = param_2;
      func_0x0001091066b0();
      if (((puVar1 != (undefined1 *)0x0) && (param_4 != (undefined2 *)0x0)) &&
         (param_5 != (undefined8 *)0x0)) {
        for (; (param_3 & 0xff) != 0; param_3 = param_3 - 1) {
          func_0x000109106684();
          *param_2 = (char)param_1;
          param_2 = param_2 + 1;
        }
        if (*(int *)((long)unaff_x19 + 0x1c) == 2) {
          func_0x000109106700();
          *param_4 = (short)param_1;
          *param_5 = *unaff_x19;
          for (; (param_1 & 0xffff) != 0; param_1 = (ulong)((int)param_1 - 1)) {
            func_0x000109106700();
            func_0x000109106698();
          }
        }
        else {
          *param_4 = 0;
          *param_5 = 0;
        }
        param_1 = 0;
        *(int *)(unaff_x19 + 4) = *(int *)(unaff_x19 + 4) + 1;
      }
    }
    else {
      param_1 = 1;
    }
    return param_1;
  }
  return 1;
}



/* Entry: 109106380; end: 10910665f;  */

void FUN_109106380(int param_1,long param_2)

{
  int extraout_w8;
  undefined4 extraout_w8_00;
  long unaff_x19;
  
  func_0x0001091066b0();
  if ((unaff_x19 != 0) && (param_2 != 0)) {
    func_0x000109106660();
    func_0x0001091066a8();
    func_0x0001091066f4();
    if ((param_1 == 0) && (extraout_w8 == 0)) {
      func_0x000109106698();
      func_0x0001091066e8();
      *(undefined4 *)(unaff_x19 + 0x18) = extraout_w8_00;
      *(undefined4 *)(unaff_x19 + 0x1c) = 0;
    }
  }
  return;
}



/* Entry: 109106660; end: 10910695b;  */

undefined1 FUN_109106660(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long *unaff_x19;
  
  lVar2 = *(long *)(param_2 + 0x20);
  lVar4 = *(long *)(param_2 + 8);
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar4;
  unaff_x19[2] = lVar2;
  if (unaff_x19[1] + 1U < 2) {
    uVar1 = 0xff;
    lVar2 = -1;
  }
  else {
    puVar3 = (undefined1 *)*unaff_x19;
    *unaff_x19 = (long)(puVar3 + 1);
    uVar1 = *puVar3;
    lVar2 = unaff_x19[1] + -1;
  }
  unaff_x19[1] = lVar2;
  return uVar1;
}



/* Entry: 10910695c; end: 1091069cb;  */

void FUN_10910695c(long *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = param_3 & 0xffffffff;
  if ((ulong)param_1[1] < (param_3 & 0xffffffff) || param_1[1] == 0xffffffffffffffff) {
    param_1[1] = -1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_11034bf90)(param_2,uVar1);
    return;
  }
  _memcpy(param_2,*param_1,uVar1);
  *param_1 = *param_1 + uVar1;
  param_1[1] = param_1[1] - uVar1;
  return;
}



/* Entry: 1091069cc; end: 109106a0f;  */

void FUN_1091069cc(long *param_1,undefined8 param_2)

{
  if ((ulong)param_1[1] < 4 || param_1[1] == 0xffffffffffffffff) {
    param_1[1] = -1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_11034bf90)(param_2,4);
    return;
  }
  _memcpy(param_2,*param_1,4);
  *param_1 = *param_1 + 4;
  param_1[1] = param_1[1] + -4;
  return;
}



/* Entry: 109106a10; end: 109106a8f;  */

undefined8 FUN_109106a10(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  long extraout_x8;
  long lVar1;
  long extraout_x9;
  long lVar2;
  char *pcStack_38;
  
  lVar2 = *(long *)(param_2 + 0x10);
  func_0x00010910855c();
  if ((bool)in_CY) {
    pcStack_38 = (char *)(extraout_x8 + 1);
    lVar1 = extraout_x9 + -1;
  }
  else {
    lVar1 = -1;
  }
  func_0x0001091086a8(lVar1);
  if ((((*pcStack_38 == 'v') && (pcStack_38[1] == 'd')) && (pcStack_38[2] == 'e')) &&
     (pcStack_38[3] == 'p')) {
    *(undefined4 *)(*(long *)(lVar2 + 0x68) + 0xf4) = 1;
  }
  return 0;
}



/* Entry: 109106a90; end: 109106c0b;  */

undefined4 FUN_109106a90(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  long lVar15;
  int iStack_7c;
  char *pcStack_78;
  long lStack_70;
  char *pcStack_68;
  
  lVar15 = *(long *)(param_2 + 0x10);
  pcStack_68 = *(char **)(param_1 + 0x20);
  if (*(long *)(param_1 + 8) + 1U < 2) {
LAB_109106ad0:
    uVar14 = 0x17;
  }
  else {
    pcStack_78 = pcStack_68 + 1;
    cVar1 = *pcStack_68;
    lStack_70 = *(long *)(param_1 + 8) + -1;
    iVar2 = (int)&pcStack_78;
    func_0x0001091067dc();
    iStack_7c = iVar2;
    if (cVar1 == '\0') {
      func_0x000109108578();
      func_0x000109108578();
      func_0x000109108578();
      iVar3 = iStack_7c;
      func_0x000109108578();
      func_0x000109108578();
    }
    else {
      if (cVar1 != '\x01') goto LAB_109106ad0;
      func_0x0001091086b4();
      func_0x0001091086b4();
      func_0x000109108578();
      iVar3 = iStack_7c;
      func_0x000109108578();
      func_0x0001091086b4();
    }
    if (lStack_70 + 1U < 0x11) {
      lStack_70 = -1;
    }
    else {
      pcStack_78 = pcStack_78 + 0x10;
      lStack_70 = lStack_70 + -0x10;
    }
    func_0x000109108578();
    iVar4 = iVar3;
    func_0x000109108578();
    iVar5 = iVar4;
    func_0x000109108578();
    iVar6 = iVar5;
    func_0x000109108578();
    iVar7 = iVar6;
    func_0x000109108578();
    iVar8 = iVar7;
    func_0x000109108578();
    iVar9 = iVar8;
    func_0x000109108578();
    iVar10 = iVar9;
    func_0x000109108578();
    iVar11 = iVar10;
    func_0x000109108578();
    iVar12 = iVar11;
    func_0x000109108578();
    iVar13 = iVar12;
    func_0x000109108578();
    lVar15 = *(long *)(lVar15 + 0x68);
    if (lVar15 != 0) {
      *(int *)(lVar15 + 8) = iStack_7c;
      *(int *)(lVar15 + 0xc) = iVar2;
      *(int *)(lVar15 + 0x38) = iVar3;
      *(int *)(lVar15 + 0x3c) = iVar4;
      *(int *)(lVar15 + 0x40) = iVar5;
      *(int *)(lVar15 + 0x44) = iVar6;
      *(int *)(lVar15 + 0x48) = iVar7;
      *(int *)(lVar15 + 0x4c) = iVar8;
      *(int *)(lVar15 + 0x50) = iVar9;
      *(int *)(lVar15 + 0x54) = iVar10;
      *(int *)(lVar15 + 0x58) = iVar11;
      *(int *)(lVar15 + 0x30) = iVar12;
      *(int *)(lVar15 + 0x34) = iVar13;
    }
    uVar14 = 9;
    if (iStack_7c != 0) {
      uVar14 = 0;
    }
  }
  return uVar14;
}



/* Entry: 109106c0c; end: 109106ce7;  */

void FUN_109106c0c(long param_1,long param_2,ulong param_3,int param_4,undefined8 param_5,
                  ulong *param_6)

{
  ulong uVar1;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_6 != (ulong *)0x0)) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    func_0x0001091086f0(param_2,param_3,param_1);
    uVar1 = (ulong)*(uint *)(param_1 + 4);
    if (uVar1 <= param_3) {
      uVar1 = *(long *)(param_1 + 8) + uVar1;
    }
    *param_6 = uVar1;
    *(undefined8 *)(param_1 + 0x30) = param_5;
    if (((int)param_2 == 0) && ((param_4 != 0 || ((*(uint *)(param_1 + 0x10) & 1) == 0)))) {
      func_0x0001091085f0(*(undefined8 *)(param_1 + 0x20));
      FUN_10910887c();
    }
  }
  return;
}



/* Entry: 109106ce8; end: 109106d3f;  */

undefined8 FUN_109106ce8(char *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 1;
  if ((param_1 != (char *)0x0) && (param_2 != (undefined8 *)0x0)) {
    if ((*param_1 != 'm') || (((param_1[1] != 'o' || (param_1[2] != 'o')) || (param_1[3] != 'v'))))
    {
      return 8;
    }
    uVar1 = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    param_2[1] = *(undefined8 *)(param_1 + 0x60);
    *param_2 = uVar2;
  }
  return uVar1;
}



/* Entry: 109106d40; end: 109106d9b;  */

void FUN_109106d40(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 1;
  if ((param_1 != 0) && (param_3 != 0)) {
    func_0x00010910861c();
    func_0x000109108680();
    piVar2 = (int *)(*(long *)(param_1 + 0x68) + 8);
    if ((*piVar2 != 0) && (iVar1 == 0)) {
      _memcpy(param_3,piVar2,0x58);
    }
  }
  return;
}



/* Entry: 109106d9c; end: 109106e37;  */

char * FUN_109106d9c(char *param_1,undefined8 param_2)

{
  undefined1 auStack_50 [32];
  undefined8 uStack_30;
  
  if (*param_1 == 'm') {
    if (((param_1[1] == 'o') && (param_1[2] == 'o')) && (param_1[3] == 'v')) {
      FUN_109108a94(param_1,&DAT_10f551c0b,param_2,auStack_50);
      if ((int)param_1 == 0) {
        func_0x0001091085f0(uStack_30);
        func_0x000109107124();
      }
      else {
        param_1 = (char *)0x15;
      }
    }
    else {
      param_1 = (char *)0x13;
    }
    return param_1;
  }
  return (char *)0x13;
}



/* Entry: 109106e38; end: 109107387;  */

void FUN_109106e38(long param_1,undefined8 param_2,int param_3,long param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar2 = 1;
  if (param_3 == 0) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  if (param_4 == 0) {
    return;
  }
  func_0x00010910861c();
  **(int **)(param_1 + 0x68) = param_3;
  func_0x000109108680();
  if (iVar2 != 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x68);
  cVar1 = *(char *)(lVar3 + 0x22);
  if (cVar1 == 'm') {
    if (((*(char *)(lVar3 + 0x23) != 'e') || (*(char *)(lVar3 + 0x24) != 't')) ||
       (*(char *)(lVar3 + 0x25) != 'a')) goto LAB_109106f40;
LAB_109106f38:
    lVar4 = *(long *)(lVar3 + 0x68);
  }
  else {
    if (cVar1 == 's') {
      if (*(char *)(lVar3 + 0x23) == 'u') {
        if ((*(char *)(lVar3 + 0x24) != 'b') || (*(char *)(lVar3 + 0x25) != 't'))
        goto LAB_109106f40;
        goto LAB_109106f38;
      }
      if (((*(char *)(lVar3 + 0x23) != 'o') || (*(char *)(lVar3 + 0x24) != 'u')) ||
         (*(char *)(lVar3 + 0x25) != 'n')) goto LAB_109106f40;
    }
    else if ((((cVar1 != 'v') || (*(char *)(lVar3 + 0x23) != 'i')) ||
             (*(char *)(lVar3 + 0x24) != 'd')) || (*(char *)(lVar3 + 0x25) != 'e'))
    goto LAB_109106f40;
    lVar4 = *(long *)(lVar3 + 0x70);
  }
  if (lVar4 == 0) {
    return;
  }
LAB_109106f40:
  _memcpy(param_4,lVar3 + 0x60,0xc0);
  return;
}


