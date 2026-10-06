/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080d2290; end: 1080d22db; -[SCValdiContext disableHitTestSyncDeadline] */

long FUN_1080d2290(long param_1)

{
  long lVar1;
  long lStack_28;
  
  FUN_1080d05b4(&lStack_28,*(undefined8 *)(param_1 + 8));
  if (lStack_28 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lStack_28;
    func_0x00010b942a1c(lStack_28);
  }
  func_0x000104c62570(lStack_28);
  return lVar1;
}



/* Entry: 1080d22dc; end: 1080d22ef; +[SCValdiContext currentContext] */

void FUN_1080d22dc(long param_1)

{
  undefined8 unaff_x19;
  undefined1 auStack_28 [8];
  
  func_0x00010b8c2a68();
  if (param_1 == 0) {
    unaff_x19 = 0;
  }
  else {
    func_0x00010b8c2988(auStack_28);
    func_0x00010b981064(auStack_28,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080de2e4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 1080d22f0; end: 1080d2453; +[SCValdiContext currentTraitCollectionForMeasurementContextDestroyed:] */

void FUN_1080d22f0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  func_0x00010b8c2a44(&lStack_48);
  if (lStack_48 != 0) {
    lVar1 = lStack_48;
    func_0x00010b8c1f54();
    if (((int)lVar1 == 0) &&
       ((func_0x00010b8c2aac(), lVar1 == 0 || (func_0x00010b8c1f54(), (int)lVar1 == 0)))) {
      func_0x0001080d2adc();
      func_0x00010b8c2988();
      if (lStack_50 == 0) {
        lStack_50 = 0;
        plVar5 = (long *)0x0;
      }
      else {
        func_0x00010b981064(&lStack_50,0);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126bce48;
        _objc_opt_class(PTR_PTR_1126bce48);
        puVar3 = (undefined1 *)plVar5;
        _objc_opt_isKindOfClass(plVar5,puVar2);
        puVar4 = (undefined1 *)plVar5;
        if (((ulong)puVar3 & 1) == 0) {
          puVar4 = (undefined1 *)0x0;
        }
        _objc_retain(puVar4);
        func_0x0001080d298c();
        if (puVar4 == (undefined1 *)0x0) {
LAB_1080d23e0:
          plVar5 = (long *)0x0;
        }
        else {
          puVar4 = (undefined1 *)plVar5;
          func_0x00010bf6f140();
          if ((int)puVar4 == 0) {
            func_0x00010c279540(plVar5);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            if (param_3 == (undefined1 *)0x0) goto LAB_1080d23e0;
            plVar5 = (long *)0x0;
            *param_3 = 1;
          }
        }
        func_0x0001080d29ec();
      }
      func_0x000104bddf04(lStack_50);
      goto LAB_1080d2408;
    }
    if (param_3 != (undefined1 *)0x0) {
      plVar5 = (long *)0x0;
      *param_3 = 1;
      goto LAB_1080d2408;
    }
  }
  plVar5 = (long *)0x0;
LAB_1080d2408:
  func_0x000105276914(lStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar5);
  return;
}



/* Entry: 1080d2454; end: 1080d245b; -[SCValdiContext gestureListener] */

undefined8 FUN_1080d2454(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1080d245c; end: 1080d247b; -[SCValdiContext setGestureListener:] */

void FUN_1080d245c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x0001080d28a8();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x78) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080d247c; end: 1080d2483; -[SCValdiContext viewModel] */

undefined8 FUN_1080d247c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1080d2484; end: 1080d249b; -[SCValdiContext owner] */

void FUN_1080d2484(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080d249c; end: 1080d24a7; -[SCValdiContext setOwner:] */

void FUN_1080d249c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x88,param_3);
  return;
}



/* Entry: 1080d24a8; end: 1080d24af; -[SCValdiContext actions] */

undefined8 FUN_1080d24a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 1080d24b0; end: 1080d24cf; -[SCValdiContext setActions:] */

void FUN_1080d24b0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x0001080d28a8();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x90) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080d24d0; end: 1080d24d7; -[SCValdiContext componentPath] */

undefined8 FUN_1080d24d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1080d24d8; end: 1080d24df; -[SCValdiContext moduleOwnerName] */

undefined8 FUN_1080d24d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 1080d24e0; end: 1080d24e7; -[SCValdiContext moduleName] */

undefined8 FUN_1080d24e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 1080d24e8; end: 1080d24ef; -[SCValdiContext enableAccessibility] */

undefined1 FUN_1080d24e8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x70);
}



/* Entry: 1080d24f0; end: 1080d24f7; -[SCValdiContext rootValdiViewShouldDestroyContext] */

undefined1 FUN_1080d24f0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x71);
}



/* Entry: 1080d24f8; end: 1080d24ff; -[SCValdiContext setRootValdiViewShouldDestroyContext:] */

void FUN_1080d24f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x71) = param_3;
  return;
}



/* Entry: 1080d2500; end: 1080d2507; -[SCValdiContext useLegacyMeasureBehavior] */

undefined1 FUN_1080d2500(long param_1)

{
  return *(undefined1 *)(param_1 + 0x72);
}



/* Entry: 1080d2508; end: 1080d250f; -[SCValdiContext setUseLegacyMeasureBehavior:] */

void FUN_1080d2508(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x72) = param_3;
  return;
}



/* Entry: 1080d2510; end: 1080d253b; -[SCValdiContext context] */

void FUN_1080d2510(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 8);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar4 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 1080d253c; end: 1080d25d3; -[SCValdiContext .cxx_destruct] */

