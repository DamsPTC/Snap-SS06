/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10620c904; end: 10620c95b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10620c904(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_1127434c8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c152300();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10620c95c; end: 10620ca03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10620c95c(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
  if (param_1 != 0) {
    _objc_retain(param_2);
    _objc_opt_class(puVar2);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    uVar1 = param_2;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_2);
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127434e8);
    *(ulong *)(param_1 + _DAT_1127434e8) = uVar1;
    _objc_release(uVar4);
    func_0x00010be3cd40(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10620ca04; end: 10620caf3;  */

void FUN_10620ca04(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    func_0x00010bf82f80(param_1);
    _objc_release(param_2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 10620caf4; end: 10620cb0f;  */

void FUN_10620caf4(void)

{
  _objc_opt_new(PTR_PTR_1126ae820);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10620cb10; end: 10620cb67; -[SCCameraToGallerySwipeTransitionCoordinator _registerBackupService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10620cb10(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + _DAT_1127434ec) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_1127434ec) = 1;
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127434cc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c127240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10620cb68; end: 10620cb87; -[SCCameraToGallerySwipeTransitionCoordinator parentViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10620cb68(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127434bc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10620cb88; end: 10620cb9b; -[SCCameraToGallerySwipeTransitionCoordinator setParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10620cb88(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127434bc,param_3);
  return;
}



/* Entry: 10620cb9c; end: 10620cbab; -[SCCameraToGallerySwipeTransitionCoordinator didInitializeCloudSync] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10620cb9c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127434ec);
}



/* Entry: 10620cbac; end: 10620cbbb; -[SCCameraToGallerySwipeTransitionCoordinator setDidInitializeCloudSync:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10620cbac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127434ec) = param_3;
  return;
}



/* Entry: 10620cbbc; end: 10620cc8f; -[SCCameraToGallerySwipeTransitionCoordinator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10620cbbc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127434bc);
  _objc_storeStrong(param_1 + _DAT_1127434e8,0);
  _objc_storeStrong(param_1 + _DAT_1127434e4,0);
  _objc_storeStrong(param_1 + _DAT_1127434e0,0);
  _objc_storeStrong(param_1 + _DAT_1127434dc,0);
  _objc_storeStrong(param_1 + _DAT_1127434d8,0);
  _objc_storeStrong(param_1 + _DAT_1127434d4,0);
  _objc_storeStrong(param_1 + _DAT_1127434d0,0);
  _objc_storeStrong(param_1 + _DAT_1127434cc,0);
  _objc_storeStrong(param_1 + _DAT_1127434c4,0);
  _objc_destroyWeak(param_1 + _DAT_1127434c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127434c8);
  return;
}



/* Entry: 10620cc90; end: 10620cd1f; -[SCCameraToGallerySwipeTransitionCoordinatorFactoryImpl .cxx_destruct] */

void FUN_10620cc90(long param_1)

{
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



/* Entry: 10620cd20; end: 10620cdbb; -[SCCameraToGallerySwipeTransitionCoordinatorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10620cd20(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274353c);
  _objc_storeStrong(param_1 + _DAT_112743538,0);
  _objc_destroyWeak(param_1 + _DAT_112743534);
  _objc_destroyWeak(param_1 + _DAT_112743530);
  _objc_destroyWeak(param_1 + _DAT_11274352c);
  _objc_destroyWeak(param_1 + _DAT_112743528);
  _objc_destroyWeak(param_1 + _DAT_112743524);
  _objc_destroyWeak(param_1 + _DAT_112743520);
  _objc_destroyWeak(param_1 + _DAT_11274351c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112743518);
  return;
}



/* Entry: 10620cdbc; end: 10620cf13; -[SCGalleryNavigationController endAppearanceTransition] */

void FUN_10620cdbc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f0730;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_endAppearanceTransition_1125c2a10);
  uVar1 = param_1;
  func_0x00010c06d1a0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c10f380();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    if (uVar2 != 0) {
      uVar1 = param_1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010c10f380();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf4b2a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if (uVar2 != uVar4) {
        uVar1 = param_1;
        func_0x00010c10f380(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf4b2a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c29bf00(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(uVar2);
        _objc_release(param_1);
        _objc_release(uVar2);
        _objc_release(uVar1);
      }
    }
  }
  return;
}



/* Entry: 10620cf14; end: 10620cf87; -[SCGalleryNavigationController pushViewController:animated:] */

void FUN_10620cf14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  func_0x000108df596c(param_3,param_4);
  puStack_38 = PTR_PTR_1126f0730;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_pushViewController_animated__112624b68,param_3,param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10620cf88; end: 10620cfc3; -[SCGalleryNavigationController popViewControllerAnimated:] */

void FUN_10620cf88(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f0730;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_popViewControllerAnimated__11261e8a0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10620cfc4; end: 10620cfff; -[SCGalleryNavigationController popToViewController:animated:] */

void FUN_10620cfc4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f0730;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_popToViewController_animated__11261e890);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10620d000; end: 10620d03b; -[SCGalleryNavigationController popToRootViewControllerAnimated:] */

void FUN_10620d000(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f0730;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_popToRootViewControllerAnimated__11261e880);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10620d03c; end: 10620d097; -[SCGalleryNavigationController setViewControllers:] */

void FUN_10620d03c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x00010c1499c0();
  _objc_retainAutoreleasedReturnValue();
  puStack_28 = PTR_PTR_1126f0730;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setViewControllers__112666350,uVar1);
  _objc_release(uVar1);
  return;
}



/* Entry: 10620d098; end: 10620d103; -[SCGalleryNavigationController setViewControllers:animated:] */

void FUN_10620d098(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  func_0x00010c1499c0();
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f0730;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setViewControllers_animated__112666358,uVar1,param_4);
  _objc_release(uVar1);
  return;
}



/* Entry: 10620d104; end: 10620d283; -[SCGalleryNavigationController sanitizeViewControllersForSetting:] */

undefined * FUN_10620d104(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  _objc_retain(param_3);
  puVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar3 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar8 = *(undefined8 *)((long)puVar9 * 8);
      func_0x00010c0f3ca0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar8;
      func_0x00010c071ae0();
      _objc_release(uVar8);
      if ((int)uVar4 != 0) {
        func_0x00010befa120(puVar7);
      }
      puVar9 = puVar9 + 1;
    } while (puVar3 != puVar9);
    puVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  puVar7 = (undefined *)0x2;
  puVar3 = param_3;
  _objc_retain();
  iVar2 = (int)puVar3;
  if (lRam00000001137fbfe8 != -1) {
    iVar2 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    puVar7 = (undefined *)0x2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar2 != 0) {
      puVar3 = param_3;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar3;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar9;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar3);
      if (puVar5 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar9 = puVar5;
        func_0x00010c0690e0();
      }
      if (puVar9 + -1 < (undefined *)0x4) {
        puVar7 = *(undefined **)(&UNK_10e5f47e8 + (long)(puVar9 + -1) * 8);
      }
      _objc_release(puVar5);
    }
  }
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 10620d284; end: 10620d28b; -[SCGalleryNavigationController supportedInterfaceOrientations] */

undefined8 FUN_10620d284(undefined *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar5 = 2;
  puVar2 = param_1;
  _objc_retain();
  iVar1 = (int)puVar2;
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = param_1;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c252de0();
        _objc_release(puVar2);
      }
      else {
        puVar3 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar3 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar3 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 10620d28c; end: 10620d60b; -[SCMainCameraRealTimeScanEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10620d28c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  uVar17 = *(undefined8 *)(param_1 + _DAT_112743544);
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(puVar1);
  func_0x00010bf9d5c0(uVar17);
  puVar2 = PTR_PTR_1126c8e60;
  _objc_alloc();
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_112743548;
  lVar4 = param_1 + lVar18;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c055720();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c8e68;
  _objc_alloc();
  lVar4 = param_1 + _DAT_112743550;
  _objc_loadWeakRetained();
  lVar19 = (long)_DAT_112743540;
  lVar5 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c11d640();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bf211c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c121bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112743554;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c121c20();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112743558;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c121d20();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar15 = lVar18;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar16 = lVar19;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c041840();
  lVar20 = (long)_DAT_11274355c;
  uVar17 = *(undefined8 *)(param_1 + lVar20);
  *(undefined **)(param_1 + lVar20) = puVar3;
  _objc_release(uVar17);
  _objc_release(lVar16);
  _objc_release(lVar19);
  _objc_release(lVar15);
  _objc_release(lVar18);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010bf17a60(*(undefined8 *)(param_1 + lVar20));
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 10620d60c; end: 10620d66f;  */

void FUN_10620d60c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf2300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10620d670; end: 10620d67b;  */

void FUN_10620d670(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 10620d67c; end: 10620d6d3; -[SCMainCameraRealTimeScanEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10620d67c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf940a0(*(undefined8 *)(param_1 + _DAT_11274355c));
  puStack_28 = PTR_PTR_1126f0738;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10620d6d4; end: 10620d71f; -[SCMainCameraRealTimeScanEntryPoint _createRealTimeScanTriggerPlugInScope:] */

void FUN_10620d6d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c8e70;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c037380();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10620d720; end: 10620d73f; -[SCMainCameraRealTimeScanEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10620d720(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112743560);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10620d740; end: 10620d753; -[SCMainCameraRealTimeScanEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10620d740(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112743560,param_3);
  return;
}



/* Entry: 10620d754; end: 10620d7eb; -[SCMainCameraRealTimeScanEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10620d754(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112743544,0);
  _objc_storeStrong(param_1 + _DAT_11274354c,0);
  _objc_destroyWeak(param_1 + _DAT_112743550);
  _objc_destroyWeak(param_1 + _DAT_112743560);
  _objc_destroyWeak(param_1 + _DAT_112743548);
  _objc_destroyWeak(param_1 + _DAT_112743558);
  _objc_destroyWeak(param_1 + _DAT_112743554);
  _objc_destroyWeak(param_1 + _DAT_112743540);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274355c,0);
  return;
}



/* Entry: 10620d7ec; end: 10620d8c7; -[SCMainCameraRealTimeScanTriggerWorkflow initWithTriggerPlugInFuture:performerProvider:] */

undefined1 *
FUN_10620d7ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f0740;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10620d8c8; end: 10620da1b; -[SCMainCameraRealTimeScanTriggerWorkflow beginWithDataObservable:] */

void FUN_10620d8c8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c8e78;
    _objc_alloc();
    func_0x00010c008a40();
    _objc_initWeak(auStack_48,param_1);
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(puVar2);
    _objc_retain(puVar1);
    func_0x00010c297260(uVar3);
    _objc_retain(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10620da1c; end: 10620dac7;  */

void FUN_10620da1c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_3 == 0) {
      lVar2 = lVar1;
      func_0x00010bdd3120();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 != 0) {
        lVar3 = lVar2;
        func_0x00010c25fd20();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(lVar1 + 0x10);
        *(long *)(lVar1 + 0x10) = lVar3;
        _objc_release(uVar4);
      }
      _objc_release(lVar2);
    }
    else {
      func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10620dac8; end: 10620db6f; -[SCMainCameraRealTimeScanTriggerWorkflow end] */

void FUN_10620dac8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10620db70; end: 10620dbaf;  */

void FUN_10620db70(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x10));
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10620dbb0; end: 10620dd3f; -[SCMainCameraRealTimeScanTriggerWorkflow _beginAnalysisForTriggers:withContext:] */

void FUN_10620dbb0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = param_3;
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar2 = *(undefined8 *)(lVar7 * 8);
      func_0x00010bf19080(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3);
      _objc_release(uVar2);
      lVar7 = lVar7 + 1;
    } while (lVar4 != lVar7);
    lVar4 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar5 = PTR_PTR_1126ae6b8;
  func_0x00010c0cab40(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 10620dd40; end: 10620dd87; -[SCMainCameraRealTimeScanTriggerWorkflow .cxx_destruct] */

void FUN_10620dd40(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10620dd88; end: 10620e007; -[SCMainCameraRealTimeScanWorkflow initWithScanResultsNotificationUIScopeExposer:scanResultsNotificationUIScopeServices:queryObservable:activationSupportStateUpdateObservable:realTimeScanConfiguration:realTimeScanLogger:performerProvider:triggerWorkflow:delegate:] */

undefined8 *
FUN_10620dd88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f0748;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 5,param_11);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[9];
    puVar1[9] = uVar5;
    _objc_release(uVar4);
    _objc_release();
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    _objc_release(uVar5);
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
  return puVar1;
}



/* Entry: 10620e008; end: 10620e19f; -[SCMainCameraRealTimeScanWorkflow begin] */

void FUN_10620e008(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  *(undefined1 *)(param_1 + 0x88) = 1;
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0e0ea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10620e1a0;
  puStack_68 = &UNK_110916698;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e0ea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 10620e1a0; end: 10620e22f;  */

void FUN_10620e1a0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff820();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10620e230; end: 10620e2bf; -[SCMainCameraRealTimeScanWorkflow endWithCompletion:] */

void FUN_10620e230(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10620e2c0;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10620e2c0; end: 10620e2cb;  */

void FUN_10620e2c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be09fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__endWithCompletion__112560188,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10620e2cc; end: 10620e383; -[SCMainCameraRealTimeScanWorkflow end] */

void FUN_10620e2cc(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010bf940a0(*(undefined8 *)(param_1 + 0x50));
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x78));
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10620e384; end: 10620e3bf;  */

void FUN_10620e384(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(long *)(param_1 + 0x60) != 0)) {
    *(undefined8 *)(param_1 + 0x60) = 0;
    _objc_release();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10620e3c0; end: 10620e41b; -[SCMainCameraRealTimeScanWorkflow _endWithCompletion:] */

void FUN_10620e3c0(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x60) != 0) {
    *(undefined8 *)(param_1 + 0x60) = 0;
    _objc_release();
    func_0x00010bf940a0(*(undefined8 *)(param_1 + 0x50));
  }
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x78));
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10620e41c; end: 10620e627; -[SCMainCameraRealTimeScanWorkflow _presentRealTimeScanResult] */

void FUN_10620e41c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x3032000000;
  pcStack_118 = FUN_10620e628;
  uStack_110 = 0x10620e638;
  lStack_108 = 0;
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe81c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar4 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar2);
      }
      func_0x00010c0bcec0(*(undefined8 *)(lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar1 != lVar4);
    lVar1 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  func_0x00010be0d020(param_1);
  __Block_object_dispose(&uStack_130,8);
  lVar1 = lStack_108;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = 8;
  __Block_object_dispose(&uStack_130);
  __Unwind_Resume();
  *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = 0;
  return;
}



/* Entry: 10620e628; end: 10620e63f;  */

void FUN_10620e628(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10620e640; end: 10620e683;  */

void FUN_10620e640(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c48e8;
  func_0x00010c244f40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10620e684; end: 10620e717;  */

void FUN_10620e684(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c265b00();
  puVar2 = PTR_PTR_1126c48e8;
  if (lVar1 == 0x10) {
    lVar1 = param_2;
    func_0x00010c0f6420(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11cda0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined **)(lVar4 + 0x28) = puVar2;
    _objc_release(uVar3);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10620e718; end: 10620e853; -[SCMainCameraRealTimeScanWorkflow _exposeNotificationUIScopeWithMetadata:] */

void FUN_10620e718(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfe7e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_initWeak(auStack_38,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10620e854;
    puStack_58 = &UNK_110848218;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(uVar3);
    uStack_50 = uVar3;
    _objc_retain(param_3);
    uStack_48 = param_3;
    func_0x0001000d76cc("APPSTORE",&puStack_70);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10620e854; end: 10620e8ef;  */

void FUN_10620e854(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 8);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar4);
      uVar3 = *(undefined8 *)(lVar1 + 0x68);
      *(undefined8 *)(lVar1 + 0x68) = uVar4;
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(lVar1 + 0x10);
      func_0x00010bf23400(uVar3,param_2,*(undefined8 *)(param_1 + 0x28),lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620(*(undefined8 *)(lVar1 + 8),param_2,uVar3);
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10620e8f0; end: 10620e983; -[SCMainCameraRealTimeScanWorkflow _didReceiveQuery:] */

void FUN_10620e8f0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c11d4a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c11d4a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    func_0x00010be95420(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10620e984; end: 10620eaab; -[SCMainCameraRealTimeScanWorkflow _didReceiveSupportedStateUpdate:] */

void FUN_10620e984(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  func_0x00010c0be780(param_3);
  if (((*(char *)(param_1 + 0x88) != *(char *)(puStack_38 + 3)) &&
      (*(char *)(param_1 + 0x88) = *(char *)(puStack_38 + 3), (*(byte *)(puStack_38 + 3) & 1) == 0))
     && ((*(byte *)(puStack_58 + 3) & 1) == 0)) {
    func_0x00010be02ec0(param_1);
  }
  __Block_object_dispose(&uStack_60,8);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return;
}



/* Entry: 10620eaac; end: 10620eacf;  */

void FUN_10620eaac(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10620ead0; end: 10620eb3b; -[SCMainCameraRealTimeScanWorkflow notificationDidPresentWithId:resultType:] */

void FUN_10620ead0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c121c80();
  _objc_release(lVar1);
  *(ulong *)(param_1 + 0x70) = (ulong)(param_4 != 1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c121be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10620eb3c; end: 10620eb63; -[SCMainCameraRealTimeScanWorkflow notificationDidTapWithId:resultType:] */

void FUN_10620eb3c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010be577e0(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010be48350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__launchScanIfPossible_11256fa70);
  return;
}



/* Entry: 10620eb64; end: 10620eb6b; -[SCMainCameraRealTimeScanWorkflow notificationDidDismiss] */

void FUN_10620eb64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissNotificationUIIfNecessar_11255e550,0)
  ;
  return;
}



/* Entry: 10620eb6c; end: 10620ec8f; -[SCMainCameraRealTimeScanWorkflow _launchScanIfPossible] */

void FUN_10620eb6c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    lVar10 = *(long *)(param_1 + 0x40);
    _objc_retain(lVar10);
    lVar2 = lVar10;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar10);
        }
        func_0x00010c0d9840(*(undefined8 *)(param_1 + 0xa0));
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      lVar2 = lVar10;
      func_0x00010bf52a60();
    }
    _objc_release(lVar10);
  }
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c121da0();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar7);
  _objc_retain(uVar7);
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  *(undefined8 *)(lVar2 + 0x60) = uVar7;
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  uVar3 = *(undefined8 *)(lVar2 + 0xa0);
  *(undefined **)(lVar2 + 0xa0) = puVar4;
  _objc_release(uVar3);
  _objc_initWeak(auStack_158,lVar2);
  uVar11 = *(undefined8 *)(lVar2 + 0x50);
  uVar3 = uVar7;
  func_0x00010bf63f60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf190c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar11;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_160,auStack_158);
  _objc_retain(uVar7);
  uVar6 = uVar5;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar2 + 0x80);
  *(undefined8 *)(lVar2 + 0x80) = uVar6;
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(uVar11);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_destroyWeak(auStack_160);
  _objc_destroyWeak(auStack_158);
  _objc_release(uVar7);
  return;
}



