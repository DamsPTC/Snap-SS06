/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 006068ec; end: 00606a1f;  */

void FUN_006068ec(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x00793920();
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(param_1,&UNK_009044ca,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 00606a20; end: 00606b77;  */

void FUN_00606a20(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar5 = *(undefined8 *)PTR__UIContentSizeCategoryLarge_00999048;
  _objc_retain(uVar5);
  puVar1 = PTR__OBJC_CLASS___UIApplication_00ac2df8;
  func_0x00791500();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x0078a820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x0078a820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = param_3;
  func_0x0078a820(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x0077bfc0(param_1,param_2,param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == puVar2) {
    _objc_release(puVar3);
  }
  else {
    _objc_release(param_3);
    _objc_release(puVar3);
    param_3 = puVar4;
    if ((puVar2 != (undefined *)0x0) &&
       (puVar2 != *(undefined **)PTR__UIContentSizeCategoryUnspecified_00999050)) {
      func_0x0077bfc0(param_1,param_2,puVar4,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      param_3 = param_1;
    }
    _objc_retain(param_3);
    puVar4 = param_3;
  }
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar4);
  return;
}



/* Entry: 00606b78; end: 00606c07;  */

void FUN_00606b78(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x0078a820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = param_3;
  if (lVar1 == param_4) {
    _objc_retain(param_3);
  }
  else {
    func_0x00792cc0(param_3,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar2);
  return;
}



/* Entry: 00606c08; end: 00606f6f;  */

/* WARNING: Removing unreachable block (ram,0x00606e18) */

void FUN_00606c08(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar1 = param_1;
  (*pcRam0000000000b62f78)(param_1,PTR_s_traitCollection_00abf830);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00787740();
  if ((int)puVar2 == 0) {
    puVar2 = puVar1;
    func_0x00792cc0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = param_1;
    func_0x0077d940();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_retain(param_1);
  _objc_retain(puVar2);
  puVar8 = param_1;
  _objc_getAssociatedObject(param_1,&UNK_00904520);
  _objc_retainAutoreleasedReturnValue();
  if ((puVar8 == (undefined *)0x0) ||
     ((puVar8 != puVar2 && (puVar3 = puVar8, func_0x007877e0(), (int)puVar3 == 0)))) {
    _os_unfair_lock_lock(0xb62f70);
    puVar3 = param_1;
    _objc_getAssociatedObject(param_1,&UNK_00904520);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    if ((puVar3 == (undefined *)0x0) ||
       ((puVar3 != puVar2 && (puVar8 = puVar3, func_0x007877e0(), (int)puVar8 == 0)))) {
      puVar4 = param_1;
      _objc_getAssociatedObject(param_1,&UNK_00904553);
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 != (undefined *)0x0) {
        if (puVar4 == (undefined *)0x0) {
          puVar4 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
          func_0x0077f120();
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(param_1,&UNK_00904553,puVar4,0x301);
        }
        puVar8 = puVar4;
        func_0x007848e0();
        if (puVar8 == (undefined *)0x7fffffffffffffff) {
          func_0x0077e720(puVar4);
        }
      }
      _objc_retain(puVar4);
      puVar5 = puVar4;
      func_0x00780ea0();
      while (puVar5 != (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
        do {
          puVar8 = *(undefined **)((long)puVar9 * 8);
          if ((puVar8 == puVar2) || (puVar6 = puVar8, func_0x007877e0(), (int)puVar6 != 0)) {
            _objc_setAssociatedObject(param_1,&UNK_00904520,puVar8,0x301);
            _objc_retain(puVar8);
            _objc_release(puVar4);
            goto LAB_00606ec0;
          }
          puVar9 = puVar9 + 1;
        } while (puVar5 != puVar9);
        puVar5 = puVar4;
        func_0x00780ea0();
      }
      _objc_release(puVar4);
      _objc_setAssociatedObject(param_1,&UNK_00904520,puVar2,0x301);
      _objc_retain(puVar2);
      puVar8 = puVar2;
LAB_00606ec0:
      _objc_release(puVar4);
    }
    else {
      _objc_retain(puVar3);
      puVar8 = puVar3;
    }
    _os_unfair_lock_unlock(0xb62f70);
  }
  else {
    _objc_retain(puVar8);
    puVar3 = puVar8;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar7) {
    ___stack_chk_fail();
    _os_unfair_lock_unlock(0xb62f70);
    __Unwind_Resume(puVar1);
    (*pcRam0000000000b62f68)();
                    /* WARNING: Could not recover jumptable at 0x007912b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(puVar1,PTR_s_setViewDidLoadWasCalled__00abf1b8,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar8);
  return;
}



/* Entry: 00606f70; end: 00606fa7;  */

void FUN_00606f70(undefined8 param_1)

{
  (*pcRam0000000000b62f68)(param_1,PTR_s_viewDidLoad_00ab6be8);
                    /* WARNING: Could not recover jumptable at 0x007912b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_setViewDidLoadWasCalled__00abf1b8,1);
  return;
}



/* Entry: 00606fa8; end: 0060708f;  */

void FUN_00606fa8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uRam0000000000b62f70 = 0;
  puVar1 = PTR__OBJC_CLASS___UIViewController_00ac3310;
  _objc_opt_class();
  puVar3 = PTR_s_sig_vc_dt_traitCollection_00ab87c8;
  puVar2 = puVar1;
  _class_getInstanceMethod();
  _class_getInstanceMethod(puVar1,puVar3);
  puVar3 = puVar2;
  _method_getImplementation();
  puRam0000000000b62f78 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x0077a888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__method_exchangeImplementations_0099ac98)(puVar2,puVar1);
  return;
}



/* Entry: 00607090; end: 00607097; +[SCLocalTweakActionDispenser shared] */

undefined8 FUN_00607090(void)

{
  return 0;
}



/* Entry: 00607098; end: 006070af; -[SCLocalTweakActionDispenser initWithTweakStore:] */

undefined8 FUN_00607098(void)

{
  _objc_release();
  return 0;
}



/* Entry: 006070b0; end: 006070b7; -[SCLocalTweakActionDispenser dispenseLocalTweakActionWithCategory:collection:name:action:] */

undefined8 FUN_006070b0(void)

{
  return 0;
}



/* Entry: 006070b8; end: 006070bb; -[SCLocalTweakActionDispenser _addAction:category:collection:name:] */

void FUN_006070b8(void)

{
  return;
}



/* Entry: 006070bc; end: 006070bf; -[SCLocalTweakActionDispenser _removeAction:category:collection:name:] */

void FUN_006070bc(void)

{
  return;
}



/* Entry: 006070c0; end: 006070c3; -[SCLocalTweakActionDispenser _tweakDidFireForIdentifier:] */

void FUN_006070c0(void)

{
  return;
}



/* Entry: 006070c4; end: 006070f3; -[SCLocalTweakActionDispenser .cxx_destruct] */

void FUN_006070c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 006070f4; end: 0060710b; -[SCLocalTweakActionToken initWithOnDealloc:] */

undefined8 FUN_006070f4(void)

{
  _objc_release();
  return 0;
}



/* Entry: 0060710c; end: 0060713f; -[SCLocalTweakActionToken dealloc] */

void FUN_0060710c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_00ac4178;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00607140; end: 0060715f; -[SCLocalTweakActionToken .cxx_destruct] */

void FUN_00607140(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00607160; end: 006071b3; +[SCTweakHaltObserver sharedObserver] */

void FUN_00607160(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b62f80 != -1) {
    _dispatch_once(0xb62f80,&PTR___NSConcreteGlobalBlock_00a0a9b8);
  }
  uVar1 = uRam0000000000b62f88;
  _objc_retain(uRam0000000000b62f88);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 006071b4; end: 006071df;  */

void FUN_006071b4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_00ac3330;
  _objc_alloc_init();
  uVar1 = puRam0000000000b62f88;
  puRam0000000000b62f88 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 006071e0; end: 00607267; -[SCTweakHaltObserver tweakDidChange:] */

void FUN_006071e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_00999f30;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_00607268;
  puStack_38 = &UNK_009e36d0;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  __runOnMainThreadAsynchronouslyIfNecessary("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 00607268; end: 00607273;  */

void FUN_00607268(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077d5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__presentHaltAlert__00aba270,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 00607274; end: 00607277; -[SCTweakHaltObserver _presentHaltAlert:] */

void FUN_00607274(void)

{
  return;
}



/* Entry: 00607278; end: 0060727f; -[SCTweakHaltObserver _onAlertDismissed] */

void FUN_00607278(long param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 00607280; end: 006072f3; -[SCTweakHaltObserver _onRestartAction] */

void FUN_00607280(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00780e20();
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  if (lVar1 == 0) {
    lVar2 = 0;
    _exit();
    _objc_sync_exit(param_1);
    lVar1 = param_3;
    __Unwind_Resume();
    _objc_retain(lVar1);
    _objc_retain(lVar2);
    _objc_sync_enter(lVar2);
    lVar3 = lVar1;
    func_0x00780e20();
    uVar4 = *(undefined8 *)(lVar2 + 8);
    *(long *)(lVar2 + 8) = lVar3;
    _objc_release(uVar4);
    _objc_sync_exit(lVar2);
    _objc_release(lVar2);
  }
  else {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(lVar1);
  return;
}



/* Entry: 006072f4; end: 0060736b; -[SCTweakHaltObserver overrideExitImplementation:] */

void FUN_006072f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = param_3;
  func_0x00780e20();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar1;
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0060736c; end: 00607377; -[SCTweakHaltObserver .cxx_destruct] */

void FUN_0060736c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00607378; end: 0060747f;  */

undefined * FUN_00607378(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_00ac3338;
  _objc_retain(0);
  _objc_retain(param_1);
  func_0x007915a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x0077fbe0();
  _objc_release(0);
  _objc_release(param_1);
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 00607480; end: 006077bf;  */

undefined1 FUN_00607480(void)

{
  if (lRam0000000000b62fb0 != -1) {
    _dispatch_once(0xb62fb0,&PTR___NSConcreteGlobalBlock_00a0a9d8);
  }
  return uRam0000000000b62f91;
}



/* Entry: 006077c0; end: 00607813; +[SCAppStartExperimentReader sharedInstance] */

void FUN_006077c0(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b63030 != -1) {
    _dispatch_once(0xb63030,&PTR___NSConcreteGlobalBlock_00a0aad8);
  }
  uVar1 = uRam0000000000b63028;
  _objc_retain(uRam0000000000b63028);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00607814; end: 0060790b;  */

void FUN_00607814(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar2 = PTR_PTR_00ac3338;
  _objc_alloc();
  puVar3 = PTR_PTR_00ac3340;
  func_0x00784100(PTR_PTR_00ac3340);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___SCLazy_00ac29d0;
  func_0x0077f660(PTR__OBJC_CLASS___SCLazy_00ac29d0,param_2,&PTR___NSConcreteGlobalBlock_00a0ab18);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_00ac3348;
  func_0x007914e0(PTR_PTR_00ac3348);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_00ac3350;
  func_0x007914e0(PTR_PTR_00ac3350);
  _objc_retainAutoreleasedReturnValue();
  func_0x007855c0(puVar2,param_2,puVar3,puVar4,&PTR____CFConstantStringClassReference_00a47a60,
                  puVar5,puVar6);
  uVar1 = puRam0000000000b63028;
  puRam0000000000b63028 = puVar2;
  _objc_release(uVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar3);
  return;
}



/* Entry: 0060790c; end: 00607917;  */

void FUN_0060790c(void)

{
                    /* WARNING: Could not recover jumptable at 0x007840d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR_PTR_00ac3340,PTR_s_getSetOfAppStartExperimentReader_00abbd30);
  return;
}



/* Entry: 00607918; end: 0060797b; -[SCAppStartExperimentReader updateConfigResults:] */

void FUN_00607918(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x0077ca20();
  _objc_retainAutoreleasedReturnValue();
  *(undefined1 *)(param_1 + 0x6a) = 1;
  _os_unfair_lock_lock(param_1 + 0x6c);
  uVar1 = lRam0000000000b63018;
  lRam0000000000b63018 = lVar2;
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x6c);
  *(undefined1 *)(param_1 + 0x6a) = 0;
  return;
}



/* Entry: 0060797c; end: 00607b97; -[SCAppStartExperimentReader initWithFilePathURL:allowedConfigs:recoveryKey:heuristicRecoveryManager:startupJournalManager:] */

undefined1 *
FUN_0060797c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  double dVar8;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar3 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_00ac4180;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_00abbf70);
  if (puVar3 != (undefined8 *)0x0) {
    _CACurrentMediaTime();
    dVar8 = param_1;
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar3 + 8);
    *(undefined8 *)((long)puVar3 + 8) = param_5;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar3 + 0x10);
    *(undefined8 *)((long)puVar3 + 0x10) = param_4;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)((long)puVar3 + 0x40);
    *(undefined8 *)((long)puVar3 + 0x40) = param_6;
    _objc_release(uVar4);
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)puVar3 + 0x48);
    *(undefined8 *)((long)puVar3 + 0x48) = param_7;
    _objc_release(uVar4);
    _objc_retain(param_8);
    uVar4 = *(undefined8 *)((long)puVar3 + 0x50);
    *(undefined8 *)((long)puVar3 + 0x50) = param_8;
    _objc_release(uVar4);
    uVar2 = (undefined1)*(undefined8 *)((long)puVar3 + 0x48);
    func_0x00787d20();
    *(undefined1 *)((long)puVar3 + 0x69) = uVar2;
    puVar5 = (undefined1 *)puVar3;
    func_0x0078bc40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined1 *)puVar3;
    func_0x0077ca20();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puRam0000000000b63018;
    puRam0000000000b63018 = puVar6;
    _objc_release(puVar1);
    _objc_release(puVar5);
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar3 + 0x28);
    *(undefined **)((long)puVar3 + 0x28) = puVar7;
    _objc_release(uVar4);
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar3 + 0x30);
    *(undefined **)((long)puVar3 + 0x30) = puVar7;
    _objc_release(uVar4);
    puVar7 = PTR__OBJC_CLASS___SCQueuePerformer_00ac2cb0;
    _objc_alloc();
    func_0x00785a40();
    uVar4 = *(undefined8 *)((long)puVar3 + 0x38);
    *(undefined **)((long)puVar3 + 0x38) = puVar7;
    _objc_release(uVar4);
    _CACurrentMediaTime();
    *(double *)((long)puVar3 + 0x60) = dVar8 - param_1;
    puVar7 = PTR__OBJC_CLASS___NSThread_00ac30f8;
    func_0x00787a60();
    *(char *)((long)puVar3 + 0x68) = (char)puVar7;
    *(undefined4 *)((long)puVar3 + 0x6c) = 0;
    *(undefined1 *)((long)puVar3 + 0x6a) = 0;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar3;
}



/* Entry: 00607b98; end: 00607d63; -[SCAppStartExperimentReader retrieveConfigResults] */

void FUN_00607b98(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = param_1;
  func_0x0077c240();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_00ac3358;
  func_0x007914e0(PTR_PTR_00ac3358);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077f940();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSData_00ac2b10;
  func_0x007816a0(PTR__OBJC_CLASS___NSData_00ac2b10,param_2,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_00ac3358;
  func_0x007914e0(PTR_PTR_00ac3358);
  _objc_retainAutoreleasedReturnValue();
  func_0x00782900();
  _objc_release(puVar5);
  if (puVar2 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_00ac3358;
    func_0x007914e0(PTR_PTR_00ac3358);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077f940();
    _objc_release(puVar5);
    puVar5 = PTR_PTR_00ac2ce8;
    func_0x00789f40(PTR_PTR_00ac2ce8,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_00ac3358;
    func_0x007914e0(PTR_PTR_00ac3358);
    _objc_retainAutoreleasedReturnValue();
    func_0x00782900();
    _objc_release(puVar3);
  }
  if (puVar1 != (undefined *)0x0) {
    puVar3 = puVar1;
    func_0x00780980(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x0078ab20(puVar1);
    func_0x0077d3c0(param_1,param_2,puVar5,puVar3,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar3);
    puVar5 = param_1;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar5);
  return;
}



/* Entry: 00607d64; end: 00607e7b; -[SCAppStartExperimentReader _valueForConfigKeySync:valueKey:featureProvidedSignals:exposeExperiment:] */

void FUN_00607d64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,int param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x0077e0a0(param_1);
  lVar1 = lRam0000000000b63018;
  if ((*(byte *)(param_1 + 0x6a) & 1) == 0) {
    _objc_retain(lRam0000000000b63018);
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x6c);
    lVar1 = lRam0000000000b63018;
    _objc_retain(lRam0000000000b63018);
    _os_unfair_lock_unlock(param_1 + 0x6c);
  }
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00789ea0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
    if ((param_6 != 0) && (lVar3 != 0)) {
      func_0x0077d1e0(param_1,param_2,lVar2,param_3);
    }
    func_0x0077d1a0(param_1,param_2,param_3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar3);
  return;
}



/* Entry: 00607e7c; end: 00607ed3; -[SCAppStartExperimentReader boolValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

long FUN_00607e7c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x0077e080();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    param_4 = param_1;
    func_0x0077fbc0(param_1);
  }
  _objc_release(param_1);
  return param_4;
}



/* Entry: 00607ed4; end: 00607f37; -[SCAppStartExperimentReader floatValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

undefined8 FUN_00607ed4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x0077e080();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    func_0x00783840(param_2);
    param_1 = uVar1;
  }
  _objc_release(param_2);
  return param_1;
}



/* Entry: 00607f38; end: 00607f8f; -[SCAppStartExperimentReader intValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

long FUN_00607f38(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x0077e080();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    param_4 = param_1;
    func_0x007871a0(param_1);
  }
  _objc_release(param_1);
  return param_4;
}



/* Entry: 00607f90; end: 00607fe7; -[SCAppStartExperimentReader longValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

long FUN_00607f90(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x0077e080();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    param_4 = param_1;
    func_0x00788b60(param_1);
  }
  _objc_release(param_1);
  return param_4;
}



/* Entry: 00607fe8; end: 0060803f; -[SCAppStartExperimentReader unexposedIntValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

long FUN_00607fe8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x0077e080();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    param_4 = param_1;
    func_0x007871a0(param_1);
  }
  _objc_release(param_1);
  return param_4;
}



/* Entry: 00608040; end: 0060810f; -[SCAppStartExperimentReader setExperimentLogger_DO_NOT_USE:configMetric:] */

void FUN_00608040(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  func_0x0077f280(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x20),param_2,
                  *(undefined1 *)(param_1 + 0x68));
  puStack_58 = PTR___NSConcreteStackBlock_00999f30;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_00608110;
  puStack_40 = &UNK_009e3fc0;
  lStack_38 = param_1;
  func_0x0078a560(*(undefined8 *)(param_1 + 0x38),param_2,&puStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 00608110; end: 00608117;  */

void FUN_00608110(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077c8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__drainLogQueues_00ab9f20);
  return;
}



/* Entry: 00608118; end: 006082c3; -[SCAppStartExperimentReader _drainLogQueues] */

void FUN_00608118(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_240;
  undefined8 uStack_238;
  code *pcStack_230;
  undefined *puStack_228;
  long lStack_220;
  undefined1 *puStack_218;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar7 = &uStack_1d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  lStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  plStack_180 = (long *)0x0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  lVar8 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar8);
  lVar2 = lVar8;
  func_0x00780ea0(lVar8,param_2,&uStack_190,auStack_c8,0x10);
  if (lVar2 != 0) {
    lVar9 = *plStack_180;
    do {
      lVar10 = 0;
      do {
        if (*plStack_180 != lVar9) {
          _objc_enumerationMutation(lVar8);
        }
        func_0x0077d1e0(param_1,param_2,*(undefined8 *)(lStack_188 + lVar10 * 8),0);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar8;
      func_0x00780ea0(lVar8,param_2,&uStack_190,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar8);
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  lVar8 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar8);
  lVar2 = lVar8;
  func_0x00780ea0();
  if (lVar2 != 0) {
    lVar9 = *plStack_1c0;
    do {
      lVar10 = 0;
      do {
        if (*plStack_1c0 != lVar9) {
          _objc_enumerationMutation(lVar8);
        }
        func_0x0077d1a0(param_1,param_2,*(undefined8 *)(lStack_1c8 + lVar10 * 8));
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar8;
      puVar7 = &uStack_1d0;
      func_0x00780ea0();
    } while (lVar2 != 0);
  }
  _objc_release(lVar8);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  if (*(long *)(lVar2 + 0x18) == 0) {
    uVar1 = *(undefined8 *)(lVar2 + 0x38);
    puStack_240 = PTR___NSConcreteStackBlock_00999f30;
    uStack_238 = 0xc2000000;
    pcStack_230 = FUN_0060840c;
    puStack_228 = &UNK_009e36d0;
    lStack_220 = lVar2;
    _objc_retain(puVar7);
    puStack_218 = (undefined1 *)puVar7;
    func_0x0078a560(uVar1,param_2,&puStack_240);
    puVar3 = puStack_218;
  }
  else {
    puVar3 = (undefined1 *)puVar7;
    func_0x00789ea0(puVar7,param_2,&PTR____CFConstantStringClassReference_00a3fdc0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar7;
    func_0x00789ea0(puVar7,param_2,&PTR____CFConstantStringClassReference_00a3fde0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined1 *)puVar7;
    func_0x00789ea0(puVar7,param_2,&PTR____CFConstantStringClassReference_00a3fe00);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined1 *)0x0 && puVar4 != (undefined1 *)0x0) {
      uVar1 = *(undefined8 *)(lVar2 + 0x18);
      puVar6 = puVar5;
      func_0x0077fbc0(puVar5);
      func_0x007887a0(uVar1,param_2,puVar3,puVar4,puVar6);
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(puVar7);
  return;
}



/* Entry: 006082c4; end: 0060840b; -[SCAppStartExperimentReader _logExposureFor:configId:] */

void FUN_006082c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    puStack_70 = PTR___NSConcreteStackBlock_00999f30;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_0060840c;
    puStack_58 = &UNK_009e36d0;
    lStack_50 = param_1;
    _objc_retain(param_3);
    lStack_48 = param_3;
    func_0x0078a560(uVar5,param_2,&puStack_70);
    lVar1 = lStack_48;
  }
  else {
    lVar1 = param_3;
    func_0x00789ea0(param_3,param_2,&PTR____CFConstantStringClassReference_00a3fdc0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00789ea0(param_3,param_2,&PTR____CFConstantStringClassReference_00a3fde0);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00789ea0(param_3,param_2,&PTR____CFConstantStringClassReference_00a3fe00);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0 && lVar2 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      lVar4 = lVar3;
      func_0x0077fbc0(lVar3);
      func_0x007887a0(uVar5,param_2,lVar1,lVar2,lVar4);
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 0060840c; end: 00608417;  */

void FUN_0060840c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),PTR_s_addObject__00aba6c0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 00608418; end: 006084cf; -[SCAppStartExperimentReader _logConfigIdRead:] */

void FUN_00608418(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    puStack_60 = PTR___NSConcreteStackBlock_00999f30;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_006084d0;
    puStack_48 = &UNK_009e36d0;
    lStack_40 = param_1;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x0078a560(uVar1,param_2,&puStack_60);
    _objc_release(uStack_38);
  }
  else {
    func_0x007804a0(*(long *)(param_1 + 0x20),param_2,param_3,
                    &PTR____CFConstantStringClassReference_00a3fea0,1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 006084d0; end: 006084db;  */

void FUN_006084d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),PTR_s_addObject__00aba6c0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 006084dc; end: 0060868f; -[SCAppStartExperimentReader _readLocalFileRecoveryResponse] */

void FUN_006084dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_00ac3358;
  func_0x007914e0(PTR_PTR_00ac3358);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077f940();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_00ac3340;
  func_0x00783fe0(PTR_PTR_00ac3340);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
  func_0x00781c40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x0078a400(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x007833a0(puVar4,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  if ((int)puVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSData_00ac2b10;
    func_0x007816a0(PTR__OBJC_CLASS___NSData_00ac2b10,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR_PTR_00ac3358;
  func_0x007914e0(PTR_PTR_00ac3358);
  _objc_retainAutoreleasedReturnValue();
  func_0x00782900();
  _objc_release(puVar3);
  if (puVar4 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___SCCOFPushRecoveryPayload_00ac3360;
    _objc_alloc();
    func_0x00785200();
    puVar3 = puVar2;
    func_0x00784280();
    if ((int)puVar3 == 0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = puVar2;
      func_0x00780980(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x0077c260(param_1,param_2,puVar3);
      _objc_release(puVar3);
      _objc_retain(puVar2);
      puVar3 = puVar2;
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 00608690; end: 00608887; -[SCAppStartExperimentReader _readSharedDefaultsRecoveryResponse] */

void FUN_00608690(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_00ac3358;
  func_0x007914e0(PTR_PTR_00ac3358);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077f940();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_00ac3340;
  func_0x00783de0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_00ac3358;
  func_0x007914e0(PTR_PTR_00ac3358);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077f940();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00789ea0(puVar1,param_2,*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_00ac3358;
  func_0x007914e0(PTR_PTR_00ac3358);
  _objc_retainAutoreleasedReturnValue();
  func_0x00782900();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_00ac3358;
  func_0x007914e0(PTR_PTR_00ac3358);
  _objc_retainAutoreleasedReturnValue();
  func_0x00782900();
  _objc_release(puVar4);
  if (puVar2 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_00ac3358;
    func_0x007914e0(PTR_PTR_00ac3358);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077f940();
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___SCCOFPushRecoveryPayload_00ac3360;
    _objc_alloc();
    func_0x00785200();
    puVar4 = PTR_PTR_00ac3358;
    func_0x007914e0(PTR_PTR_00ac3358);
    _objc_retainAutoreleasedReturnValue();
    func_0x00782900();
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00784280();
    if ((int)puVar4 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = puVar3;
      func_0x00780980(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x0077c260(param_1,param_2,puVar4);
      _objc_release(puVar4);
      _objc_retain(puVar3);
      puVar4 = puVar3;
    }
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar4);
  return;
}



/* Entry: 00608888; end: 00608b17; -[SCAppStartExperimentReader _checkForRecoveryData] */

void FUN_00608888(undefined *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(ulong *)(param_1 + 0x50);
  if ((uVar2 == 0) || (func_0x00788200(), (uVar2 & 1) != 0)) {
LAB_006088b4:
    puVar5 = param_1;
    func_0x0077d6e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined *)0x0) goto LAB_006088f8;
    puVar5 = param_1;
    func_0x0077d680();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined *)0x0) goto LAB_006088f8;
  }
  else {
    puVar5 = param_1;
    func_0x0077d680();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined *)0x0) goto LAB_006088f8;
    if (lRam0000000000b63038 != -1) {
      _dispatch_once(0xb63038,&PTR___NSConcreteGlobalBlock_00a0ab68);
    }
    if ((bRam0000000000b63020 & 1) != 0) goto LAB_006088b4;
  }
  puVar5 = PTR_PTR_00ac3358;
  func_0x007914e0(PTR_PTR_00ac3358);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077f940();
  _objc_release(puVar5);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
  func_0x00787c40();
  puVar5 = PTR_PTR_00ac3358;
  func_0x007914e0(PTR_PTR_00ac3358);
  _objc_retainAutoreleasedReturnValue();
  func_0x00782900();
  _objc_release(puVar5);
  if (iVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_00ac3358;
    func_0x007914e0(PTR_PTR_00ac3358);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077f940();
    _objc_release(puVar5);
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_00608b18;
    uStack_50 = 0x608b28;
    uStack_48 = 0;
    uVar3 = 0;
    _dispatch_semaphore_create();
    _objc_retain();
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = uVar3;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar3);
    func_0x00784000(uVar4);
    func_0x0077e0a0(param_1);
    puVar5 = PTR_PTR_00ac3358;
    func_0x007914e0(PTR_PTR_00ac3358);
    _objc_retainAutoreleasedReturnValue();
    func_0x00782900();
    _objc_release(puVar5);
    if (puStack_68[5] == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___SCCOFPushRecoveryPayload_00ac3360;
      _objc_alloc_init(PTR__OBJC_CLASS___SCCOFPushRecoveryPayload_00ac3360);
      func_0x0078d5e0();
    }
    _objc_release(uVar3);
    _objc_release(uVar3);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(uStack_48);
  }
LAB_006088f8:
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar5);
  return;
}



/* Entry: 00608b18; end: 00608b2f;  */

void FUN_00608b18(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 00608b30; end: 00608beb;  */

void FUN_00608b30(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___SCCofConfigTargetingResponse_00ac3368;
  if (param_3 == 0) {
    _objc_retain(param_2);
    _objc_alloc();
    func_0x00785200();
    _objc_release(param_2);
    param_3 = 0;
    _objc_retain(0);
    lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar1;
    _objc_release(uVar2);
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) != 0) {
      func_0x0077c260(*(undefined8 *)(param_1 + 0x20));
    }
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_3);
  return;
}



/* Entry: 00608bec; end: 00608c97; -[SCAppStartExperimentReader _waitForRecovery] */

void FUN_00608bec(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    puVar1 = PTR_PTR_00ac3358;
    func_0x007914e0(PTR_PTR_00ac3358);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077f940();
    _objc_release(puVar1);
    lVar3 = *(long *)(param_1 + 0x58);
    uVar2 = 0;
    _dispatch_time(0,3000000000);
    _dispatch_semaphore_wait(lVar3,uVar2);
    if (lVar3 == 0) {
      _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x58));
    }
    puVar1 = PTR_PTR_00ac3358;
    func_0x007914e0(PTR_PTR_00ac3358);
    _objc_retainAutoreleasedReturnValue();
    func_0x00782900();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_0099ada0)(puVar1);
    return;
  }
  return;
}



/* Entry: 00608c98; end: 00608fb7; -[SCAppStartExperimentReader _mergeDictionary:withTargetingResponse:protectedWrite:] */

void FUN_00608c98(long param_1,undefined8 param_2,undefined *param_3,long param_4,undefined8 param_5
                 )

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int iStack_144;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_opt_new();
  }
  else {
    puVar2 = param_3;
    func_0x00789700();
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00792720();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar4 = param_4;
  func_0x00780960();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00780ea0();
  if (lVar5 == 0) {
    iVar1 = 0;
    iStack_144 = 0;
  }
  else {
    iVar1 = 0;
    iStack_144 = 0;
    lVar16 = *plStack_120;
    do {
      lVar17 = 0;
      do {
        if (*plStack_120 != lVar16) {
          _objc_enumerationMutation(lVar4);
        }
        lVar15 = *(long *)(lStack_128 + lVar17 * 8);
        _objc_retain(lVar15);
        _objc_retain(uVar3);
        _objc_retain(param_3);
        lVar6 = lVar15;
        func_0x00780940(lVar15);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar3;
        func_0x00780c20(uVar3,param_2,lVar6);
        _objc_release(lVar6);
        if (((int)param_5 == 0) || ((int)uVar7 == 0)) {
          _objc_release(param_3);
          _objc_release(uVar3);
          _objc_release(lVar15);
          if ((int)uVar7 != 0) goto LAB_00608e5c;
        }
        else {
          lVar6 = lVar15;
          func_0x00780940();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = param_3;
          func_0x00789ea0(param_3,param_2,lVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar6);
          _objc_release(param_3);
          _objc_release(uVar3);
          _objc_release(lVar15);
          if (puVar8 == (undefined *)0x0) {
            iStack_144 = iStack_144 + 1;
          }
          else {
LAB_00608e5c:
            lVar6 = lVar15;
            func_0x00781da0();
            if ((int)lVar6 == 0) {
              lVar6 = param_1;
              func_0x0077c4e0(param_1,param_2,lVar15);
              _objc_retainAutoreleasedReturnValue();
              func_0x00780940(lVar15);
              _objc_retainAutoreleasedReturnValue();
              func_0x0078f4a0(puVar2,param_2,lVar6,lVar15);
              _objc_release(lVar15);
            }
            else {
              func_0x00780940();
              _objc_retainAutoreleasedReturnValue();
              func_0x0078b4a0(puVar2,param_2,lVar15);
              lVar6 = lVar15;
            }
            _objc_release(lVar6);
            iVar1 = iVar1 + 1;
          }
        }
        lVar17 = lVar17 + 1;
      } while (lVar5 != lVar17);
      lVar5 = lVar4;
      func_0x00780ea0(lVar4,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar5 != 0);
  }
  _objc_release(lVar4);
  func_0x007804c0(*(undefined8 *)(param_1 + 0x20),param_2,
                  &PTR____CFConstantStringClassReference_00a46b20,iVar1,iStack_144,param_5);
  puVar8 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  _objc_alloc();
  puVar12 = puVar2;
  func_0x00785300();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar12);
  puVar2 = puVar12;
  func_0x00792280(puVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar2;
  func_0x00780e20();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x00782fa0();
  func_0x0078c100(puVar2,param_2,&PTR____CFConstantStringClassReference_00a3fd80);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  puVar8 = puVar12;
  func_0x0078bd80(puVar12);
  func_0x00789be0(puVar10,param_2,(int)puVar8 != 2);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar12;
  func_0x00793580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8);
  func_0x0078f4a0();
  func_0x0078f4a0(puVar12,param_2,puVar2,&PTR____CFConstantStringClassReference_00a3fde0);
  func_0x0078f4a0(puVar12,param_2,puVar10,&PTR____CFConstantStringClassReference_00a3fe00);
  puVar13 = puVar11;
  func_0x00788160();
  puVar8 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  iVar1 = (int)puVar13;
  if (iVar1 < 3) {
    if (iVar1 == 1) {
      puVar13 = puVar11;
      func_0x007871a0(puVar11);
      func_0x00789c60(puVar8,param_2,puVar13);
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = &PTR_PTR_00a0aba8;
      goto LAB_006091b4;
    }
    if (iVar1 == 2) {
      puVar13 = puVar11;
      func_0x00788b60(puVar11);
      func_0x00789ca0(puVar8,param_2,puVar13);
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = &PTR_PTR_00a0abb8;
      goto LAB_006091b4;
    }
  }
  else {
    if (iVar1 == 3) {
      func_0x00783840(puVar11);
      func_0x00789c40(puVar8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = &PTR_PTR_00a0abb0;
    }
    else {
      if (iVar1 != 4) goto LAB_006091cc;
      puVar13 = puVar11;
      func_0x0077fbc0(puVar11);
      func_0x00789be0(puVar8,param_2,puVar13);
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = &PTR_PTR_00a0aba0;
    }
LAB_006091b4:
    func_0x0078f4a0(puVar12,param_2,puVar8,*ppuVar14);
    _objc_release(puVar8);
  }
LAB_006091cc:
  puVar8 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  _objc_alloc(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
  func_0x00785300();
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar2);
  _objc_release(puVar9);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar8);
  return;
}



/* Entry: 00608fb8; end: 00609227; -[SCAppStartExperimentReader _createDictionaryFrom:] */

void FUN_00608fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00792280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00780e20();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x00782fa0();
  func_0x0078c100(puVar4,param_2,&PTR____CFConstantStringClassReference_00a3fd80);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  uVar2 = param_3;
  func_0x0078bd80(param_3);
  func_0x00789be0(puVar5,param_2,(int)uVar2 != 2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00793580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8);
  func_0x0078f4a0();
  func_0x0078f4a0(puVar6,param_2,puVar4,&PTR____CFConstantStringClassReference_00a3fde0);
  func_0x0078f4a0(puVar6,param_2,puVar5,&PTR____CFConstantStringClassReference_00a3fe00);
  uVar7 = uVar2;
  func_0x00788160();
  puVar8 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  iVar1 = (int)uVar7;
  if (iVar1 < 3) {
    if (iVar1 == 1) {
      uVar7 = uVar2;
      func_0x007871a0(uVar2);
      func_0x00789c60(puVar8,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = &PTR_PTR_00a0aba8;
    }
    else {
      if (iVar1 != 2) goto LAB_006091cc;
      uVar7 = uVar2;
      func_0x00788b60(uVar2);
      func_0x00789ca0(puVar8,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = &PTR_PTR_00a0abb8;
    }
  }
  else if (iVar1 == 3) {
    func_0x00783840(uVar2);
    func_0x00789c40(puVar8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = &PTR_PTR_00a0abb0;
  }
  else {
    if (iVar1 != 4) goto LAB_006091cc;
    uVar7 = uVar2;
    func_0x0077fbc0(uVar2);
    func_0x00789be0(puVar8,param_2,uVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = &PTR_PTR_00a0aba0;
  }
  func_0x0078f4a0(puVar6,param_2,puVar8,*ppuVar9);
  _objc_release(puVar8);
LAB_006091cc:
  puVar8 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  _objc_alloc(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
  func_0x00785300();
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar8);
  return;
}



/* Entry: 00609228; end: 006093db; -[SCAppStartExperimentReader _filterConfigResults:] */

/* WARNING: Removing unreachable block (ram,0x0060946c) */

void FUN_00609228(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar1 = param_3;
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x69) & 1) == 0) {
    _objc_retain(param_3);
    puVar2 = param_3;
  }
  else {
    puVar1 = PTR_PTR_00ac3340;
    func_0x007840e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    func_0x00781fe0();
    _objc_retainAutoreleasedReturnValue();
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(puVar1);
    puVar11 = puVar1;
    func_0x00780ea0();
    if (puVar11 != (undefined *)0x0) {
      lVar9 = *plStack_120;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(puVar1);
          }
          puVar3 = param_3;
          func_0x00789f00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar3 != (undefined *)0x0) {
            puVar3 = param_3;
            func_0x00789f00();
            _objc_retainAutoreleasedReturnValue();
            func_0x0078f4e0(puVar2);
            _objc_release(puVar3);
          }
          puVar10 = puVar10 + 1;
        } while (puVar11 != puVar10);
        puVar11 = puVar1;
        puVar6 = &uStack_130;
        func_0x00780ea0();
      } while (puVar11 != (undefined *)0x0);
    }
    _objc_release(puVar1);
    _objc_release(puVar1);
    puVar1 = (undefined *)puVar6;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_00999f88;
  func_0x00780960();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00780ea0();
  do {
    if (puVar2 == (undefined *)0x0) {
LAB_00609570:
      _objc_release(puVar1);
      if (*(long *)PTR____stack_chk_guard_00999f88 != lVar9) {
        ___stack_chk_fail();
        _objc_storeStrong(puVar1 + 0x58,0);
        _objc_storeStrong(puVar1 + 0x50,0);
        _objc_storeStrong(puVar1 + 0x48,0);
        _objc_storeStrong(puVar1 + 0x40,0);
        _objc_storeStrong(puVar1 + 0x38,0);
        _objc_storeStrong(puVar1 + 0x30,0);
        _objc_storeStrong(puVar1 + 0x28,0);
        _objc_storeStrong(puVar1 + 0x20,0);
        _objc_storeStrong(puVar1 + 0x18,0);
        _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_storeStrong_0099adf0)(puVar1 + 8,0);
        return;
      }
      return;
    }
    puVar11 = (undefined *)0x0;
    do {
      uVar8 = *(ulong *)((long)puVar11 * 8);
      uVar4 = uVar8;
      func_0x00780940();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x007878e0();
      _objc_release(uVar4);
      if ((int)uVar5 != 0) {
        uVar4 = uVar8;
        func_0x00793580();
        _objc_retainAutoreleasedReturnValue();
        func_0x00781da0();
        if (((uVar8 & 1) != 0) ||
           ((uVar5 = uVar4, func_0x00788160(), (int)uVar5 == 1 &&
            (uVar5 = uVar4, func_0x007871a0(), (int)uVar5 == -1)))) {
          puVar2 = PTR_PTR_00ac3370;
          _objc_alloc_init(PTR_PTR_00ac3370);
          func_0x00790220();
          uVar7 = *(undefined8 *)(param_3 + 0x48);
          puVar11 = puVar2;
          func_0x007847c0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x007931c0(uVar7);
          _objc_release(puVar11);
          _objc_release(puVar2);
        }
        _objc_release(uVar4);
        goto LAB_00609570;
      }
      puVar11 = puVar11 + 1;
    } while (puVar2 != puVar11);
    puVar2 = puVar1;
    func_0x00780ea0();
  } while( true );
}