undefined8 FUN_1080d253c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001080d2948(param_1 + 0xa0);
  func_0x0001080d2948(param_1 + 0x98);
  func_0x0001080d2948(param_1 + 0x90);
  _objc_destroyWeak(param_1 + 0x88);
  func_0x0001080d2948(param_1 + 0x80);
  func_0x0001080d2948(param_1 + 0x78);
  func_0x0001080d2948(param_1 + 0x60);
  func_0x0001080d2948(param_1 + 0x58);
  func_0x0001080d2948(param_1 + 0x40);
  func_0x0001080d2948(param_1 + 0x38);
  func_0x0001080d2948(param_1 + 0x30);
  func_0x0001080d2948(param_1 + 0x28);
  func_0x0001080d2948(param_1 + 0x20);
  func_0x0001080d2948(param_1 + 0x18);
  FUN_1080d2690(*(undefined8 *)(param_1 + 0x10));
  func_0x00010045db50(param_1 + 8);
  func_0x000105276914();
  return unaff_x19;
}



/* Entry: 1080d25d4; end: 1080d25df; -[SCValdiContext .cxx_construct] */

void FUN_1080d25d4(long param_1)

{
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 1080d25e0; end: 1080d268f;  */

void FUN_1080d25e0(long *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long lStack_30;
  long lStack_28;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else if (*(long *)(param_2 + 8) == 0) {
    lVar1 = *(long *)(param_2 + 0x10);
    *param_1 = param_2;
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      do {
        func_0x0001080d2a1c();
      } while (extraout_w10_00 != 0);
    }
  }
  else {
    func_0x0001003ae9f0(&lStack_30);
    if (lStack_30 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = param_2;
      param_1[1] = lStack_28;
      if (lStack_28 != 0) {
        do {
          func_0x0001080d2a1c();
        } while (extraout_w10 != 0);
      }
    }
    func_0x0001003a824c(&lStack_30);
  }
  return;
}



/* Entry: 1080d2690; end: 1080d26e3;  */

void FUN_1080d2690(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001080d2ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080d26e4; end: 1080d270b;  */

long FUN_1080d26e4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001003a81fc();
  }
  return param_1;
}



/* Entry: 1080d270c; end: 1080d2733;  */

long * FUN_1080d270c(long *param_1)

{
  long *unaff_x19;
  long *plStack_28;
  
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return unaff_x19;
  }
  if (*param_1 == 1) {
    plStack_28 = param_1 + 1;
    func_0x0001080d2768(&plStack_28);
    return param_1 + 1;
  }
  return param_1;
}



/* Entry: 1080d2734; end: 1080d27a3;  */

undefined8 FUN_1080d2734(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x0001080d2768(&uStack_28);
  return param_1;
}



/* Entry: 1080d27a4; end: 1080d27ab;  */

void FUN_1080d27a4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x10;
    func_0x0001003a8c94();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1080d27ac; end: 1080d280f;  */