/* Entry: 10620ec90; end: 10620ee17; -[SCMainCameraRealTimeScanWorkflow _restartTriggerWorkflowWithQueryIfNecessary:] */

void FUN_10620ec90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined **)(param_1 + 0xa0) = puVar2;
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  uVar1 = param_3;
  func_0x00010bf63f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf190c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uVar4 = uVar3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10620ee18; end: 10620ee6b;  */

void FUN_10620ee18(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010becfb40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10620ee6c; end: 10620ef33; -[SCMainCameraRealTimeScanWorkflow _triggerDidReturnScannableData:forQuery:] */

void FUN_10620ee6c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(param_4);
  func_0x00010c11d4a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c11d4a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar1 = uVar4;
  func_0x00010c0720c0(uVar4,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar4);
  if (((int)uVar1 != 0) && (lVar2 = param_3, func_0x00010bf529e0(), lVar2 != 0)) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = param_3;
    _objc_release(uVar3);
    func_0x00010be7dfc0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10620ef34; end: 10620f053; -[SCMainCameraRealTimeScanWorkflow _dismissNotificationUIIfNecessaryWithCompletion:] */

void FUN_10620ef34(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3);
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c12e1c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c2a4ae0(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10620f054; end: 10620f0b3;  */

void FUN_10620f054(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x28;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c121c60();
    _objc_release(lVar2);
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10620f0b4; end: 10620f0ff; -[SCMainCameraRealTimeScanWorkflow _logRealTimeScanDidReceiveBannerActionWithType:] */

void FUN_10620f0b4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c121c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10620f100; end: 10620f107; -[SCMainCameraRealTimeScanWorkflow asynchronousMainThreadPerformer] */

undefined8 FUN_10620f100(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10620f108; end: 10620f137; -[SCMainCameraRealTimeScanWorkflow setAsynchronousMainThreadPerformer:] */

void FUN_10620f108(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10620f138; end: 10620f13f; -[SCMainCameraRealTimeScanWorkflow scannableDataSubject] */

undefined8 FUN_10620f138(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10620f140; end: 10620f16f; -[SCMainCameraRealTimeScanWorkflow setScannableDataSubject:] */

void FUN_10620f140(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10620f170; end: 10620f25b; -[SCMainCameraRealTimeScanWorkflow .cxx_destruct] */

void FUN_10620f170(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10620f25c; end: 10620f2f7; -[SCScanResultsNotificationUIScope initWithNotificationUIWithMetadata:delegate:] */

undefined1 *
FUN_10620f25c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f0750;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10620f2f8; end: 10620f2ff; -[SCScanResultsNotificationUIScope metadata] */

undefined8 FUN_10620f2f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10620f300; end: 10620f317; -[SCScanResultsNotificationUIScope delegate] */

void FUN_10620f300(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10620f318; end: 10620f343; -[SCScanResultsNotificationUIScope .cxx_destruct] */

void FUN_10620f318(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10620f344; end: 10620f3ab; +[SCScanResultsNotificationUIMetadata qrCodeWithUrlString:] */

void FUN_10620f344(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c48e8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10620f3ac; end: 10620f3f3; +[SCScanResultsNotificationUIMetadata snapcode] */

void FUN_10620f3ac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c48e8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10620f3f4; end: 10620f417; -[SCScanResultsNotificationUIMetadata copyWithZone:] */

undefined8 FUN_10620f3f4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10620f418; end: 10620f477; -[SCScanResultsNotificationUIMetadata hash] */

void FUN_10620f418(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126f0758;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10620f478; end: 10620f4bb; -[SCScanResultsNotificationUIMetadata internalInit] */

void FUN_10620f478(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f0758;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10620f4bc; end: 10620f55b; -[SCScanResultsNotificationUIMetadata isEqual:] */

long FUN_10620f4bc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10620f540;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10620f540;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10620f540;
    }
  }
  lVar3 = 1;
LAB_10620f540:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10620f55c; end: 10620f5df; -[SCScanResultsNotificationUIMetadata matchSnapcode:qrCode:] */

void FUN_10620f55c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x10));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10620f5e0; end: 10620f5eb; -[SCScanResultsNotificationUIMetadata .cxx_destruct] */

void FUN_10620f5e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10620f5ec; end: 10620f73b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10620f5ec(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126c8e80;
    _objc_alloc(PTR_PTR_1126c8e80);
    lVar1 = param_1 + _DAT_1127435d4;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_1127435d8;
    _objc_loadWeakRetained(lVar3);
    lVar4 = param_1 + _DAT_1127435dc;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c08ecc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08eca0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_1127435e0;
    _objc_loadWeakRetained(lVar7);
    lVar8 = lVar7;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05eb40(puVar9,param_2,lVar2,lVar3,lVar6,lVar8);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10620f73c; end: 10620f7a7; -[SCCameraTooltipPriorityResolverEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10620f73c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127435e4,0);
  _objc_destroyWeak(param_1 + _DAT_1127435e0);
  _objc_destroyWeak(param_1 + _DAT_1127435d8);
  _objc_destroyWeak(param_1 + _DAT_1127435dc);
  _objc_destroyWeak(param_1 + _DAT_1127435d4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127435e8);
  return;
}



/* Entry: 10620f7a8; end: 10620f8cb; -[SCCameraTooltipPriorityResolver initWithTooltipPriorityResolverDelegate:userInfoServices:userSession:legacyCameraTooltipsService:featureSettingService:] */

undefined1 *
FUN_10620f7a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f0760;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    func_0x00010beb0b00(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10620f8cc; end: 10620fa57; -[SCCameraTooltipPriorityResolver canShowTooltipWithType:isLensesOnboardingComplete:] */

void FUN_10620f8cc(ulong param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar5 = (int)*(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010bf4b900();
  _objc_release(puVar1);
  if (iVar5 == 0) {
LAB_10620fa18:
    param_1 = 0;
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar6 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar6);
    lVar2 = lVar6;
    func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_e8,0x10);
    if (lVar2 != 0) {
      lVar8 = *plStack_120;
      do {
        lVar9 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(lVar6);
          }
          puVar7 = *(undefined **)(lStack_128 + lVar9 * 8);
          puVar1 = puVar7;
          func_0x00010c2827c0();
          if (puVar1 == param_3) goto LAB_10620f9f4;
          func_0x00010c2827c0();
          uVar3 = param_1;
          func_0x00010be44b00();
          if ((uVar3 & 1) != 0) {
            _objc_release(lVar6);
            goto LAB_10620fa18;
          }
          lVar9 = lVar9 + 1;
        } while (lVar2 != lVar9);
        lVar2 = lVar6;
        func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar2 != 0);
    }
LAB_10620f9f4:
    _objc_release(lVar6);
    func_0x00010be44b00();
    puVar7 = param_3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (puVar7 == (undefined *)0x3) {
    uVar3 = param_1;
    func_0x00010be42620();
    if ((int)uVar3 != 0) {
      func_0x00010be41820(param_1);
    }
  }
  else {
    if (puVar7 == (undefined *)0x2) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c22f8c0();
    }
    else {
      if (puVar7 != (undefined *)0x1) {
        return;
      }
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c22fea0();
    }
    _objc_release(uVar4);
  }
  return;
}



/* Entry: 10620fa58; end: 10620fafb; -[SCCameraTooltipPriorityResolver _isTooltipAvailable:isLensesOnboardingComplete:] */

void FUN_10620fa58(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 == 3) {
    lVar2 = param_1;
    func_0x00010be42620();
    if ((int)lVar2 != 0) {
      func_0x00010be41820(param_1);
    }
  }
  else {
    if (param_3 == 2) {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c22f8c0();
    }
    else {
      if (param_3 != 1) {
        return;
      }
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c22fea0();
    }
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 10620fafc; end: 10620fb67; -[SCCameraTooltipPriorityResolver _setupTooltipItems] */

/* WARNING: Possible PIC construction at 0x00010620fb3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010620fb40) */

void FUN_10620fafc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_addObject__11259c1f0,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5068);
  return;
}



/* Entry: 10620fb68; end: 10620fbdb; -[SCCameraTooltipPriorityResolver _isLensesActiveOnCamera] */

long FUN_10620fb68(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c076400();
    _objc_release(param_1);
  }
  return lVar3;
}



/* Entry: 10620fbdc; end: 10620fc4f; -[SCCameraTooltipPriorityResolver _isOnMainCamera] */

long FUN_10620fbdc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c079080();
    _objc_release(param_1);
  }
  return lVar3;
}



/* Entry: 10620fc50; end: 10620fc93; -[SCCameraTooltipPriorityResolver _isOtherAlertVisible] */

undefined * FUN_10620fc50(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c083820();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 10620fc94; end: 10620fcef; -[SCCameraTooltipPriorityResolver .cxx_destruct] */

void FUN_10620fc94(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10620fcf0; end: 10620fdeb; -[SCCameraTooltipPriorityResolverFactoryImpl initWithUserSession:userInfoServices:legacyCameraTooltipsService:featureSettingService:] */

undefined1 *
FUN_10620fcf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f0768;
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10620fdec; end: 10620fe4b; -[SCCameraTooltipPriorityResolverFactoryImpl createCameraTooltipPriorityResolverWithDelegate:] */

void FUN_10620fdec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c8e90;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c054120();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10620fe4c; end: 10620fe93; -[SCCameraTooltipPriorityResolverFactoryImpl .cxx_destruct] */

void FUN_10620fe4c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10620fe94; end: 10620feff; -[SCCameraLegacyAudioHandler startAudioStreaming] */

void FUN_10620fe94(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf55480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c250c40();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10620ff00; end: 10620ff2b; -[SCCameraLegacyAudioHandler stopAudioStreaming] */

void FUN_10620ff00(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c256b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10620ff2c; end: 10620ff53; -[SCCameraLegacyAudioHandler .cxx_destruct] */

void FUN_10620ff2c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10620ff54; end: 10620ff5b; -[SCCameraLegacyDataSource captureHandler] */

undefined8 FUN_10620ff54(void)

{
  return 0;
}



/* Entry: 10620ff5c; end: 10620ff63; -[SCCameraLegacyDataSource positionSettingHandler] */

undefined8 FUN_10620ff5c(void)

{
  return 0;
}



/* Entry: 10620ff64; end: 10620ff6b; -[SCCameraLegacyDataSource zoomingHandler] */

undefined8 FUN_10620ff64(void)

{
  return 0;
}



/* Entry: 10620ff6c; end: 10620ff9f; -[SCCameraLegacyDataSource didInvalidateAllTokens] */

void FUN_10620ff6c(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf64540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


