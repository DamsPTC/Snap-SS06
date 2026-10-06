/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106372fdc; end: 106372fff; -[SCOperaLoadingIndicatorLogEntry copyWithZone:] */

undefined8 FUN_106372fdc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106373000; end: 106373087; -[SCOperaLoadingIndicatorLogEntry hash] */

ulong * FUN_106373000(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  double dVar5;
  ulong uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uStack_38 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_28 = *(undefined8 *)(param_1 + 0x18);
  uStack_30 = *(undefined8 *)(param_1 + 0x10);
  uStack_20 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = &uStack_38;
  func_0x000100505190(puVar1,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar4 = (ulong *)0x1;
  }
  else {
    puVar4 = (ulong *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar4 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((ulong)puVar2 & 1) == 0) ||
         (((puVar1[2] != param_3[2] || (puVar1[3] != param_3[3])) || (puVar1[4] != param_3[4])))) {
        puVar4 = (ulong *)0x0;
      }
      else {
        dVar5 = ABS((double)puVar1[1] + (double)param_3[1]) * 2.220446049250313e-16;
        if (dVar5 <= 2.2250738585072014e-308) {
          dVar5 = 2.2250738585072014e-308;
        }
        puVar4 = (ulong *)(ulong)(ABS((double)puVar1[1] - (double)param_3[1]) < dVar5);
      }
    }
  }
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 106373088; end: 106373163; -[SCOperaLoadingIndicatorLogEntry isEqual:] */

bool FUN_106373088(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if (((uVar2 & 1) == 0) ||
         (((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
           (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) ||
          (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))))) {
        bVar3 = false;
      }
      else {
        dVar4 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
        if (dVar4 <= 2.2250738585072014e-308) {
          dVar4 = 2.2250738585072014e-308;
        }
        bVar3 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8)) < dVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 106373164; end: 10637316b; -[SCOperaLoadingIndicatorLogEntry timeStamp] */

undefined8 FUN_106373164(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10637316c; end: 106373173; -[SCOperaLoadingIndicatorLogEntry logEntryType] */

undefined8 FUN_10637316c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106373174; end: 10637317b; -[SCOperaLoadingIndicatorLogEntry operaLayerType] */

undefined8 FUN_106373174(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10637317c; end: 106373183; -[SCOperaLoadingIndicatorLogEntry reason] */

undefined8 FUN_10637317c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106373184; end: 106373207; -[SCPageLoadMetric viewDidLoad] */

void FUN_106373184(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _CACurrentMediaTime();
  _os_unfair_lock_lock(param_2 + 0x3c);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 8),param_3,puVar1,
                      &PTR____CFConstantStringClassReference_110e4c2f8);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_2 + 0x3c);
  return;
}



/* Entry: 106373208; end: 10637328b; -[SCPageLoadMetric pageIsVisible] */

void FUN_106373208(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _CACurrentMediaTime();
  _os_unfair_lock_lock(param_2 + 0x3c);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 8),param_3,puVar1,
                      &PTR____CFConstantStringClassReference_110e4c2d8);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_2 + 0x3c);
  return;
}



/* Entry: 10637328c; end: 106373317; -[SCPageLoadMetric injectionStart] */

void FUN_10637328c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _CACurrentMediaTime();
  func_0x00010bf18780(*(undefined8 *)(param_2 + 0x28));
  _os_unfair_lock_lock(param_2 + 0x3c);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 8),param_3,puVar1,
                      &PTR____CFConstantStringClassReference_110e4c318);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_2 + 0x3c);
  return;
}



/* Entry: 106373318; end: 1063733a3; -[SCPageLoadMetric injectionEnd] */

void FUN_106373318(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _CACurrentMediaTime();
  func_0x00010bf94f40(*(undefined8 *)(param_2 + 0x28));
  _os_unfair_lock_lock(param_2 + 0x3c);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 8),param_3,puVar1,
                      &PTR____CFConstantStringClassReference_110e4c338);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_2 + 0x3c);
  return;
}



/* Entry: 1063733a4; end: 10637342f; -[SCPageLoadMetric viewModelCreationStart] */