void FUN_1080d27ac(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x10;
    func_0x0001003a8c94();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1080d2810; end: 1080d282f;  */

void FUN_1080d2810(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1080d2830; end: 1080d288f;  */

void FUN_1080d2830(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110a1ee20;
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_retainBlock();
  param_1[1] = uVar1;
  return;
}



/* Entry: 1080d2890; end: 1080d2ae7;  */

void FUN_1080d2890(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1080d2ae8; end: 1080d2b4b; -[SCValdiJSRuntimeImpl initWithJSRuntimeProvider:] */

undefined1 * FUN_1080d2ae8(void)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0xffffffffffffffd0;
  FUN_1080d3334();
  func_0x0001080d33c0();
  _objc_msgSendSuper2(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    _objc_storeWeak(puVar1 + 8);
  }
  func_0x0001080d3364();
  return puVar1;
}



/* Entry: 1080d2b4c; end: 1080d2c0b; -[SCValdiJSRuntimeImpl initWithJSRuntimeProvider:jsRuntime:nativeObjectsManager:] */

undefined1 *
FUN_1080d2b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 auStack_40 [2];
  
  puVar1 = auStack_40;
  func_0x0001080d3374();
  func_0x0001080d3384();
  _objc_retain(param_5);
  func_0x0001080d33c0();
  auStack_40[0] = param_1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    func_0x0001080d3384();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  func_0x0001080d338c();
  func_0x0001080d336c();
  func_0x0001080d3364();
  return (undefined1 *)puVar1;
}



/* Entry: 1080d2c0c; end: 1080d2c73; -[SCValdiJSRuntimeImpl dealloc] */

void FUN_1080d2c0c(long param_1)

{
  long alStack_30 [2];
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010bf6f040(*(undefined8 *)(param_1 + 0x10));
  }
  func_0x0001080d33c0();
  alStack_30[0] = param_1;
  _objc_msgSendSuper2(alStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1080d2c74; end: 1080d2d07; -[SCValdiJSRuntimeImpl jsRuntime] */

void FUN_1080d2c74(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained();
    func_0x00010bfc6a40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar2;
    _objc_release(uVar1);
    func_0x0001080d336c();
    lVar2 = *(long *)(param_1 + 0x10);
  }
  func_0x0001080d3384();
  _objc_sync_exit(param_1);
  func_0x0001080d3364();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1080d2d08; end: 1080d2d7b; -[SCValdiJSRuntimeImpl pushModuleAtPath:reportingErrorOnMarshaller:] */

long FUN_1080d2d08(undefined8 param_1)

{
  int iVar1;
  
  func_0x0001080d3374();
  func_0x00010c085ce0(param_1);
  iVar1 = (int)param_1;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c1e0();
  func_0x0001080d336c();
  func_0x0001080d3364();
  return (long)iVar1;
}



/* Entry: 1080d2d7c; end: 1080d2dc7; -[SCValdiJSRuntimeImpl pushModuleAthPath:inMarshaller:] */

undefined8 FUN_1080d2d7c(void)

{
  undefined8 unaff_x21;
  
  func_0x0001080d3350();
  func_0x00010c11c1a0();
  func_0x00010b97f3b0();
  func_0x0001080d3364();
  return unaff_x21;
}



/* Entry: 1080d2dc8; end: 1080d2e27; -[SCValdiJSRuntimeImpl preloadModuleAtPath:maxDepth:] */

void FUN_1080d2dc8(void)

{
  FUN_1080d3334();
  func_0x00010c085ce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1088e0();
  func_0x0001080d336c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080d2e28; end: 1080d2e87; -[SCValdiJSRuntimeImpl preloadModulesAtPaths:maxDepth:] */

void FUN_1080d2e28(void)

{
  FUN_1080d3334();
  func_0x00010c085ce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c108900();
  func_0x0001080d336c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080d2e88; end: 1080d2f47; -[SCValdiJSRuntimeImpl cppRuntime] */

void FUN_1080d2e88(undefined8 param_1)

{
  undefined1 auStack_30 [16];
  
  func_0x00010c085ce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b97011c(auStack_30);
  func_0x0001080d336c();
  func_0x0001080d2edc(param_1,auStack_30);
  func_0x0001080d32dc(auStack_30);
  return;
}



/* Entry: 1080d2f48; end: 1080d2fbf; -[SCValdiJSRuntimeImpl warmUpValueMarshallerForObject:] */

void FUN_1080d2f48(void)

{
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  FUN_1080d3334();
  func_0x00010bf53a20(alStack_30);
  if (alStack_30[0] != 0) {
    func_0x00010b980484(auStack_40);
    func_0x00010b8f3e44(alStack_30[0],auStack_40);
    func_0x00010b9a8d98(auStack_40);
  }
  func_0x0001080d3308(alStack_30);
  func_0x0001080d3364();
  return;
}



/* Entry: 1080d2fc0; end: 1080d302f; -[SCValdiJSRuntimeImpl addHotReloadObserver:forModulePath:] */

void FUN_1080d2fc0(void)

{
  func_0x0001080d3350();
  func_0x0001080d3384();
  func_0x00010c085ce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9de0();
  func_0x0001080d338c();
  func_0x0001080d336c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080d3030; end: 1080d3107; -[SCValdiJSRuntimeImpl addHotReloadObserverWithBlock:forModulePath:] */

void FUN_1080d3030(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 unaff_x19;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  
  func_0x0001080d3350();
  func_0x0001080d3384();
  puVar1 = PTR_PTR_1126b6d48;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1080d3108;
  puStack_40 = &UNK_110a1ee40;
  _objc_retain();
  func_0x00010bfbc0a0(puVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef91a0();
  _objc_release(puVar1);
  _objc_release(unaff_x19);
  func_0x0001080d336c();
  func_0x0001080d3364();
  return;
}



/* Entry: 1080d3108; end: 1080d3127;  */

undefined8 FUN_1080d3108(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return 0;
}



/* Entry: 1080d3128; end: 1080d31f7; -[SCValdiJSRuntimeImpl createScopedJSRuntimeWithScopeName:] */

void FUN_1080d3128(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  func_0x0001080d3374();
  lVar1 = param_1;
  func_0x00010c085ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf57300();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d9428;
  _objc_alloc(PTR_PTR_1126d9428);
  lVar4 = param_1 + 8;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c0207a0(puVar3,param_2,lVar4,lVar1,lVar2);
  func_0x0001080d33b4();
  func_0x0001080d338c();
  func_0x0001080d336c();
  func_0x0001080d3364();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1080d31f8; end: 1080d320b; -[SCValdiJSRuntimeImpl dispose] */

void FUN_1080d31f8(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf6f050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_destroyNativeObjectsManager__1125b95b8);
    return;
  }
  return;
}



/* Entry: 1080d320c; end: 1080d3257; -[SCValdiJSRuntimeImpl dispatchInJsThread:] */

void FUN_1080d320c(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_1080d3334();
  lVar1 = unaff_x20 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf85180();
  func_0x0001080d3364();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1080d3258; end: 1080d32a3; -[SCValdiJSRuntimeImpl dispatchInJsThreadSyncWithBlock:] */

void FUN_1080d3258(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_1080d3334();
  lVar1 = unaff_x20 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf85180();
  func_0x0001080d3364();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1080d32a4; end: 1080d3333; -[SCValdiJSRuntimeImpl .cxx_destruct] */

void FUN_1080d32a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1080d3334; end: 1080d33cb;  */

void FUN_1080d3334(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 1080d33cc; end: 1080d3437; -[SCValdiJSWorker initWithWorkerRuntime:] */

undefined1 * FUN_1080d33cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 auStack_30 [2];
  
  puVar1 = auStack_30;
  func_0x0001080d3b38();
  func_0x0001080d3b98();
  auStack_30[0] = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001080d3b7c();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  func_0x0001080d3b08();
  return (undefined1 *)puVar1;
}



/* Entry: 1080d3438; end: 1080d34c7; -[SCValdiJSWorker initWithWorkerRuntime:nativeObjectsManager:] */

undefined1 * FUN_1080d3438(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  
  puVar1 = &stack0xffffffffffffffc0;
  func_0x0001080d3af4();
  func_0x0001080d3b74();
  func_0x0001080d3b98();
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001080d3b7c();
    uVar2 = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar1 + 8) = unaff_x19;
    _objc_release(uVar2);
    func_0x0001080d3b74();
    uVar2 = *(undefined8 *)(puVar1 + 0x10);
    *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
    _objc_release(uVar2);
  }
  func_0x0001080d3b18();
  func_0x0001080d3b08();
  return puVar1;
}



/* Entry: 1080d34c8; end: 1080d352f; -[SCValdiJSWorker dealloc] */

void FUN_1080d34c8(long param_1)

{
  long alStack_30 [2];
  
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010bf6f040(*(undefined8 *)(param_1 + 8));
  }
  func_0x0001080d3b98();
  alStack_30[0] = param_1;
  _objc_msgSendSuper2(alStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1080d3530; end: 1080d356b; -[SCValdiJSWorker cppRuntime] */

void FUN_1080d3530(undefined8 param_1,long param_2)

{
  undefined1 auStack_30 [16];
  
  func_0x00010b97011c(auStack_30,*(undefined8 *)(param_2 + 8));
  func_0x0001080d2edc(param_1,auStack_30);
  func_0x0001080d32dc(auStack_30);
  return;
}



/* Entry: 1080d356c; end: 1080d3593; -[SCValdiJSWorker pushModuleAtPath:reportingErrorOnMarshaller:] */

long FUN_1080d356c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11c1e0(uVar1,param_2,*(undefined8 *)(param_1 + 0x10),param_3,param_4);
  return (long)(int)uVar1;
}



/* Entry: 1080d3594; end: 1080d35e3; -[SCValdiJSWorker pushModuleAthPath:inMarshaller:] */

undefined8 FUN_1080d3594(void)

{
  undefined8 unaff_x21;
  
  func_0x0001080d3af4();
  func_0x00010c11c1a0();
  func_0x00010b97f3b0();
  func_0x0001080d3b08();
  return unaff_x21;
}



/* Entry: 1080d35e4; end: 1080d35eb; -[SCValdiJSWorker preloadModuleAtPath:maxDepth:] */

void FUN_1080d35e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1088f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_preloadModule_maxDepth__11261fc58);
  return;
}



/* Entry: 1080d35ec; end: 1080d35f3; -[SCValdiJSWorker preloadModulesAtPaths:maxDepth:] */

void FUN_1080d35ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c108910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_preloadModules_maxDepth__11261fc60);
  return;
}



/* Entry: 1080d35f4; end: 1080d366f; -[SCValdiJSWorker warmUpValueMarshallerForObject:] */

void FUN_1080d35f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  func_0x0001080d3b38();
  func_0x00010bf53a20(alStack_30,param_1);
  if (alStack_30[0] != 0) {
    func_0x00010b980484(auStack_40,param_3);
    func_0x00010b8f3e44(alStack_30[0],auStack_40);
    func_0x0001080d3b84();
  }
  func_0x0001080d3308(alStack_30);
  func_0x0001080d3b08();
  return;
}