/* Entry: 006093dc; end: 006095b3; -[SCAppStartExperimentReader _checkForSafeModeDisableFromTargetingResponse:] */

/* WARNING: Removing unreachable block (ram,0x0060946c) */

void FUN_006093dc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_00999f88;
  func_0x00780960();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00780ea0();
  do {
    if (lVar1 == 0) {
LAB_00609570:
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_00999f88 != lVar6) {
        ___stack_chk_fail();
        _objc_storeStrong(param_3 + 0x58,0);
        _objc_storeStrong(param_3 + 0x50,0);
        _objc_storeStrong(param_3 + 0x48,0);
        _objc_storeStrong(param_3 + 0x40,0);
        _objc_storeStrong(param_3 + 0x38,0);
        _objc_storeStrong(param_3 + 0x30,0);
        _objc_storeStrong(param_3 + 0x28,0);
        _objc_storeStrong(param_3 + 0x20,0);
        _objc_storeStrong(param_3 + 0x18,0);
        _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_storeStrong_0099adf0)(param_3 + 8,0);
        return;
      }
      return;
    }
    lVar9 = 0;
    do {
      uVar8 = *(ulong *)(lVar9 * 8);
      uVar2 = uVar8;
      func_0x00780940();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x007878e0();
      _objc_release(uVar2);
      if ((int)uVar3 != 0) {
        uVar2 = uVar8;
        func_0x00793580();
        _objc_retainAutoreleasedReturnValue();
        func_0x00781da0();
        if (((uVar8 & 1) != 0) ||
           ((uVar3 = uVar2, func_0x00788160(), (int)uVar3 == 1 &&
            (uVar3 = uVar2, func_0x007871a0(), (int)uVar3 == -1)))) {
          puVar4 = PTR_PTR_00ac3370;
          _objc_alloc_init(PTR_PTR_00ac3370);
          func_0x00790220();
          uVar7 = *(undefined8 *)(param_1 + 0x48);
          puVar5 = puVar4;
          func_0x007847c0(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x007931c0(uVar7);
          _objc_release(puVar5);
          _objc_release(puVar4);
        }
        _objc_release(uVar2);
        goto LAB_00609570;
      }
      lVar9 = lVar9 + 1;
    } while (lVar1 != lVar9);
    lVar1 = param_3;
    func_0x00780ea0();
  } while( true );
}