void FUN_1063733a4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _CACurrentMediaTime();
  func_0x00010bf18f40(*(undefined8 *)(param_2 + 0x28));
  _os_unfair_lock_lock(param_2 + 0x3c);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 8),param_3,puVar1,
                      &PTR____CFConstantStringClassReference_110e4c398);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_2 + 0x3c);
  return;
}



/* Entry: 106373430; end: 1063734bb; -[SCPageLoadMetric viewModelCreationEnd] */

void FUN_106373430(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _CACurrentMediaTime();
  func_0x00010bf95ae0(*(undefined8 *)(param_2 + 0x28));
  _os_unfair_lock_lock(param_2 + 0x3c);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 8),param_3,puVar1,
                      &PTR____CFConstantStringClassReference_110e4c3b8);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_2 + 0x3c);
  return;
}



/* Entry: 1063734bc; end: 106373583; -[SCPageLoadMetric sectionStart:] */

void FUN_1063734bc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  func_0x00010bf18760(*(undefined8 *)(param_2 + 0x28),param_3,param_4);
  _os_unfair_lock_lock(param_2 + 0x3c);
  lVar1 = *(long *)(param_2 + 0x10);
  func_0x00010c0e00e0(lVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x10),param_3,puVar2,param_4);
    _objc_release(puVar2);
  }
  _os_unfair_lock_unlock(param_2 + 0x3c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106373584; end: 10637365b; -[SCPageLoadMetric sectionEnd:] */

void FUN_106373584(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  double dVar3;
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  dVar3 = param_1;
  func_0x00010bf94f20(*(undefined8 *)(param_2 + 0x28),param_3,param_4);
  _os_unfair_lock_lock(param_2 + 0x3c);
  lVar1 = *(long *)(param_2 + 0x10);
  func_0x00010c0e00e0(lVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 != 0) {
    func_0x00010bf885a0(lVar1);
    func_0x00010c0df720(param_1 - dVar3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x10),param_3,puVar2,param_4);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _os_unfair_lock_unlock(param_2 + 0x3c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10637365c; end: 1063736bb; -[SCPageLoadMetric cancelPageLoad] */

void FUN_10637365c(long param_1,undefined8 param_2)

{
  _os_unfair_lock_lock(param_1 + 0x3c);
  func_0x00010bf2e920(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,0,
                      &PTR____CFConstantStringClassReference_110e4c2b8);
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x3c);
  return;
}



/* Entry: 1063736bc; end: 10637374f; -[SCPageLoadMetric invalidatePageLoadWithAbandonType:] */

void FUN_1063736bc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _CACurrentMediaTime();
  _os_unfair_lock_lock(param_2 + 0x3c);
  func_0x00010bf2e920(*(undefined8 *)(param_2 + 0x28));
  *(undefined8 *)(param_2 + 0x30) = param_4;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 8),param_3,puVar1,
                      &PTR____CFConstantStringClassReference_110e4c3d8);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_2 + 0x3c);
  return;
}



/* Entry: 106373750; end: 1063737fb; -[SCPageLoadMetric .cxx_destruct] */

void FUN_106373750(long param_1)

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



/* Entry: 1063737fc; end: 10637382b; -[SCPageLoadMetricManagerImpl viewDidLoad:] */

void FUN_1063737fc(undefined8 param_1)