/* Entry: 1080d3670; end: 1080d3683; -[SCValdiJSWorker addHotReloadObserver:forModulePath:] */

void FUN_1080d3670(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_addModuleUnloadObserver_observer_11259c120,param_4,
             param_3);
  return;
}



/* Entry: 1080d3684; end: 1080d375b; -[SCValdiJSWorker addHotReloadObserverWithBlock:forModulePath:] */

void FUN_1080d3684(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 unaff_x19;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  
  func_0x0001080d3af4();
  func_0x0001080d3b74();
  puVar1 = PTR_PTR_1126b6d48;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1080d375c;
  puStack_40 = &UNK_110a1ee40;
  func_0x0001080d3b7c();
  func_0x00010bfbc0a0(puVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef91a0();
  _objc_release(puVar1);
  _objc_release(unaff_x19);
  func_0x0001080d3b18();
  func_0x0001080d3b08();
  return;
}



/* Entry: 1080d375c; end: 1080d377b;  */

undefined8 FUN_1080d375c(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return 0;
}



/* Entry: 1080d377c; end: 1080d3887; -[SCValdiJSWorker dispatchInJsThread:] */

void FUN_1080d377c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 auStack_78 [2];
  long alStack_68 [2];
  code *pcStack_58;
  undefined1 auStack_50 [40];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf51e00(param_3);
  func_0x00010b980484(alStack_68);
  func_0x0001080d3b18();
  func_0x00010bf53a20(auStack_78,param_1);
  uStack_80 = 0;
  func_0x00010b9a8f04(auStack_90,alStack_68);
  pcStack_58 = FUN_1080d3a38;
  FUN_1080d3a78(auStack_50,auStack_90);
  puVar2 = &uStack_80;
  FUN_1080d3888(auStack_78[0],puVar2,&pcStack_58);
  func_0x0001080d3b40();
  func_0x0001080d3b84();
  func_0x000105276914(uStack_80);
  func_0x0001080d3308(auStack_78);
  plVar1 = alStack_68;
  func_0x00010b9a8d98();
  func_0x0001080d3b50();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080d3b40();
  func_0x0001080d3b84();
  func_0x000105276914(uStack_80);
  func_0x0001080d3308(auStack_78);
  func_0x00010b9a8d98(alStack_68);
  __Unwind_Resume();
  uVar3 = *puVar2;
  *puVar2 = 0;
  (**(code **)(*plVar1 + 0x20))();
  func_0x000105276914(uVar3);
  return;
}