/* Entry: 006095b4; end: 006096af; -[SCAppStartExperimentReader .cxx_destruct] */

void FUN_006095b4(long param_1)

{
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
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 006096b0; end: 0060979f; +[SCAppStartExperimentReaderConstants getURLForAppStartExperimentReader] */

void FUN_006096b0(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b63048 != -1) {
    _dispatch_once(0xb63048,&PTR___NSConcreteGlobalBlock_00a0abc8);
  }
  uVar1 = uRam0000000000b63040;
  _objc_retain(uRam0000000000b63040);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 006097a0; end: 0060988f; +[SCAppStartExperimentReaderConstants getPushRecoveryLocalFileURL] */

void FUN_006097a0(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b63058 != -1) {
    _dispatch_once(0xb63058,&PTR___NSConcreteGlobalBlock_00a0abe8);
  }
  uVar1 = uRam0000000000b63050;
  _objc_retain(uRam0000000000b63050);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00609890; end: 006098e3; +[SCAppStartExperimentReaderConstants getSetOfAppStartExperimentReaderAllowedConfigs] */

void FUN_00609890(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b63068 != -1) {
    _dispatch_once(0xb63068,&PTR___NSConcreteGlobalBlock_00a0ac08);
  }
  uVar1 = uRam0000000000b63060;
  _objc_retain(uRam0000000000b63060);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 006098e4; end: 0060bf23;  */

void FUN_006098e4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_00ac2a68;
  _objc_alloc();
  func_0x00785de0();
  uVar1 = puRam0000000000b63060;
  puRam0000000000b63060 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0060bf24; end: 0060bf77; +[SCAppStartExperimentReaderConstants getSetOfSafeModeOptOutConfigs] */

void FUN_0060bf24(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b63078 != -1) {
    _dispatch_once(0xb63078,&PTR___NSConcreteGlobalBlock_00a0ac28);
  }
  uVar1 = uRam0000000000b63070;
  _objc_retain(uRam0000000000b63070);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0060bf78; end: 0060c267;  */

void FUN_0060bf78(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_00ac2a68;
  _objc_alloc();
  func_0x00785de0();
  uVar1 = puRam0000000000b63070;
  puRam0000000000b63070 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0060c268; end: 0060c2bb; +[SCAppStartExperimentReaderConstants getSetOfSafeModeOptOutNamespaces] */

void FUN_0060c268(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b63088 != -1) {
    _dispatch_once(0xb63088,&PTR___NSConcreteGlobalBlock_00a0ac48);
  }
  uVar1 = uRam0000000000b63080;
  _objc_retain(uRam0000000000b63080);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0060c2bc; end: 0060c2ff;  */

void FUN_0060c2bc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_00ac2a68;
  _objc_alloc();
  func_0x00785de0();
  uVar1 = puRam0000000000b63080;
  puRam0000000000b63080 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0060c300; end: 0060c353; +[SCAppStartExperimentReaderConstants getCrashRecoveryUserDefaults] */

void FUN_0060c300(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b63098 != -1) {
    _dispatch_once(0xb63098,&PTR___NSConcreteGlobalBlock_00a0ac68);
  }
  uVar1 = uRam0000000000b63090;
  _objc_retain(uRam0000000000b63090);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0060c354; end: 0060c38f;  */

void FUN_0060c354(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_00ac3018;
  _objc_alloc();
  func_0x007869e0();
  uVar1 = puRam0000000000b63090;
  puRam0000000000b63090 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0060c390; end: 0060c47f;  */

bool FUN_0060c390(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00789ea0(param_1,param_2,&PTR____CFConstantStringClassReference_00a47a60);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___SCCOFPushRecoveryPayload_00ac3360;
    _objc_alloc();
    func_0x00785200();
    bVar1 = false;
    if (puVar2 != (undefined *)0x0) {
      puVar3 = puVar2;
      func_0x00784280();
      if ((int)puVar3 == 0) {
        bVar1 = false;
      }
      else {
        puVar3 = puVar2;
        func_0x00780980();
        _objc_retainAutoreleasedReturnValue();
        if (puVar3 == (undefined *)0x0) {
          bVar1 = false;
        }
        else {
          puVar4 = puVar3;
          func_0x0077e160(puVar3);
          bVar1 = (param_3 & (long)(int)puVar4) != 0;
        }
        _objc_release(puVar3);
      }
    }
    _objc_release(puVar2);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 0060c480; end: 0060c59f; -[SCAppStartExperimentReaderRepository initWithFilePathURL:allowedConfigs:configMetric:loginSyncUpdateEnabled:] */

undefined1 *
FUN_0060c480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_00ac4188;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x28) = param_6;
    uVar2 = 0;
    _dispatch_queue_attr_make_with_qos_class(0,0x11,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = &UNK_0090c6c9;
    _dispatch_queue_create(&UNK_0090c6c9,uVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0060c5a0; end: 0060c6bb; -[SCAppStartExperimentReaderRepository _retrieveConfigResults] */

void FUN_0060c5a0(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSData_00ac2b10;
  func_0x007816a0(PTR__OBJC_CLASS___NSData_00ac2b10,param_2,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR_PTR_00ac2ce8;
    func_0x00789f40(PTR_PTR_00ac2ce8,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) goto LAB_0060c62c;
  }
  puVar2 = param_1;
  func_0x0077c120(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00792720(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077edc0();
  _objc_release(uVar3);
LAB_0060c62c:
  puVar4 = puVar2;
  func_0x00789700(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar4);
  return;
}



/* Entry: 0060c6bc; end: 0060c73b; -[SCAppStartExperimentReaderRepository updateExperiments:deletedExperiments:updateImmediately:] */

void FUN_0060c6bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_5 == 0) || (*(char *)(param_1 + 0x28) != '\x01')) {
    func_0x0077dd40(param_1,param_2,param_3,param_4);
  }
  else {
    func_0x0077dd20(param_1,param_2,param_3,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0060c73c; end: 0060c8ab; -[SCAppStartExperimentReaderRepository _syncImmediatelyWithUpdates:deletedExperiments:] */

void FUN_0060c73c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _CACurrentMediaTime();
  lVar1 = param_2;
  func_0x0077c5a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = PTR_PTR_00ac2ce8;
  func_0x00781760();
  _objc_retainAutoreleasedReturnValue();
  func_0x007882e0();
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  func_0x00792720(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077f260();
  _objc_release(uVar3);
  puVar4 = PTR_PTR_00ac3338;
  func_0x007915a0(PTR_PTR_00ac3338);
  _objc_retainAutoreleasedReturnValue();
  func_0x007931a0();
  _objc_release(puVar4);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  puStack_90 = PTR___NSConcreteStackBlock_00999f30;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_0060c8ac;
  puStack_78 = &UNK_00a0ac88;
  puStack_70 = puVar2;
  lStack_68 = param_2;
  uStack_60 = param_5;
  uStack_58 = param_1;
  _objc_retain(param_5);
  _objc_retain(puVar2);
  _dispatch_async(uVar3,&puStack_90);
  _objc_release(uStack_60);
  _objc_release(puStack_70);
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 0060c8ac; end: 0060c963;  */

void FUN_0060c8ac(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_48;
  
  lStack_48 = 0;
  func_0x00794420(*(undefined8 *)(param_2 + 0x20),param_3,
                  *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x10),0x10000001,&lStack_48);
  lVar1 = lStack_48;
  _objc_retain(lStack_48);
  uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x18);
  func_0x00792720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_2 + 0x30);
  _CACurrentMediaTime();
  func_0x0077ede0(param_1 - *(double *)(param_2 + 0x38),uVar2,param_3,lVar3 == 0,lVar1 == 0);
  _objc_release(uVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 0060c964; end: 0060ca1b; -[SCAppStartExperimentReaderRepository _syncWithUpdates:deletedExperiments:] */

void FUN_0060c964(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_00999f30;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_0060ca1c;
  puStack_50 = &UNK_009e43d0;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _dispatch_async(uVar1,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 0060ca1c; end: 0060cb53;  */

void FUN_0060ca1c(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  long lStack_58;
  
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  dVar6 = param_1;
  func_0x0077c5a0(uVar2,param_3,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_00ac2ce8;
  func_0x00781760(PTR_PTR_00ac2ce8,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x007882e0();
  uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18);
  func_0x00792720(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077f260();
  _objc_release(uVar4);
  lStack_58 = 0;
  func_0x00794420(puVar3,param_3,*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x10),0x10000001,
                  &lStack_58);
  lVar1 = lStack_58;
  _objc_retain(lStack_58);
  uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18);
  func_0x00792720(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_2 + 0x30);
  _CACurrentMediaTime();
  func_0x0077ede0(dVar6 - param_1,uVar4,param_3,lVar5 == 0,lVar1 == 0);
  _objc_release(uVar4);
  _objc_release(lVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 0060cb54; end: 0060ce7b; -[SCAppStartExperimentReaderRepository _createNewBackingDictionary:deletedExperiments:] */

void FUN_0060cb54(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [128];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_1;
  func_0x0077d960();
  _objc_retainAutoreleasedReturnValue();
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  _objc_retain(param_4);
  lVar3 = param_4;
  func_0x00780ea0(param_4,param_2,&uStack_230,auStack_f0,0x10);
  if (lVar3 != 0) {
    lVar14 = *plStack_220;
    do {
      lVar12 = 0;
      do {
        if (*plStack_220 != lVar14) {
          _objc_enumerationMutation(param_4);
        }
        uVar4 = *(undefined8 *)(lStack_228 + lVar12 * 8);
        func_0x00780940();
        _objc_retainAutoreleasedReturnValue();
        func_0x0078b4a0(lVar2,param_2,uVar4);
        _objc_release(uVar4);
        lVar12 = lVar12 + 1;
      } while (lVar3 != lVar12);
      lVar3 = param_4;
      func_0x00780ea0(param_4,param_2,&uStack_230,auStack_f0,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(param_4);
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00780ea0(param_3,param_2,&uStack_270,auStack_170,0x10);
  if (lVar3 != 0) {
    lVar14 = *plStack_260;
    do {
      lVar12 = 0;
      do {
        if (*plStack_260 != lVar14) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = *(undefined8 *)(lStack_268 + lVar12 * 8);
        lVar13 = param_1;
        func_0x0077c4e0(param_1,param_2,uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00780940();
        _objc_retainAutoreleasedReturnValue();
        func_0x0078f4a0(lVar2,param_2,lVar13,uVar4);
        _objc_release(uVar4);
        _objc_release(lVar13);
        lVar12 = lVar12 + 1;
      } while (lVar3 != lVar12);
      lVar3 = param_3;
      func_0x00780ea0(param_3,param_2,&uStack_270,auStack_170,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  plStack_2a0 = (long *)0x0;
  lVar3 = lVar2;
  func_0x0077eae0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar3;
  func_0x00780ea0();
  if (lVar14 != 0) {
    lVar12 = *plStack_2a0;
    do {
      lVar13 = 0;
      do {
        if (*plStack_2a0 != lVar12) {
          _objc_enumerationMutation(lVar3);
        }
        uVar4 = *(undefined8 *)(lStack_2a8 + lVar13 * 8);
        uVar5 = *(ulong *)(param_1 + 8);
        func_0x00792720();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00780c20();
        _objc_release(uVar5);
        if ((uVar6 & 1) == 0) {
          func_0x0078b4a0(lVar2,param_2,uVar4);
        }
        lVar13 = lVar13 + 1;
      } while (lVar14 != lVar13);
      lVar14 = lVar3;
      func_0x00780ea0(lVar3,param_2,&uStack_2b0,auStack_1f0,0x10);
    } while (lVar14 != 0);
  }
  _objc_release(lVar3);
  puVar10 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  _objc_alloc();
  lVar3 = lVar2;
  func_0x00785300();
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00792280(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar2;
  func_0x00780e20();
  _objc_release(lVar2);
  puVar7 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x00782fa0();
  func_0x0078c100(puVar7,param_2,&PTR____CFConstantStringClassReference_00a3fd80);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  lVar2 = lVar3;
  func_0x0078bd80(lVar3);
  func_0x00789be0(puVar8,param_2,(int)lVar2 != 2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00793580();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8);
  func_0x0078f4a0();
  func_0x0078f4a0(puVar9,param_2,puVar7,&PTR____CFConstantStringClassReference_00a3fde0);
  func_0x0078f4a0(puVar9,param_2,puVar8,&PTR____CFConstantStringClassReference_00a3fe00);
  lVar12 = lVar2;
  func_0x00788160();
  puVar10 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  iVar1 = (int)lVar12;
  if (iVar1 < 3) {
    if (iVar1 == 1) {
      lVar12 = lVar2;
      func_0x007871a0(lVar2);
      func_0x00789c60(puVar10,param_2,lVar12);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = &PTR_PTR_00a0aba8;
      goto LAB_0060d0bc;
    }
    if (iVar1 == 2) {
      lVar12 = lVar2;
      func_0x00788b60(lVar2);
      func_0x00789ca0(puVar10,param_2,lVar12);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = &PTR_PTR_00a0abb8;
      goto LAB_0060d0bc;
    }
LAB_0060d020:
    puVar10 = *(undefined **)(param_3 + 0x18);
    func_0x00792720(puVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar3;
    func_0x00792280(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077ee00(puVar10,param_2,lVar12,1);
    _objc_release(lVar12);
  }
  else {
    if (iVar1 == 3) {
      func_0x00783840(lVar2);
      func_0x00789c40(puVar10);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = &PTR_PTR_00a0abb0;
    }
    else {
      if (iVar1 != 4) goto LAB_0060d020;
      lVar12 = lVar2;
      func_0x0077fbc0(lVar2);
      func_0x00789be0(puVar10,param_2,lVar12);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = &PTR_PTR_00a0aba0;
    }
LAB_0060d0bc:
    func_0x0078f4a0(puVar9,param_2,puVar10,*ppuVar11);
  }
  _objc_release(puVar10);
  puVar10 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  _objc_alloc(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
  func_0x00785300();
  _objc_release(puVar9);
  _objc_release(lVar2);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(lVar14);
  _objc_release(lVar3);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar10);
  return;
}



/* Entry: 0060ce7c; end: 0060d13b; -[SCAppStartExperimentReaderRepository _createDictionaryFrom:] */

void FUN_0060ce7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00792280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00780e20();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x00782fa0();
  func_0x0078c100(puVar4,param_2,&PTR____CFConstantStringClassReference_00a3fd80);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  uVar2 = param_3;
  func_0x0078bd80(param_3);
  func_0x00789be0(puVar5,param_2,(int)uVar2 != 2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00793580();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8);
  func_0x0078f4a0();
  func_0x0078f4a0(puVar6,param_2,puVar4,&PTR____CFConstantStringClassReference_00a3fde0);
  func_0x0078f4a0(puVar6,param_2,puVar5,&PTR____CFConstantStringClassReference_00a3fe00);
  uVar7 = uVar2;
  func_0x00788160();
  puVar8 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  iVar1 = (int)uVar7;
  if (iVar1 < 3) {
    if (iVar1 == 1) {
      uVar7 = uVar2;
      func_0x007871a0(uVar2);
      func_0x00789c60(puVar8,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = &PTR_PTR_00a0aba8;
    }
    else {
      if (iVar1 != 2) {
LAB_0060d020:
        puVar8 = *(undefined **)(param_1 + 0x18);
        func_0x00792720(puVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = param_3;
        func_0x00792280(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x0077ee00(puVar8,param_2,uVar7,1);
        _objc_release(uVar7);
        goto LAB_0060d0cc;
      }
      uVar7 = uVar2;
      func_0x00788b60(uVar2);
      func_0x00789ca0(puVar8,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = &PTR_PTR_00a0abb8;
    }
  }
  else if (iVar1 == 3) {
    func_0x00783840(uVar2);
    func_0x00789c40(puVar8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = &PTR_PTR_00a0abb0;
  }
  else {
    if (iVar1 != 4) goto LAB_0060d020;
    uVar7 = uVar2;
    func_0x0077fbc0(uVar2);
    func_0x00789be0(puVar8,param_2,uVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = &PTR_PTR_00a0aba0;
  }
  func_0x0078f4a0(puVar6,param_2,puVar8,*ppuVar9);
LAB_0060d0cc:
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  _objc_alloc(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
  func_0x00785300();
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar8);
  return;
}



/* Entry: 0060d13c; end: 0060d157; -[SCAppStartExperimentReaderRepository _attemptRecovery] */

void FUN_0060d13c(void)

{
  _objc_alloc_init(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0060d158; end: 0060d19f; -[SCAppStartExperimentReaderRepository .cxx_destruct] */

void FUN_0060d158(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0060d1a0; end: 0060d243; -[SCConfigMetricServices initWithConfigMetricLogger:configMetric:] */

undefined1 *
FUN_0060d1a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac4190;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0060d244; end: 0060d24f; -[SCConfigMetricServices configMetricLogger] */

void FUN_0060d244(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077a9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_0099ad38)(param_1,param_2,8,1);
  return;
}



/* Entry: 0060d250; end: 0060d257; -[SCConfigMetricServices setConfigMetricLogger:] */

void FUN_0060d250(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_0099add8)();
  return;
}



/* Entry: 0060d258; end: 0060d263; -[SCConfigMetricServices configMetric] */

void FUN_0060d258(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077a9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_0099ad38)(param_1,param_2,0x10,1);
  return;
}



/* Entry: 0060d264; end: 0060d26b; -[SCConfigMetricServices setConfigMetric:] */

void FUN_0060d264(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_0099add8)();
  return;
}



/* Entry: 0060d26c; end: 0060d29b; -[SCConfigMetricServices .cxx_destruct] */

void FUN_0060d26c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0060d29c; end: 0060d2db; -[SCDocObject init] */

void FUN_0060d29c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_00ac4198;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = 0xffffffffffffffff;
  }
  return;
}



/* Entry: 0060d2dc; end: 0060d2e3; -[SCDocObject setRowid:] */

void FUN_0060d2dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 0060d2e4; end: 0060d2eb; -[SCDocObject rowid] */

undefined8 FUN_0060d2e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 0060d2ec; end: 0060d2f3; -[SCDocObject setChangesTimestamp:] */

void FUN_0060d2ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 0060d2f4; end: 0060d2fb; -[SCDocObject changesTimestamp] */

undefined8 FUN_0060d2f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0060d2fc; end: 0060d457;  */

void FUN_0060d2fc(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar7 = PTR__OBJC_CLASS___NSError_00ac2b00;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  iVar1 = param_1[2];
  ppuStack_68 = &PTR____CFConstantStringClassReference_00a46b60;
  puVar4 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,*param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_60 = &PTR____CFConstantStringClassReference_00a46b80;
  puVar5 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  puStack_58 = puVar4;
  func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_1[1]);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  puStack_50 = puVar5;
  func_0x00782080(PTR__OBJC_CLASS___NSDictionary_00ac29e8,param_2,&puStack_58,&ppuStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00782e40(puVar7,param_2,&PTR____CFConstantStringClassReference_00a46b40,(long)iVar1,puVar6)
  ;
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar7 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    __Unwind_Resume(puVar7);
    _objc_alloc();
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0xb630a0,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        lRam0000000000b630a0 = lRam0000000000b630a0 + 1;
      }
    } while (cVar2 != '\0');
    func_0x00784c40();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0060d458; end: 0060d4e3; +[SCDocObjectFetchedResult fetchedResultWithArray:objectClass:error:changesTimestamp:expressionPtr:orderBy:limit:] */

void FUN_0060d458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  
  _objc_alloc();
  do {
    lVar1 = lRam0000000000b630a0 + 1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0xb630a0,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      lRam0000000000b630a0 = lVar1;
    }
  } while (cVar2 != '\0');
  func_0x00784c40(param_1,param_2,param_3,param_4,param_5,param_6,lVar1,param_7,param_8,param_9);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0060d4e4; end: 0060d8ab; -[SCDocObjectFetchedResult initWithArray:objectClass:error:changesTimestamp:fetchedResultId:expressionPtr:orderBy:limit:] */

undefined8 *
FUN_0060d4e4(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
            undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
            long *param_9,undefined4 *param_10)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_00ac41a0;
  puVar9 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar9,PTR_s_init_00abbf70);
  if (puVar9 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  plVar14 = puVar9 + 1;
  if (plVar14 != param_3) {
    puVar15 = (undefined8 *)*param_3;
    puVar16 = (undefined8 *)param_3[1];
    uVar12 = (long)puVar16 - (long)puVar15;
    uVar11 = puVar9[3];
    puVar20 = (undefined8 *)puVar9[1];
    if (uVar11 - (long)puVar20 < uVar12) {
      uVar12 = (long)uVar12 >> 3;
      if (puVar20 != (undefined8 *)0x0) {
        puVar18 = (undefined8 *)puVar9[2];
        puVar10 = puVar20;
        if (puVar20 != puVar18) {
          do {
            puVar18 = puVar18 + -1;
            _objc_release(*puVar18);
          } while (puVar18 != puVar20);
          puVar10 = (undefined8 *)*plVar14;
        }
        puVar9[2] = puVar20;
        __ZdlPv(puVar10);
        uVar11 = 0;
        *plVar14 = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
      }
      if (uVar12 >> 0x3d == 0) {
        uVar19 = (long)uVar11 >> 2;
        if ((ulong)((long)uVar11 >> 2) <= uVar12) {
          uVar19 = uVar12;
        }
        if (0x7ffffffffffffff7 < uVar11) {
          uVar19 = 0x1fffffffffffffff;
        }
        if (uVar19 >> 0x3d == 0) {
          puVar20 = (undefined8 *)(uVar19 << 3);
          __Znwm();
          puVar9[1] = puVar20;
          puVar9[2] = puVar20;
          puVar9[3] = puVar20 + uVar19;
          for (puVar10 = puVar15; puVar15 = puVar20, puVar10 != puVar16; puVar10 = puVar10 + 1) {
            uVar21 = *puVar10;
            _objc_retain(uVar21);
            *puVar20 = uVar21;
            puVar20 = puVar20 + 1;
          }
          goto LAB_0060d6a4;
        }
      }
      func_0x0060dd40();
      goto LAB_0060d894;
    }
    if ((ulong)(puVar9[2] - (long)puVar20) < uVar12) {
      puVar10 = (undefined8 *)((long)puVar15 + (puVar9[2] - (long)puVar20));
      FUN_0060dce8(puVar15,puVar10,puVar20);
      puVar15 = (undefined8 *)puVar9[2];
      puVar20 = puVar15;
      for (; puVar10 != puVar16; puVar10 = puVar10 + 1) {
        uVar21 = *puVar10;
        _objc_retain(uVar21);
        *puVar20 = uVar21;
        puVar15 = puVar15 + 1;
        puVar20 = puVar20 + 1;
      }
      puVar9[2] = puVar15;
    }
    else {
      FUN_0060dce8(puVar15,puVar16,puVar20);
      puVar16 = (undefined8 *)puVar9[2];
      while (puVar16 != puVar15) {
        puVar16 = puVar16 + -1;
        _objc_release(*puVar16);
      }
LAB_0060d6a4:
      puVar9[2] = puVar15;
    }
  }
  puVar9[4] = param_4;
  uVar21 = *param_5;
  *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(param_5 + 1);
  puVar9[5] = uVar21;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar9 + 7,param_5 + 2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar9 + 10,param_5 + 5);
  *(undefined4 *)(puVar9 + 0xd) = *(undefined4 *)(param_5 + 8);
  puVar9[0xe] = param_6;
  puVar9[0xf] = param_7;
  uVar22 = param_8[1];
  uVar21 = *param_8;
  if (param_8[1] != 0) {
    plVar14 = (long *)(param_8[1] + 8);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar7) {
        *plVar14 = *plVar14 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar14 = (long *)puVar9[0x11];
  puVar9[0x11] = uVar22;
  puVar9[0x10] = uVar21;
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 1;
    do {
      lVar13 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
  if (puVar9 + 0x12 == param_9) goto LAB_0060d858;
  lVar4 = *param_9;
  lVar5 = param_9[1];
  uVar12 = lVar5 - lVar4;
  uVar11 = puVar9[0x14];
  lVar13 = puVar9[0x12];
  if (uVar12 <= uVar11 - lVar13) {
    lVar17 = puVar9[0x13];
    if ((ulong)(lVar17 - lVar13) < uVar12) {
      lVar2 = lVar4 + (lVar17 - lVar13);
      if (lVar17 != lVar13) {
        _memmove(lVar13,lVar4);
        lVar17 = puVar9[0x13];
      }
      lVar5 = lVar5 - lVar2;
      if (lVar5 != 0) {
        _memmove(lVar17,lVar2,lVar5);
      }
      lVar13 = lVar17 + lVar5;
    }
    else {
      if (lVar5 != lVar4) {
        _memmove(lVar13,lVar4,uVar12);
      }
LAB_0060d850:
      lVar13 = lVar13 + uVar12;
    }
    puVar9[0x13] = lVar13;
LAB_0060d858:
    *(undefined4 *)(puVar9 + 0x15) = *param_10;
    return puVar9;
  }
  uVar19 = (long)uVar12 >> 5;
  if (lVar13 != 0) {
    puVar9[0x13] = lVar13;
    __ZdlPv(lVar13);
    uVar11 = 0;
    puVar9[0x12] = 0;
    puVar9[0x13] = 0;
    puVar9[0x14] = 0;
  }
  if (uVar19 >> 0x3b == 0) {
    uVar3 = (long)uVar11 >> 4;
    if ((ulong)((long)uVar11 >> 4) <= uVar19) {
      uVar3 = uVar19;
    }
    if (0x7fffffffffffffdf < uVar11) {
      uVar3 = 0x7ffffffffffffff;
    }
    if (uVar3 >> 0x3b == 0) {
      lVar13 = uVar3 << 5;
      __Znwm();
      puVar9[0x12] = lVar13;
      puVar9[0x13] = lVar13;
      puVar9[0x14] = lVar13 + uVar3 * 0x20;
      if (lVar5 != lVar4) {
        _memcpy(lVar13,lVar4,uVar12);
      }
      goto LAB_0060d850;
    }
  }
  func_0x0060dd54();
LAB_0060d894:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x60d898);
  (*pcVar8)();
}



/* Entry: 0060d8ac; end: 0060d8b3; -[SCDocObjectFetchedResult array] */

long FUN_0060d8ac(long param_1)

{
  return param_1 + 8;
}



/* Entry: 0060d8b4; end: 0060d8db; -[SCDocObjectFetchedResult objectClass] */

void FUN_0060d8b4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0060d8dc; end: 0060d8e3; -[SCDocObjectFetchedResult changesTimestamp] */

undefined8 FUN_0060d8dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 0060d8e4; end: 0060d8eb; -[SCDocObjectFetchedResult fetchedResultId] */

undefined8 FUN_0060d8e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 0060d8ec; end: 0060d8f3; -[SCDocObjectFetchedResult expressionPtr] */

long FUN_0060d8ec(long param_1)

{
  return param_1 + 0x80;
}



/* Entry: 0060d8f4; end: 0060d8fb; -[SCDocObjectFetchedResult orderBy] */

long FUN_0060d8f4(long param_1)

{
  return param_1 + 0x90;
}



/* Entry: 0060d8fc; end: 0060d903; -[SCDocObjectFetchedResult limit] */

long FUN_0060d8fc(long param_1)

{
  return param_1 + 0xa8;
}