{
  func_0x00010be6f3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29cac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10637382c; end: 10637385b; -[SCPageLoadMetricManagerImpl pageIsVisible:] */

void FUN_10637382c(undefined8 param_1)

{
  func_0x00010be6f3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f1460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10637385c; end: 1063738a7; -[SCPageLoadMetricManagerImpl pageDidDisappear:] */

void FUN_10637385c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be41960(param_1,param_2,param_3);
  if ((int)uVar1 != 0) {
    func_0x00010be3d9c0(param_1,param_2,param_3,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063738a8; end: 106373903; -[SCPageLoadMetricManagerImpl cancelPageLoad:] */

void FUN_1063738a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bde07e0(param_1);
  func_0x00010be6f3a0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf2e8e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106373904; end: 106373933; -[SCPageLoadMetricManagerImpl injectionStart:] */

void FUN_106373904(undefined8 param_1)

{
  func_0x00010be6f3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0652c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106373934; end: 1063739bf; -[SCPageLoadMetricManagerImpl injectionEnd:] */

void FUN_106373934(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be6f3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c065260();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010be214c0();
  _objc_release(param_3);
  if (lVar1 == 0x67) {
                    /* WARNING: Could not recover jumptable at 0x00010c0e3470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_onCustomPoint__112616730,0x41);
    return;
  }
  return;
}



/* Entry: 1063739c0; end: 1063739ef; -[SCPageLoadMetricManagerImpl viewModelCreationStart:] */

void FUN_1063739c0(undefined8 param_1)

{
  func_0x00010be6f3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063739f0; end: 106373a1f; -[SCPageLoadMetricManagerImpl viewModelCreationEnd:] */

void FUN_1063739f0(undefined8 param_1)

{
  func_0x00010be6f3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106373a20; end: 106373a7f; -[SCPageLoadMetricManagerImpl sectionStart:page:] */

void FUN_106373a20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010be6f3a0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c156500();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106373a80; end: 106373adf; -[SCPageLoadMetricManagerImpl sectionEnd:page:] */

void FUN_106373a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010be6f3a0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c155c00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106373ae0; end: 106373af3; -[SCPageLoadMetricManagerImpl _logOnAppBackground] */

void FUN_106373ae0(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be3d9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__invalidatePageLoad_abandonType__11256d010,*(long *)(param_1 + 0x30),0)
    ;
    return;
  }
  return;
}



/* Entry: 106373af4; end: 106373b5b; -[SCPageLoadMetricManagerImpl _onAppForeground] */

void FUN_106373af4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126afdd8;
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    func_0x00010c0d8d80();
    func_0x0001008781f8();
    func_0x00010bfc8740(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c291fc0(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 106373b5c; end: 106373c13; -[SCPageLoadMetricManagerImpl _invalidatePageLoad:abandonType:] */

void FUN_106373b5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010bde07e0(param_1);
  lVar1 = param_1;
  func_0x00010be6f3a0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c06a100(lVar1,param_2,param_4);
  lVar2 = lVar1;
  func_0x00010c0f1660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137fe0(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a02a0();
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106373c14; end: 106373c1b;  */

void FUN_106373c14(void)

{
  return;
}



/* Entry: 106373c1c; end: 106373c83; -[SCPageLoadMetricManagerImpl _isLoadingPage:] */

undefined8 FUN_106373c1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x30);
  if (((uVar1 == 0) || (func_0x00010c0720c0(uVar1,param_2,param_3), (uVar1 & 1) == 0)) &&
     ((uVar1 = *(ulong *)(param_1 + 0x38), uVar1 == 0 ||
      (func_0x00010c0720c0(uVar1,param_2,param_3), (uVar1 & 1) == 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106373c84; end: 106373d07; -[SCPageLoadMetricManagerImpl .cxx_destruct] */

void FUN_106373c84(long param_1)

{
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



/* Entry: 106373d08; end: 106373d9f; -[SCPageLoadMetricReporter logAbandonedPageLoad:] */

void FUN_106373d08(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106373da0;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x000100a0df38(uVar1,&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106373da0; end: 106373dcb;  */

void FUN_106373da0(long param_1,undefined8 param_2)

{
  func_0x00010be4fb40(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010be4fb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logAbandonedBlizzardMetrics__112571868,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106373dcc; end: 106374467; -[SCPageLoadMetricReporter _logAbandonedGrapheneMetrics:] */

void FUN_106373dcc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126c9f00;
  _objc_retain(param_3);
  func_0x00010c0f1640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar2 = param_3;
  func_0x00010c072fc0(param_3);
  func_0x00010c25d8c0(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e4c418,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  lVar2 = param_3;
  func_0x00010c0f0be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110daedd8,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(lVar2);
  puVar1 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e4c3d8,
                      &PTR____CFConstantStringClassReference_110dad378);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  lVar2 = param_3;
  func_0x00010beec400(param_3);
  func_0x00010bae689c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e4c438,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(lVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0f16e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c08adc0(param_3);
  func_0x00010befbfe0(uVar6,param_2,puVar3,lVar2 / 1000);
  _objc_release(uVar6);
  _objc_release(uVar5);
  lVar2 = param_3;
  func_0x00010c24a080(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_3;
  func_0x00010c0f0be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010be54640(param_1,param_2,lVar2,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106374468; end: 10637452b;  */

void FUN_106374468(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c9f00;
  func_0x00010c2910a0(PTR_PTR_1126c9f00);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0f16e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10637452c; end: 106374637;  */

void FUN_10637452c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c9f00;
  _objc_retain(param_2);
  func_0x00010c156260(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0f16e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106374638; end: 1063747b7; -[SCPageLoadMetricReporter _logAbandonedBlizzardMetrics:] */

void FUN_106374638(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c9f08;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  lVar2 = param_3;
  func_0x00010c0f0be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b8e0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010c160a00(puVar1,param_2,1);
  lVar2 = param_3;
  func_0x00010c08adc0(param_3);
  func_0x00010c160a20(puVar1,param_2,lVar2 / 1000);
  lVar2 = param_3;
  func_0x00010beec400(param_3);
  func_0x00010c160a40(puVar1,param_2,lVar2);
  lVar2 = param_3;
  func_0x00010c24a080(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be6f3e0(param_1,param_2,lVar2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c207ee0(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c247520(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000100c6e528();
  func_0x00010c207200(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c072fc0(param_3);
  _objc_release(param_3);
  func_0x00010c1b1040(puVar1,param_2,lVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b29e0();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1063747b8; end: 106374a47;  */

void FUN_1063747b8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106374a48; end: 106374aa3;  */

void FUN_106374a48(long param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720((double)param_2 / 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106374aa4; end: 106374b27;  */

void FUN_106374aa4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_2);
  func_0x00010c0df720((double)param_3 / 1000.0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106374b28; end: 106374b63; -[SCPageLoadMetricReporter .cxx_destruct] */

void FUN_106374b28(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106374b64; end: 106374be7; -[SCPageLoadMetricServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106374b64(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127461c0);
  _objc_destroyWeak(param_1 + _DAT_1127461a8);
  _objc_destroyWeak(param_1 + _DAT_1127461bc);
  _objc_destroyWeak(param_1 + _DAT_1127461b8);
  _objc_destroyWeak(param_1 + _DAT_1127461b4);
  _objc_destroyWeak(param_1 + _DAT_1127461b0);
  _objc_destroyWeak(param_1 + _DAT_1127461ac);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127461a4,0);
  return;
}



/* Entry: 106374be8; end: 106374c13; +[SCGraphenePageLoadSplitLatencyMetric pageInjectLatency] */

void FUN_106374be8(void)

{
  _objc_alloc(PTR_PTR_1126c9f00);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106374c14; end: 106374c3f; +[SCGraphenePageLoadSplitLatencyMetric dataLoadLatency] */

void FUN_106374c14(void)

{
  _objc_alloc(PTR_PTR_1126c9f00);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106374c40; end: 106374c6b; +[SCGraphenePageLoadSplitLatencyMetric viewModelCreationLatency] */

void FUN_106374c40(void)

{
  _objc_alloc(PTR_PTR_1126c9f00);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106374c6c; end: 106374c97; +[SCGraphenePageLoadSplitLatencyMetric viewInitToLoadLatency] */

void FUN_106374c6c(void)

{
  _objc_alloc(PTR_PTR_1126c9f00);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106374c98; end: 106374cc3; +[SCGraphenePageLoadSplitLatencyMetric userActionToRenderLatency] */

void FUN_106374c98(void)

{
  _objc_alloc(PTR_PTR_1126c9f00);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106374cc4; end: 106374cef; +[SCGraphenePageLoadSplitLatencyMetric sectionLatency] */

void FUN_106374cc4(void)

{
  _objc_alloc(PTR_PTR_1126c9f00);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106374cf0; end: 106374d8f; -[SCGraphenePageLoadSplitLatencyMetric description] */

void FUN_106374cf0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e4c538;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e4c538,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f0fe0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 106374d90; end: 106374db3; -[SCPageLoadMetricDataModel copyWithZone:] */

undefined8 FUN_106374d90(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106374db4; end: 106374e53; -[SCPageLoadMetricDataModel hash] */

undefined8 * FUN_106374db4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x18);
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  lStack_50 = -lVar4;
  if (-1 < lVar4) {
    lStack_50 = lVar4;
  }
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x30);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  puVar2 = &uStack_58;
  uStack_40 = uVar1;
  func_0x000100505190(puVar2,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
LAB_106374f1c:
    puVar5 = (undefined8 *)0x1;
  }
  else {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106374f28;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) != 0) &&
       (((puVar2[3] == param_3[3] && (*(char *)(puVar2 + 1) == *(char *)(param_3 + 1))) &&
        (puVar2[6] == param_3[6])))) {
      lVar4 = puVar2[2];
      if ((lVar4 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        lVar4 = puVar2[4];
        if ((lVar4 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
          puVar5 = (undefined8 *)puVar2[5];
          if (puVar5 != (undefined8 *)param_3[5]) {
            func_0x00010c071ae0();
            goto LAB_106374f28;
          }
          goto LAB_106374f1c;
        }
      }
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_106374f28:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 106374e54; end: 106374f43; -[SCPageLoadMetricDataModel isEqual:] */

long FUN_106374e54(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106374f1c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106374f28;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
        (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if (lVar3 != *(long *)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_106374f28;
          }
          goto LAB_106374f1c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106374f28:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106374f44; end: 106374f4b; -[SCPageLoadMetricDataModel abandonedType] */

undefined8 FUN_106374f44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106374f4c; end: 106374fa7; +[SCPageLoadSubMetric dataLoadWithLatencyInMicroseconds:beforeUserAction:] */

void FUN_106374f4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c9ee8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  puVar2[0x18] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106374fa8; end: 10637500b; +[SCPageLoadSubMetric pageInjectWithLatencyInMicroseconds:beforeUserAction:] */

void FUN_106374fa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c9ee8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  puVar2[0x28] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10637500c; end: 10637507f; +[SCPageLoadSubMetric sectionWithSectionName:latencyInMicroseconds:] */

void FUN_10637500c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c9ee8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(puVar2 + 0x58) = param_3;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x60) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106375080; end: 1063750db; +[SCPageLoadSubMetric userActionToRenderWithLatencyInMicroseconds:] */

void FUN_106375080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c9ee8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  *(undefined8 *)(puVar2 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1063750dc; end: 10637513f; +[SCPageLoadSubMetric viewInitToLoadWithLatencyInMicroseconds:beforeUserAction:] */

void FUN_1063750dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c9ee8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  puVar2[0x38] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106375140; end: 1063751a3; +[SCPageLoadSubMetric viewModelCreationWithLatencyInMicroseconds:beforeUserAction:] */

void FUN_106375140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c9ee8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  puVar2[0x48] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1063751a4; end: 1063751c7; -[SCPageLoadSubMetric copyWithZone:] */

undefined8 FUN_1063751a4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1063751c8; end: 106375297; -[SCPageLoadSubMetric hash] */

void FUN_1063751c8(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_88;
  long lStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  long lStack_60;
  ulong uStack_58;
  long lStack_50;
  ulong uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = *(undefined8 *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  lStack_80 = -lVar3;
  if (-1 < lVar3) {
    lStack_80 = lVar3;
  }
  uStack_78 = (ulong)*(byte *)(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x20);
  lStack_70 = -lVar3;
  if (-1 < lVar3) {
    lStack_70 = lVar3;
  }
  uStack_68 = (ulong)*(byte *)(param_1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x30);
  lStack_60 = -lVar3;
  if (-1 < lVar3) {
    lStack_60 = lVar3;
  }
  uStack_58 = (ulong)*(byte *)(param_1 + 0x38);
  lVar3 = *(long *)(param_1 + 0x40);
  lStack_50 = -lVar3;
  if (-1 < lVar3) {
    lStack_50 = lVar3;
  }
  uStack_48 = (ulong)*(byte *)(param_1 + 0x48);
  lVar3 = *(long *)(param_1 + 0x50);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  lStack_40 = -lVar3;
  if (-1 < lVar3) {
    lStack_40 = lVar3;
  }
  func_0x00010bfde980();
  lVar3 = *(long *)(param_1 + 0x60);
  lStack_30 = -lVar3;
  if (-1 < lVar3) {
    lStack_30 = lVar3;
  }
  puVar2 = &uStack_88;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_b8 = PTR_PTR_1126f0ff0;
  puStack_c0 = puVar2;
  _objc_msgSendSuper2(&puStack_c0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106375298; end: 1063752db; -[SCPageLoadSubMetric internalInit] */

void FUN_106375298(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f0ff0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063752dc; end: 10637541b; -[SCPageLoadSubMetric isEqual:] */

long FUN_1063752dc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106375400;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) == 0) ||
        ((((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
           (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
          (*(char *)(param_1 + 0x18) != *(char *)(param_3 + 0x18))) ||
         ((*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20) ||
          (*(char *)(param_1 + 0x28) != *(char *)(param_3 + 0x28))))))) ||
       ((*(long *)(param_1 + 0x30) != *(long *)(param_3 + 0x30) ||
        (((*(char *)(param_1 + 0x38) != *(char *)(param_3 + 0x38) ||
          (*(long *)(param_1 + 0x40) != *(long *)(param_3 + 0x40))) ||
         ((*(char *)(param_1 + 0x48) != *(char *)(param_3 + 0x48) ||
          ((*(long *)(param_1 + 0x50) != *(long *)(param_3 + 0x50) ||
           (*(long *)(param_1 + 0x60) != *(long *)(param_3 + 0x60))))))))))) {
      lVar3 = 0;
      goto LAB_106375400;
    }
    lVar3 = *(long *)(param_1 + 0x58);
    if (lVar3 != *(long *)(param_3 + 0x58)) {
      func_0x00010c071ae0();
      goto LAB_106375400;
    }
  }
  lVar3 = 1;
LAB_106375400:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10637541c; end: 10637558b; -[SCPageLoadSubMetric matchDataLoad:pageInject:viewInitToLoad:viewModelCreation:userActionToRender:section:] */

void FUN_10637541c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 < 3) {
    if (lVar3 == 0) {
      if (param_3 == 0) goto LAB_106375530;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      uVar2 = *(undefined1 *)(param_1 + 0x18);
      pcVar4 = *(code **)(param_3 + 0x10);
      lVar3 = param_3;
    }
    else if (lVar3 == 1) {
      if (param_4 == 0) goto LAB_106375530;
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      uVar2 = *(undefined1 *)(param_1 + 0x28);
      pcVar4 = *(code **)(param_4 + 0x10);
      lVar3 = param_4;
    }
    else {
      if ((lVar3 != 2) || (param_5 == 0)) goto LAB_106375530;
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      uVar2 = *(undefined1 *)(param_1 + 0x38);
      pcVar4 = *(code **)(param_5 + 0x10);
      lVar3 = param_5;
    }
  }
  else {
    if (lVar3 != 3) {
      if (lVar3 == 4) {
        if (param_7 != 0) {
          (**(code **)(param_7 + 0x10))(param_7,*(undefined8 *)(param_1 + 0x50));
        }
      }
      else if ((lVar3 == 5) && (param_8 != 0)) {
        (**(code **)(param_8 + 0x10))
                  (param_8,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
      }
      goto LAB_106375530;
    }
    if (param_6 == 0) goto LAB_106375530;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    uVar2 = *(undefined1 *)(param_1 + 0x48);
    pcVar4 = *(code **)(param_6 + 0x10);
    lVar3 = param_6;
  }
  (*pcVar4)(lVar3,uVar1,uVar2);
LAB_106375530:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10637558c; end: 106375597; -[SCPageLoadSubMetric .cxx_destruct] */

void FUN_10637558c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x58,0);
  return;
}



/* Entry: 106375598; end: 1063755e3; -[SCUserSnapSendActivityServiceProvider provide] */

void FUN_106375598(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x00010be47100();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c9f28;
  _objc_alloc(PTR_PTR_1126c9f28);
  func_0x00010c021860();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1063755e4; end: 1063755eb; -[SCUserSnapSendActivityServiceProvider _lastSnapDateService] */

undefined8 FUN_1063755e4(void)

{
  return 0;
}



/* Entry: 1063755ec; end: 10637562f; -[SCUserSnapSendActivityServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063755ec(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112746214);
  _objc_destroyWeak(param_1 + _DAT_112746210);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274620c);
  return;
}



/* Entry: 106375630; end: 1063756e7; -[SCUserLastSnapDateServiceImplementation initWithSnapSendEvents:featureSettingsService:] */

undefined1 *
FUN_106375630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f0ff8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    func_0x00010bec09a0(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1063756e8; end: 10637573b; -[SCUserLastSnapDateServiceImplementation lastSnapDate] */

void FUN_1063756e8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c08a0c0();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (lVar2 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c08a0c0(lVar2);
    func_0x00010bf655e0((double)(lVar2 * 0x3c),puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10637573c; end: 10637573f; -[SCUserLastSnapDateServiceImplementation _userSentASnap:] */

void FUN_10637573c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beda5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateLastSnapDate_112594320);
  return;
}



/* Entry: 106375740; end: 1063757bf; -[SCUserLastSnapDateServiceImplementation _updateLastSnapDate] */

void FUN_106375740(double param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  lVar2 = *(long *)(param_2 + 8);
  func_0x00010c08a0c0();
  if (lVar2 == (long)(param_1 / 60.0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1b8910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 8),PTR_s_setLastSnapSince1970InMinutes__11264bc68,
             (long)(param_1 / 60.0));
  return;
}



/* Entry: 1063757c0; end: 1063758e7; -[SCUserLastSnapDateServiceImplementation _startObserving:] */

void FUN_1063757c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c0e0e60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1063758e8; end: 10637592f;  */

void FUN_1063758e8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee70e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106375930; end: 106375977; -[SCUserLastSnapDateServiceImplementation .cxx_destruct] */

void FUN_106375930(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106375978; end: 1063759eb; -[SCUserSnapSendActivityServices initWithLastSnapDateService:] */

undefined1 * FUN_106375978(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f1000;
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



/* Entry: 1063759ec; end: 1063759f3; -[SCUserSnapSendActivityServices lastSnapDateService] */

undefined8 FUN_1063759ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1063759f4; end: 1063759ff; -[SCUserSnapSendActivityServices .cxx_destruct] */

void FUN_1063759f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106375a00; end: 106375a73; -[SCSnapsServiceProvider provide] */

void FUN_106375a00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c9f30;
  _objc_alloc(PTR_PTR_1126c9f30);
  puVar2 = PTR_PTR_1126ae568;
  _objc_opt_new(PTR_PTR_1126ae568);
  puVar3 = PTR_PTR_1126ae568;
  _objc_opt_new(PTR_PTR_1126ae568);
  func_0x00010c048640(puVar1,param_2,puVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106375a74; end: 106375a83; -[SCSnapsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106375a74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274622c);
  return;
}



/* Entry: 106375a84; end: 106375b3b; -[SCAdHidePromotedStoryEventTracker initWithLogger:promotedStory:tileSize:] */

undefined1 *
FUN_106375a84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f1008;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 106375b3c; end: 106375b3f; -[SCAdHidePromotedStoryEventTracker trackDidShowReportAd] */

void FUN_106375b3c(void)

{
  return;
}



/* Entry: 106375b40; end: 106375b9b; -[SCAdHidePromotedStoryEventTracker trackDidSubmitReportWithReasonId:flagNote:] */

void FUN_106375b40(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bef2bc0(PTR_PTR_1126bdcf8);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ad020(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106375b9c; end: 106375b9f; -[SCAdHidePromotedStoryEventTracker trackDidCancelReport] */

void FUN_106375b9c(void)

{
  return;
}



/* Entry: 106375ba0; end: 106375bcf; -[SCAdHidePromotedStoryEventTracker .cxx_destruct] */

void FUN_106375ba0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106375bd0; end: 106375cab; -[SCAdHideSponsoredEventTracker initWithAdResponse:adReportEventSubject:eventTrackerHelper:adViewSource:] */

undefined1 *
FUN_106375bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f1010;
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106375cac; end: 106375caf; -[SCAdHideSponsoredEventTracker trackDidShowReportAd] */

void FUN_106375cac(void)

{
  return;
}



/* Entry: 106375cb0; end: 106375e43; -[SCAdHideSponsoredEventTracker trackDidSubmitReportWithReasonId:flagNote:] */

void FUN_106375cb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c5430;
  func_0x00010bfb77a0(PTR_PTR_1126c5430);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  if ((int)uVar3 == 0) {
    puVar2 = PTR_PTR_1126c5430;
    func_0x00010c06b100(PTR_PTR_1126c5430);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if ((int)uVar3 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010bef2bc0(PTR_PTR_1126bdcf8,param_2,param_3);
      func_0x00010bef4520(uVar3,param_2,uVar4,7,0,0,0,0,0,1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106375e0c;
    }
  }
  else {
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126c9f38;
  func_0x00010bf1d040(PTR_PTR_1126c9f38,param_2,param_3);
  func_0x00010bae7ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bef4520(uVar3,param_2,*(undefined8 *)(param_1 + 8),6,1,puVar1,param_4,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
LAB_106375e0c:
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106375e44; end: 106375e47; -[SCAdHideSponsoredEventTracker trackDidCancelReport] */

void FUN_106375e44(void)

{
  return;
}



/* Entry: 106375e48; end: 106375e83; -[SCAdHideSponsoredEventTracker .cxx_destruct] */

void FUN_106375e48(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106375e84; end: 106375f4f; -[SCAdReportEventTracker initWithTracker:hideTracker:adRequestClientId:] */

undefined1 *
FUN_106375e84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f1018;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106375f50; end: 106375f97; -[SCAdReportEventTracker trackDidShowReportAd] */

void FUN_106375f50(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c132460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106375f98; end: 106376187; -[SCAdReportEventTracker trackDidSubmitReportWithReasonId:flagNote:] */

void FUN_106375f98(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar5 = PTR_PTR_1126c5418;
  func_0x00010c06b080(PTR_PTR_1126c5418);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar5);
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR_PTR_1126c5418;
    func_0x00010bf01ce0(PTR_PTR_1126c5418);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar2);
    if ((uVar1 & 1) != 0) {
LAB_106376044:
      _objc_release(puVar2);
      goto LAB_10637604c;
    }
    puVar3 = PTR_PTR_1126c5418;
    func_0x00010bf01cc0(PTR_PTR_1126c5418);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar3);
    if ((int)uVar1 != 0) {
      _objc_release(puVar3);
      goto LAB_106376044;
    }
    puVar6 = PTR_PTR_1126c5418;
    func_0x00010bfe5020(PTR_PTR_1126c5418);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar5);
    if ((uVar1 & 1) != 0) goto LAB_106376054;
  }
  else {
LAB_10637604c:
    _objc_release(puVar5);
LAB_106376054:
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c132460();
      _objc_release(uVar4);
      func_0x00010bef2bc0(PTR_PTR_1126bdcf8,param_2,param_3);
      puVar5 = *(undefined **)(param_1 + 0x18);
      func_0x00010c269d40(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe1600();
      goto LAB_10637615c;
    }
  }
  puVar5 = PTR_PTR_1126c9f38;
  func_0x00010bf1d040(PTR_PTR_1126c9f38,param_2,param_3);
  func_0x00010bae7ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c132460();
  _objc_release(uVar4);
LAB_10637615c:
  _objc_release(puVar5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106376188; end: 10637618b; -[SCAdReportEventTracker trackDidCancelReport] */

void FUN_106376188(void)

{
  return;
}



/* Entry: 10637618c; end: 1063761c7; -[SCAdReportEventTracker .cxx_destruct] */

void FUN_10637618c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1063761c8; end: 106376273; -[SCAdReportEventTrackerProvider initWithAdReportTracker:hideAdTracker:useSwiftEventTrackers:] */

undefined1 *
FUN_1063761c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f1020;
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
    *(undefined1 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106376274; end: 106376313; -[SCAdReportEventTrackerProvider adReportEventTrackerForAdRequestClientId:forHideAd:] */

void FUN_106376274(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    puVar1 = PTR_PTR_1126c9f58;
    if (*(char *)(param_1 + 0x18) != '\0') {
      puVar1 = PTR_PTR_1126c9f50;
    }
    _objc_alloc(puVar1);
    func_0x00010c054ea0();
  }
  else {
    puVar1 = PTR_PTR_1126c9f48;
    if (*(char *)(param_1 + 0x18) != '\0') {
      puVar1 = PTR_PTR_1126c9f40;
    }
    _objc_alloc(puVar1);
    func_0x00010c054ec0();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