/* Entry: 1080d3888; end: 1080d38e3;  */

void FUN_1080d3888(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uStack_28;
  
  uStack_28 = *param_2;
  *param_2 = 0;
  (**(code **)(*param_1 + 0x20))(param_1,&uStack_28,0,0,param_3);
  func_0x000105276914(uStack_28);
  return;
}



/* Entry: 1080d38e4; end: 1080d393b; -[SCValdiJSWorker createScopedJSRuntimeWithScopeName:] */

void FUN_1080d38e4(long param_1)

{
  func_0x00010bf57300(*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  _objc_alloc(PTR_PTR_1126d9430);
  func_0x00010c063480();
  func_0x0001080d3ae8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1080d393c; end: 1080d394f; -[SCValdiJSWorker dispose] */

void FUN_1080d393c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf6f050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_destroyNativeObjectsManager__1125b95b8);
    return;
  }
  return;
}



/* Entry: 1080d3950; end: 1080d3a07; -[SCValdiJSWorker dispatchInJsThreadSyncWithBlock:] */

/* WARNING: Type propagation algorithm not settling */

void FUN_1080d3950(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 auStack_70 [2];
  long alStack_60 [2];
  undefined **ppuStack_50;
  long *plStack_48;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001080d3b38();
  alStack_60[0] = param_3;
  func_0x00010bf53a20(auStack_70,param_1);
  alStack_60[1] = 0x1080d3acc;
  ppuStack_50 = &PTR_DAT_110a1eea0;
  plStack_48 = alStack_60;
  func_0x00010b8f1dfc(auStack_70[0],alStack_60 + 1);
  (*(code *)*ppuStack_50)(&ppuStack_50);
  func_0x0001080d3308(auStack_70);
  lVar1 = alStack_60[0];
  _objc_release();
  func_0x0001080d3b50();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080d3b08();
  func_0x0001080d3b10();
  _objc_storeStrong(lVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar1 + 8,0);
  return;
}



/* Entry: 1080d3a08; end: 1080d3a37; -[SCValdiJSWorker .cxx_destruct] */

void FUN_1080d3a08(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1080d3a38; end: 1080d3a77;  */

void FUN_1080d3a38(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x10;
  func_0x00010b980ac4();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_2 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1080d3a78; end: 1080d3aa7;  */

undefined8 * FUN_1080d3a78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a1ee80;
  func_0x00010b9a8fa8(param_1 + 1);
  return param_1;
}



/* Entry: 1080d3aa8; end: 1080d3ba3;  */

long * FUN_1080d3aa8(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  
  func_0x00010b9abca8();
  if (((bool)in_ZR) && (plVar1 = *(long **)(param_1 + 8), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x18))();
  }
  return (long *)(param_1 + 8);
}



/* Entry: 1080d3ba4; end: 1080d3c17; -[SCValdiFontDataProviderImpl initWithRuntime:] */

undefined8 * FUN_1080d3ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fc6e0;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1080d5a60(auStack_40,param_3);
    FUN_1080d3c18(puVar1 + 1,auStack_40);
    func_0x0001080d5ab0(auStack_40);
  }
  return puVar1;
}



/* Entry: 1080d3c18; end: 1080d3c53;  */

undefined8 * FUN_1080d3c18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x0001080d5ab0(&uStack_30);
  return param_1;
}



/* Entry: 1080d3c54; end: 1080d3dcb; -[SCValdiFontDataProviderImpl fontDataForModuleName:fontPath:] */

void FUN_1080d3c54(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  long lVar2;
  long *extraout_x8;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  long alStack_68 [2];
  long lStack_58;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  func_0x0001080d5d1c();
  func_0x0001080d5d94();
  FUN_1080d3dcc(alStack_68,param_1 + 8);
  if (alStack_68[0] == 0) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(alStack_68[0] + 0x40);
    func_0x0001080d5e18(&lStack_58);
    func_0x00010b93c510(&uStack_70,uVar3,&lStack_58);
    func_0x0001080d5db4();
    uVar3 = uStack_70;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001003ad8f8(auStack_78);
    func_0x00010b92ce64(&lStack_58,uVar3,auStack_78);
    func_0x0001080d5e98();
    func_0x0001080d5d70();
    in_ZR = lStack_58 == 1;
    if ((bool)in_ZR) {
      puVar4 = auStack_50;
      func_0x00010b981730(puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar4 = (undefined1 *)0x0;
    }
    func_0x0001080c5c8c(&lStack_58);
    FUN_1080d5af4(uStack_70);
  }
  func_0x0001080d2668(alStack_68);
  func_0x0001080d5d60();
  func_0x0001080d5d50();
  func_0x0001080d5d08(uStack_38);
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  func_0x0001080c5c8c(&lStack_58);
  FUN_1080d5af4(uStack_70);
  plVar1 = alStack_68;
  func_0x0001080d2668();
  func_0x0001080d5d60();
  func_0x0001080d5d50();
  func_0x0001080d5ea0();
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  lVar2 = plVar1[1];
  if (lVar2 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    extraout_x8[1] = lVar2;
    if (lVar2 != 0) {
      *extraout_x8 = *plVar1;
    }
  }
  return;
}



/* Entry: 1080d3dcc; end: 1080d3e07;  */

void FUN_1080d3dcc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 1080d3e08; end: 1080d3e0f; -[SCValdiFontDataProviderImpl .cxx_destruct] */

void FUN_1080d3e08(long param_1)

{
  param_1 = param_1 + 8;
  func_0x0001080d5e80();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 1080d3e10; end: 1080d3e17; -[SCValdiFontDataProviderImpl .cxx_construct] */

void FUN_1080d3e10(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 1080d3e18; end: 1080d4093; -[SCValdiRuntime initWithCppInstance:viewManagerContext:runtimeManager:fontManager:] */

undefined8 *
FUN_1080d3e18(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_5);
  func_0x0001080d5d94();
  puStack_68 = PTR_PTR_1126fc6e8;
  puVar6 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar6,PTR_s_init_1125d9248);
  if (puVar6 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x28;
    __Znwm();
    plVar13 = puVar7 + 1;
    *plVar13 = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_DAT_110a1ef10;
    puVar12 = puVar7 + 3;
    *puVar12 = &PTR_FUN_110a1dbd0;
    puVar7[4] = 0;
    puStack_80 = puVar12;
    puStack_78 = puVar7;
    FUN_1080c31c8(puVar12,puVar6);
    plVar1 = puVar6 + 1;
    if (plVar1 != param_3) {
      lVar8 = *plVar1;
      lVar11 = *param_3;
      if ((lVar11 != 0) && (*(long *)(lVar11 + 0x10) != 0)) {
        plVar2 = (long *)(*(long *)(lVar11 + 0x10) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *plVar1 = lVar11;
      func_0x000104c62570(lVar8);
    }
    lVar8 = *plVar1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = *plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puStack_90 = puVar12;
    puStack_88 = puVar7;
    func_0x00010b942d20(lVar8 + 400,&puStack_90);
    func_0x0001080d5b74(&puStack_90);
    FUN_1080d4094(puVar6 + 2,param_4);
    _objc_storeWeak(puVar6 + 3,param_5);
    func_0x0001080d5d94();
    uVar9 = puVar6[7];
    puVar6[7] = param_6;
    _objc_release(uVar9);
    puVar10 = PTR_PTR_1126d9438;
    _objc_alloc();
    func_0x00010c040b80();
    uVar9 = puVar6[8];
    puVar6[8] = puVar10;
    func_0x0001080d5e38(uVar9);
    func_0x00010bef85e0(puVar6[7]);
    puVar10 = PTR_PTR_1126d9440;
    _objc_alloc();
    func_0x00010c020760();
    uVar9 = puVar6[10];
    puVar6[10] = puVar10;
    func_0x0001080d5e38(uVar9);
    puVar10 = PTR_PTR_1126d9448;
    _objc_opt_new();
    uVar9 = puVar6[5];
    puVar6[5] = puVar10;
    func_0x0001080d5e38(uVar9);
    _objc_alloc(PTR_PTR_1126d9450);
    func_0x00010c013b60();
    func_0x00010c126b00(puVar6);
    func_0x0001080d5dec();
    func_0x00010c126b00(puVar6);
    func_0x00010c126b00(puVar6);
    puVar10 = PTR_PTR_1126d9428;
    _objc_alloc();
    func_0x00010c020780();
    uVar9 = puVar6[4];
    puVar6[4] = puVar10;
    func_0x0001080d5e38(uVar9);
    lVar8 = puVar6[2];
    uVar5 = (undefined1)*(undefined8 *)(puVar6[1] + 0x40);
    func_0x00010b93d86c();
    *(undefined1 *)(lVar8 + 0x130) = uVar5;
    func_0x0001080d5b50(&puStack_80);
  }
  func_0x0001080d5d60();
  func_0x0001080d5d50();
  return puVar6;
}



/* Entry: 1080d4094; end: 1080d40df;  */

long * FUN_1080d4094(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 != param_2) {
    lVar4 = *param_1;
    lVar5 = *param_2;
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *param_1 = lVar5;
    FUN_1080d5b98(lVar4);
  }
  return param_1;
}



/* Entry: 1080d40e0; end: 1080d4157; -[SCValdiRuntime dealloc] */

void FUN_1080d40e0(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c12c720(*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x40));
  puStack_28 = PTR_PTR_1126fc6e8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1080d4158; end: 1080d415f; -[SCValdiRuntime applicationWillTerminate] */

void FUN_1080d4158(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf966f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_ensureDeviceModuleIsReadyForCont_1125c3360);
  return;
}



/* Entry: 1080d4160; end: 1080d4167; -[SCValdiRuntime emitInitMetrics] */

void FUN_1080d4160(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  int extraout_w10;
  long *plVar4;
  undefined *puStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar3 = lVar1;
  func_0x00010b944c94();
  plVar4 = *(long **)(*(long *)(lVar3 + 0x40) + 0x50);
  uStack_38 = extraout_x8;
  if (plVar4 != (long *)0x0) {
    do {
      func_0x00010b944dac();
    } while (extraout_w10 != 0);
    puVar2 = *(undefined **)(lVar1 + 0x28);
    if (puVar2 != (undefined *)0x0) {
      func_0x000107c28148();
      puStack_68 = puVar2;
      func_0x00010b944edc(*(undefined8 *)(*plVar4 + 0xa0));
    }
  }
  puStack_68 = &UNK_10b944504;
  ppuStack_60 = &PTR_DAT_110d782a8;
  lStack_58 = lVar1;
  func_0x00010b9421c8(lVar1,&puStack_68);
  func_0x00010b944ce0(ppuStack_60);
  func_0x000104bd474c();
  func_0x00010b944c58(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b8c2a68();
    lVar3 = 0;
    if (plVar4 != (long *)0x0) {
      lVar3 = plVar4[0x23];
      func_0x00010b8c3698();
    }
    *extraout_x8_00 = lVar3;
    return;
  }
  return;
}



/* Entry: 1080d4168; end: 1080d418f; -[SCValdiRuntime loadViewWithComponentPath:owner:error:] */

void FUN_1080d4168(void)

{
  func_0x00010c09c7c0();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080d4190; end: 1080d422f; -[SCValdiRuntime loadViewWithComponentPath:owner:viewModel:componentContext:error:] */

void FUN_1080d4190(void)

{
  undefined *puVar1;
  undefined8 in_x5;
  
  func_0x0001080d5dd4();
  func_0x0001080d5d78();
  func_0x0001080d5d94();
  func_0x0001080d5ea8();
  _objc_retain(in_x5);
  puVar1 = PTR_PTR_1126afcc8;
  _objc_alloc(PTR_PTR_1126afcc8);
  func_0x00010c000640();
  func_0x0001080d5d70();
  func_0x0001080d5d58();
  func_0x0001080d5d60();
  func_0x0001080d5d50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1080d4230; end: 1080d42cb; -[SCValdiRuntime createContextWithViewClass:viewModel:componentContext:] */

void FUN_1080d4230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_4);
  func_0x0001080d5d94();
  func_0x00010bf44480(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55720(param_1,param_2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080d5d58();
  func_0x0001080d5d60();
  func_0x0001080d5d50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1080d42cc; end: 1080d42f3; -[SCValdiRuntime flushPendingMainThreadLoadOperations] */

void FUN_1080d42cc(long param_1)

{
  func_0x00010bf966e0(*(undefined8 *)(param_1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bf96630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_ensureApplicationModuleIsReadyFo_1125c3330);
  return;
}



/* Entry: 1080d42f4; end: 1080d433b; -[SCValdiRuntime flushPendingMainThreadLoadOperationsIfNeeded] */

void FUN_1080d42f4(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  if (((int)puVar1 != 0) && ((*(byte *)(param_1 + 0x30) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bfb3110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_flushPendingMainThreadLoadOperat_1125ca5e8)
    ;
    return;
  }
  return;
}



/* Entry: 1080d433c; end: 1080d4477; -[SCValdiRuntime doCreateContextWithComponentPath:viewModel:componentContext:] */

void FUN_1080d433c(long param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  func_0x0001080d5dd4();
  func_0x0001080d5d78();
  func_0x0001080d5d94();
  func_0x0001080d5ea8();
  func_0x00010bfb3100(param_1);
  func_0x00010b981938(auStack_50);
  func_0x00010b981938(auStack_60);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x0001080d5e18(&uStack_70);
  func_0x00010b94185c(&uStack_68,uVar1,param_1 + 0x10,&uStack_70,auStack_50,auStack_60,1);
  func_0x0001003a8cb8(uStack_70);
  uVar1 = uStack_68;
  FUN_1080dd5d4(uStack_68);
  _objc_retainAutoreleasedReturnValue();
  if (unaff_x20 != 0) {
    func_0x00010c2228e0(uVar1);
  }
  if ((*(byte *)(param_1 + 0x49) & 1) == 0) {
    func_0x00010c21d780(uVar1);
  }
  func_0x00010b8c190c(uStack_68);
  func_0x000105276914(uStack_68);
  FUN_1080d26e4(auStack_60);
  func_0x0001080d5e60();
  func_0x0001080d5d58();
  func_0x0001080d5d60();
  func_0x0001080d5d50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1080d4478; end: 1080d45d3; -[SCValdiRuntime doCreateContextWithComponentPath:cppMarshaller:] */

void FUN_1080d4478(void)

{
  undefined8 in_x3;
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined8 auStack_60 [2];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  func_0x0001080d5d34();
  func_0x00010bfb3100();
  func_0x00010b9a10dc(auStack_50,in_x3,0);
  func_0x00010b981a84(auStack_40,auStack_50);
  func_0x0001080d5e68();
  func_0x00010b9a10dc(auStack_60,in_x3,1);
  func_0x00010b981a84(auStack_50,auStack_60);
  func_0x00010b9a8d98(auStack_60);
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  func_0x0001080d5e18(auStack_68);
  func_0x00010b94185c(auStack_60,uVar1,unaff_x20 + 0x10,auStack_68,auStack_40,auStack_50,1);
  func_0x0001080d5e98();
  uVar1 = auStack_60[0];
  FUN_1080dd5d4(auStack_60[0]);
  _objc_retainAutoreleasedReturnValue();
  if ((*(byte *)(unaff_x20 + 0x49) & 1) == 0) {
    func_0x00010c21d780(uVar1);
  }
  func_0x00010b8c190c(auStack_60[0]);
  func_0x000105276914(auStack_60[0]);
  func_0x0001080d5e60();
  FUN_1080d26e4(auStack_40);
  func_0x0001080d5d50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1080d45d4; end: 1080d461f; -[SCValdiRuntime createContextWithComponentPath:viewModel:componentContext:] */

void FUN_1080d45d4(void)

{
  func_0x00010bf873a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_alloc(PTR_PTR_1126d9458);
  func_0x00010c004140();
  func_0x0001080d5d44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080d4620; end: 1080d470b; -[SCValdiRuntime inflateView:owner:viewModel:componentContext:] */

void FUN_1080d4620(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_x5;
  undefined8 unaff_x19;
  
  func_0x0001080d5dd4();
  func_0x0001080d5d78();
  func_0x0001080d5d94();
  func_0x0001080d5ea8();
  _objc_retain(in_x5);
  func_0x00010bf44480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf873a0(param_1,param_2,unaff_x19);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(unaff_x19);
  func_0x00010c1ee6e0(param_1,param_2,1);
  func_0x00010c1d7bc0(param_1);
  func_0x00010c1ee6c0(param_1);
  func_0x0001080d5dec();
  func_0x0001080d5d70();
  func_0x0001080d5d58();
  func_0x0001080d5d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080d470c; end: 1080d47c7; -[SCValdiRuntime inflateView:owner:cppMarshaller:] */

void FUN_1080d470c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x19;
  
  func_0x0001080d5dd4();
  func_0x0001080d5d78();
  func_0x0001080d5d94();
  func_0x00010bf44480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf87380(param_1,param_2,unaff_x19);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080d5dec();
  func_0x00010c1ee6e0(param_1,param_2,1);
  func_0x00010c1d7bc0(param_1);
  func_0x00010c1ee6c0(param_1);
  func_0x0001080d5d58();
  func_0x0001080d5d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080d47c8; end: 1080d47cf; -[SCValdiRuntime cppInstance] */

long FUN_1080d47c8(long param_1)

{
  return param_1 + 8;
}



/* Entry: 1080d47d0; end: 1080d47fb; -[SCValdiRuntime jsRuntime] */

void FUN_1080d47d0(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfb3120();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001080d5ed0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1080d47fc; end: 1080d486b; -[SCValdiRuntime getJsRuntime] */

void FUN_1080d47fc(long param_1)

{
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  FUN_1080d486c(&lStack_40,*(undefined8 *)(*(long *)(param_1 + 8) + 0x148));
  lStack_30 = 0;
  if (lStack_40 != 0) {
    lStack_30 = lStack_40 + 0x20;
  }
  uStack_28 = uStack_38;
  lStack_40 = 0;
  uStack_38 = 0;
  func_0x00010b97016c(&lStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080d5ee4();
  func_0x0001080d3308(&lStack_40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080d486c; end: 1080d48f3;  */

void FUN_1080d486c(long *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long lStack_30;
  long lStack_28;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else if (*(long *)(param_2 + 8) == 0) {
    lVar1 = *(long *)(param_2 + 0x10);
    *param_1 = param_2;
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      do {
        func_0x0001080d5e20();
      } while (extraout_w10_00 != 0);
    }
  }
  else {
    func_0x0001003ae9f0(&lStack_30);
    if (lStack_30 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = param_2;
      param_1[1] = lStack_28;
      if (lStack_28 != 0) {
        do {
          func_0x0001080d5e20();
        } while (extraout_w10 != 0);
      }
    }
    func_0x0001003a824c(&lStack_30);
  }
  return;
}



/* Entry: 1080d48f4; end: 1080d498b; -[SCValdiRuntime getJSRuntimeWithBlock:] */

void FUN_1080d48f4(void)

{
  undefined8 unaff_x19;
  
  func_0x0001080d5d34();
  func_0x00010bfb3120();
  func_0x0001080d5ed0();
  func_0x00010bf85180();
  _objc_release(unaff_x19);
  func_0x0001080d5d50();
  return;
}



/* Entry: 1080d498c; end: 1080d499f;  */

void FUN_1080d498c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080d499c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
  return;
}



/* Entry: 1080d49a0; end: 1080d4a0f; -[SCValdiRuntime executeMainThreadBatch:] */

void FUN_1080d49a0(void)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x0001080d5d34();
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 8) + 0x110);
  func_0x00010b94bca0(uVar1);
  uStack_38 = uVar1;
  func_0x00010bf85180();
  func_0x00010b94bed0(&uStack_38);
  func_0x0001080d5d50();
  return;
}



/* Entry: 1080d4a10; end: 1080d4b17; -[SCValdiRuntime loadModule:completion:] */

void FUN_1080d4a10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 uVar4;
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 auStack_78 [8];
  long lStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  undefined8 uStack_38;
  
  func_0x0001080d5d1c();
  _objc_retainBlock(param_4);
  func_0x00010b981514(&lStack_70);
  func_0x0001080d5d58();
  func_0x0001080d5e18(auStack_78);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x40);
  if ((lStack_70 != 0) && (*(long *)(lStack_70 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lStack_70 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pcStack_68 = FUN_1080d5bbc;
  ppuStack_60 = &PTR_FUN_110a1ef50;
  lStack_58 = lStack_70;
  func_0x00010b93d234(uVar4,auStack_78,0,&pcStack_68);
  (*(code *)*ppuStack_60)(&ppuStack_60);
  func_0x0001080d5e98();
  func_0x000104bddf04();
  func_0x0001080d5d50();
  func_0x0001080d5d08(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104bddf04();
  func_0x0001080d5d50();
  func_0x0001080d5d68();
  pcStack_88 = FUN_1080d4b18;
  uStack_98 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x00010b941d24(auStack_c8,*(undefined8 *)(lStack_70 + 8),1,0,0);
  func_0x00010b94a8dc(auStack_a8,auStack_c8);
  FUN_1080d56d0(auStack_c8);
  func_0x00010b98101c(auStack_a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080d5ed8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}


